#include "gvobjwidget.h"
#include "ui_gvobjwidget.h"

gvobjwidget::gvobjwidget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::gvobjwidget)
{
    ui->setupUi(this);
}

gvobjwidget::~gvobjwidget()
{
    delete ui;
}


void gvobjwidget::on_lineEdit_textChanged(const QString & )
{

}

void gvobjwidget::on_comboBox_currentTextChanged(const QString & )
{

}

void gvobjwidget::on_comboBox_2_currentTextChanged(const QString & )
{

}

void gvobjwidget::on_comboBox_3_currentTextChanged(const QString & )
{

}


void gvobjwidget::on_pushButton_clicked()
{
  QString label, shape, color, coltype, result1, result2;
  int index3;

  label = ui->lineEdit->text();
  shape = ui->comboBox->currentText();
  color = ui->comboBox_2->currentText();
  coltype = ui->comboBox_3->currentText();
  result1 ="node" + label + "[label=" + label + ", shape=" + shape + ", color=" + color +"];";
  result2 ="node" + label  +"[label=" + label + ", shape=" + shape + ", color=" + color + ", style=" + coltype +"];";
  index3 = ui->comboBox_3->currentIndex();

  if (index3==0)
  {
  ui->textBrowser->setText(result1);
  }
  else
  {
  ui->textBrowser->setText(result2);
  }
}

void gvobjwidget::on_pushButton_2_clicked()
{
    int index1, index2, index3;
    index1=0;
    index2=0;
    index3=0;

    ui->lineEdit->setText("");
    ui->textBrowser->setText("");
    ui->comboBox->setCurrentIndex(index1);
    ui->comboBox_2->setCurrentIndex(index2);
    ui->comboBox_3->setCurrentIndex(index3);
}

