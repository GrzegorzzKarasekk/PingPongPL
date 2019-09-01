//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::goraGLTimer(TObject *Sender)
{
    paletkaLG->Top -=10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::dolGLTimer(TObject *Sender)
{
    paletkaLG->Top +=10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::goraGPTimer(TObject *Sender)
{
    paletkaPG->Top -=10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::dolGPTimer(TObject *Sender)
{
    paletkaPG->Top +=10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
     if( Key == 'A')
        goraGL->Enabled = true;
     if( Key == 'Z')
        dolGL->Enabled = true;

     if( Key == VK_UP)
        goraGP->Enabled = true;
     if( Key == VK_DOWN)
        dolGP->Enabled = true;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if( Key == 'A')
        goraGL->Enabled = false;
    if( Key == 'Z')
        dolGL->Enabled = false;

    if( Key == VK_UP)
        goraGP->Enabled = false;
    if( Key == VK_DOWN)
        dolGP->Enabled = false;
}
//---------------------------------------------------------------------------

