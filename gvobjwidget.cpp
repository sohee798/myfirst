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


void gvobjwidget::on_lineEdit_textChanged(const QString &argl)
{

}

void gvobjwidget::on_comboBox_currentTextChanged(const QString &arg1)
{

}

void gvobjwidget::on_comboBox_2_currentTextChanged(const QString &arg1)
{

}

void gvobjwidget::on_comboBox_3_currentTextChanged(const QString &arg1)
{

}

void gvobjwidget::on_comboBox_3_currentIndexChanged(int index)
{

}
void gvobjwidget::on_pushButton_clicked()
{
  QString label, shape, color, coltype, result;

  label = ui->lineEdit->text();
  shape = ui->comboBox->currentText();
  color = ui->comboBox_2->currentText();
  coltype = ui->comboBox_3->currentText();


  if (int combobox_3 = 0)
  {
   result ="[label=" + label + ", shape=" + shape + ", color=" + color +"];";
  }
  else
  {
  result ="[label=" + label + ", shape=" + shape + ", color=" + color + ", style=" + coltype +"];";
  }
  ui->textBrowser->setText(result);

}

void gvobjwidget::on_pushButton_2_clicked()
{
    ui->lineEdit->setText("");
    ui->textBrowser->setText("");

}



