#ifndef GVOBJWIDGET_H
#define GVOBJWIDGET_H

#include <QLineEdit>
#include <QMainWindow>
#include <QTextBrowser>
#include <QComboBox>

QT_BEGIN_NAMESPACE
namespace Ui { class gvobjwidget; }
QT_END_NAMESPACE



class gvobjwidget : public QMainWindow
{
    Q_OBJECT


public:
    gvobjwidget(QWidget *parent = nullptr);
    ~gvobjwidget();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_comboBox_2_currentTextChanged(const QString &arg1);

    void on_comboBox_3_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_comboBox_3_currentIndexChanged(int index);

private:
    Ui::gvobjwidget *ui;
};
#endif // GVOBJWIDGET_H
