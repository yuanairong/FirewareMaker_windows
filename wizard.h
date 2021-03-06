#ifndef WIZARD_H
#define WIZARD_H

#include <QWizard>
#include <QWizardPage>
#include <QTextBrowser>

class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

namespace Ui {
class Wizard;
}

class Wizard : public QWizard
{
    Q_OBJECT

public:
    explicit Wizard(QWidget *parent = 0);
    ~Wizard();



private:
    Ui::Wizard *ui;

    QString prj_home_path;
    QTextBrowser *text;
    QLabel *lblPrjName;
    QLineEdit *lePrjName;
    QLabel *lblPrjPath;
    QLineEdit *lePrjPath;
    QPushButton *choosePrjBtn;
    QWizardPage *firstPage;
    QWizardPage *secondPage;
    QLabel          *lblServerIp;
    QLineEdit       *leServerIP;
    QLabel          *lblSrcAbsolutePath;
    QLineEdit       *leSrcAbsolutePath;
    QLabel          *lblUserName;
    QLineEdit       *leUserName;
    QLabel          *lblPwd;
    QLineEdit       *lePwd;
    QLabel          *lblRepo;
    QLineEdit       *leRepo;
    QCheckBox   *ckb_skip_build;





    void initFirstPage();
    void initSecondPage();
    void createPrj();

protected slots:
    void accept();
    void on_choosePrjBtn_clicked();
    void skipBuild();

};

#endif // WIZARD_H
