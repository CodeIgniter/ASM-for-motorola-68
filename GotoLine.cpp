//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GotoLine.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGotoForm *GotoForm;
//---------------------------------------------------------------------------
__fastcall TGotoForm::TGotoForm(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TGotoForm::OKButtonClick(TObject *Sender)
{
    int i;

    txtLine->SetFocus();
    if (txtLine->Text.Length() < 1)
    {
        ShowMessage("�������кţ�");
        return;
    }
    
    for (i=0;i<txtLine->Text.Length();i++)
    {
        if (!isdigit(txtLine->Text[i+1]))
        {
            ShowMessage("�кų�����Χ��");
            return;
        }
    }

    LineNumber = StrToInt(txtLine->Text) - 1;
    if (LineNumber < 0)
        ModalResult = mrCancel;
    else
        ModalResult = mrOk;
}
//---------------------------------------------------------------------------
