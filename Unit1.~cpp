//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include<mmsystem.h> //dzwiek
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
 double x = 0;
 double y = 0;
 double zwiekszPredkosc = 0.5;
 int punktyGraczaL = 0;
 int punktyGraczaP = 0;
 int licznikOdbic = 0;
 int xZmiana = 0;
 bool graRozpoczeta = false;
 bool turaGraczaLewego = false;
 int graDoPunktow = 0;
 char *wiadomosc;

 bool zaczynaLewy()
 {
      int liczbaWylosowana = 0;
      randomize();
      liczbaWylosowana  = random(2)+1;
      if (liczbaWylosowana == 0)
        return true;
      else return false;
 }

 int losowanie()
 {
      int liczbaWylosowana = 0;
      randomize();
      liczbaWylosowana  = random(23)+8;
      return liczbaWylosowana;
 }

 bool czyWygrana()
 {
     if(graDoPunktow == punktyGraczaL)
     {
        Form1->Label10->Visible = true;
        Form1->Label10->Caption = "WYGRYWA GRACZ LEWY!!!";
        Form1->Button5->Visible = true;
        Form1->Button6->Visible = true;
        return true;
     }
     else if(graDoPunktow == punktyGraczaP)
     {
        Form1->Label10->Visible = true;
        Form1->Label10->Caption = "WYGRYWA GRACZ PRAWY!!!";
        Form1->Button5->Visible = true;
        Form1->Button6->Visible = true;
        return true;
     }
    else
        return false;
 }

 void serwy()
 {
     licznikOdbic =0;
     Form1->Label8->Caption = IntToStr(licznikOdbic);

     Form1->paletkaLG->Left =   96;
     Form1->paletkaLG->Top =   224;

     Form1->paletkaPG->Left = 1344;
     Form1->paletkaPG->Top =   224;


     Form1->Label9->Visible = true;
     Form1->Label9->Caption = "2";
     Application->ProcessMessages();Sleep(1000);
     Form1->Label9->Caption = "1";
     Application->ProcessMessages();Sleep(1000);
     Form1->Label9->Visible = false;

     if((punktyGraczaL + punktyGraczaP) == 1)
     {
       if(turaGraczaLewego == true)
        {
            x = -8;
            y =  8;
            sndPlaySound("snd/d1.wav",SND_ASYNC);
            Form1->pilka->Left = 125;
            Form1->pilka->Top = 272;
        }
        else
        {
            x =  8;
            y = -8;
            sndPlaySound("snd/d2.wav",SND_ASYNC);
            Form1->pilka->Left = 1285;
            Form1->pilka->Top = 272;
        }
     }
     else if((punktyGraczaL + punktyGraczaP) == 2)
     {
       if(turaGraczaLewego == true) turaGraczaLewego = false;
       else turaGraczaLewego = true;

       if(turaGraczaLewego == true)
        {
            x = -8;
            y =  8;
            sndPlaySound("snd/d1.wav",SND_ASYNC);
            Form1->pilka->Left = 125;
            Form1->pilka->Top = 272;
        }
        else
        {
            x =  8;
            y = -8;
            sndPlaySound("snd/d2.wav",SND_ASYNC);
            Form1->pilka->Left = 1285;
            Form1->pilka->Top = 272;
        }
     }
     else if((punktyGraczaL + punktyGraczaP) > 2 &&
             (punktyGraczaL + punktyGraczaP)%2 ==0)
     {
       if(turaGraczaLewego == true) turaGraczaLewego = false;
       else turaGraczaLewego = true;

       if(turaGraczaLewego == true)
        {
            x = -8;
            y =  8;
            sndPlaySound("snd/d1.wav",SND_ASYNC);
            Form1->pilka->Left = 125;
            Form1->pilka->Top = 272;
        }
        else
        {
            x =  8;
            y = -8;
            sndPlaySound("snd/d2.wav",SND_ASYNC);
            Form1->pilka->Left = 1285;
            Form1->pilka->Top = 272;
        }
     }
     else if((punktyGraczaL + punktyGraczaP) > 2 &&
             (punktyGraczaL + punktyGraczaP)%2 == 1)
     {
        if(turaGraczaLewego == true)
        {
            x = -8;
            y =  8;
            sndPlaySound("snd/d1.wav",SND_ASYNC);
            Form1->pilka->Left = 125;
            Form1->pilka->Top = 272;
        }
        else
        {
            x =  8;
            y = -8;
            sndPlaySound("snd/d2.wav",SND_ASYNC);
            Form1->pilka->Left = 1285;
            Form1->pilka->Top = 272;
        }
     }
     Form1->pilka->Visible = true;
     Form1->pilkaTimer->Enabled = true;
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

   //odbijanie od góry

   if(pilka->Top >= stol->Top)
        y = -y;
   //odbijanie od do³u
   if(pilka->Top <= stol->Top + stol->Height - pilka->Height)
        y = -y;

     //WygranaGP   SkUCHA Gracza Lewego
     if(pilka->Left + pilka->Width <= paletkaLG->Left + paletkaLG->Width)
     {
        pilkaTimer->Enabled = false;
        pilka->Visible = false;
        punktyGraczaP++;
        Label6->Caption = IntToStr(punktyGraczaP);
        czyWygrana();

        if(czyWygrana() == false)
           serwy();
     }

     //WygranaGL   SkUCHA Gracza PRawego
     else if(pilka->Left + pilka->Width >= paletkaPG->Left + paletkaPG->Width)
     {
        pilkaTimer->Enabled = false;
        pilka->Visible = false;
        punktyGraczaL++;
        Label3->Caption = IntToStr(punktyGraczaL);
        czyWygrana();

        if(czyWygrana() == false)
           serwy();
     }

     //Odbicie od prawej Paletki
     else if(pilka->Top > paletkaPG->Top - pilka->Height/2 &&
             pilka->Top + pilka->Height/2 < paletkaPG->Top + paletkaPG->Height &&
             pilka->Left + pilka->Width > paletkaPG->Left)
             {
             sndPlaySound("snd/d2.wav",SND_ASYNC);
             xZmiana = losowanie();
             if(x < 0)
             {
                 x = xZmiana + zwiekszPredkosc;
             }
             licznikOdbic++;
             Label8->Caption = IntToStr(licznikOdbic);
             }

     //Odbicie od lewej Paletki
     else if(pilka->Top > paletkaLG->Top - pilka->Height/2 &&
             pilka->Top + pilka->Height/2 < paletkaLG->Top + paletkaLG->Height &&
             pilka->Left < paletkaLG->Left + paletkaLG->Width)
             {
             sndPlaySound("snd/d1.wav",SND_ASYNC);
             xZmiana = losowanie();
             if(x > 0)
             {
                 x = -xZmiana - zwiekszPredkosc;
             }
             licznikOdbic++;
             Label8->Caption = IntToStr(licznikOdbic);
             }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
     pilka->Visible = false;
     pilkaTimer->Enabled = false;

     Button5->Visible =false;
     Button6->Visible =false;
     Button1->Visible =true;
     Button2->Visible =true;

     punktyGraczaL = 0;
     punktyGraczaP = 0;
     licznikOdbic = 0;

     paletkaLG->Left =   96;
     paletkaLG->Top =   224;
     paletkaPG->Left = 1344;
     paletkaPG->Top =   224;

     Label10->Visible = false;

     Label3->Caption = IntToStr(punktyGraczaL);
     Label6->Caption = IntToStr(punktyGraczaP);
     Label8->Caption = IntToStr(licznikOdbic);

     if(zaczynaLewy() == true)
     {
        turaGraczaLewego = true;
        pilka->Left = 125;
        pilka->Top = 272;
        x = -8;
        y =  8;
     }
     if(zaczynaLewy() == false)
     {
        turaGraczaLewego = false;
        pilka->Left = 1285;
        pilka->Top = 272;
        x =  8;
        y = -8;
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
     Button1->Visible = false;
     Button2->Visible = false;
     Button3->Visible = true;
     Button4->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
   graDoPunktow = 11;
   Button3->Visible = false;
   Button4->Visible = false;

   Label9->Visible = true;
   Label9->Caption = "2";
   Application->ProcessMessages();Sleep(1000);
   Label9->Caption = "1";
   Application->ProcessMessages();Sleep(1000);
   Label9->Visible = false;

   if(turaGraczaLewego == true)
      sndPlaySound("snd/d1.wav",SND_ASYNC);
   else
      sndPlaySound("snd/d2.wav",SND_ASYNC);


   pilka->Visible = true;
   pilkaTimer->Enabled = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
   graDoPunktow = 21;
   Button3->Visible = false;
   Button4->Visible = false;

   Label9->Visible = true;
   Label9->Caption = "2";
   Application->ProcessMessages();Sleep(1000);
   Label9->Caption = "1";
   Application->ProcessMessages();Sleep(1000);
   Label9->Visible = false;

   if(turaGraczaLewego == true)
      sndPlaySound("snd/d1.wav",SND_ASYNC);
   else
      sndPlaySound("snd/d2.wav",SND_ASYNC);

   pilka->Visible = true;
   pilkaTimer->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormActivate(TObject *Sender)
{
    wiadomosc = "Gracz lewy steruje klawiczami <<A>> <<Z>>\nGracz prawy strza³kami <<GÓRA>> <<DÓ£>>\nGra mo¿e by prowadzona do 11 lub 21 punktow\nZaczyna losowy gracz\nKa¿dy gracz serwuje dwukrotnie\nNastêpnie zmiana osoby serwuj¹cej\n\nDla urozmaicenia:\n1.Przy ka¿dym odbicu pilka zmienia k¹t o losow¹ wartoœæ\n2.Ka¿de odbicie przyœpiesza pi³eczkê\n\nMilej zabawy ;)";

    Application->MessageBoxA(wiadomosc,"Witaj", MB_OK);
}
//---------------------------------------------------------------------------

