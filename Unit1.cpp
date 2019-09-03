//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include<mmsystem.h> //dzwiek
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
 int x = -8;
 int y = -8;
 int punktDlaGraczaL = 0;
 int punktDlaGraczaP = 0;
 int licznikOdbic = 0;
 int xZmiana = 0;
 bool graRozpoczeta = false;

 int losowanie()
 {
      int liczbaWylosowana = 0;
      randomize();
      liczbaWylosowana  = random(23)+8;
      return liczbaWylosowana;
 }

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::goraGLTimer(TObject *Sender)
{
    if(paletkaLG->Top >= stol->Top)
        paletkaLG->Top -=10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::dolGLTimer(TObject *Sender)
{
    if(paletkaLG->Top <= stol->Top + stol->Height - paletkaPG->Height)
        paletkaLG->Top +=10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::goraGPTimer(TObject *Sender)
{
    if(paletkaPG->Top >= stol->Top)
        paletkaPG->Top -=10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::dolGPTimer(TObject *Sender)
{
    if(paletkaPG->Top <= stol->Top + stol->Height - paletkaPG->Height)
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


void __fastcall TForm1::pilkaTimerTimer(TObject *Sender)
{
   pilka->Left -= x;
   pilka->Top  -= y;

   //odbijanie od g�ry

   if(pilka->Top >= stol->Top)
        y = -y;
   //odbijanie od do�u
   if(pilka->Top <= stol->Top + stol->Height - pilka->Height)
        y = -y;

     //WygranaGL   SkUCHA Gracza PRawego
     if(pilka->Left >= paletkaPG->Left + paletkaPG->Width + pilka->Width/2)
     {
        pilkaTimer->Enabled = false;
        pilka->Visible = false;
        punktDlaGraczaL++;
     }
     //WygranaGP   SkUCHA Gracza Lewego
     else if(pilka->Left + pilka->Width/2 <= paletkaLG->Left + paletkaLG->Width)
     {
        pilkaTimer->Enabled = false;
        pilka->Visible = false;
        punktDlaGraczaP++;
     }
     //Odbicie od prawej Paletki
     else if(pilka->Top > paletkaPG->Top - pilka->Height/2 &&
             pilka->Top < paletkaPG->Top + paletkaPG->Height + pilka->Height/2 &&
             pilka->Left + pilka->Width > paletkaPG->Left)
             {
             sndPlaySound("snd/d1.wav",SND_ASYNC);
             pilkaTimer->Interval -=1;
             xZmiana = losowanie();
             if(x < 0)
             {
                 x = xZmiana;
                 licznikOdbic++;
             }
             }
     //Odbicie od lewej Paletki
     else if(pilka->Top > paletkaLG->Top - pilka->Height/2 &&
             pilka->Top < paletkaLG->Top + paletkaLG->Height + pilka->Height/2 &&
             pilka->Left < paletkaLG->Left + paletkaLG->Width)
             {
             pilkaTimer->Interval -=1;
             sndPlaySound("snd/d2.wav",SND_ASYNC);
             xZmiana = losowanie();
             if(x > 0)
             {
                 x = -xZmiana;
                 licznikOdbic++;
             }
             }

}
//---------------------------------------------------------------------------




