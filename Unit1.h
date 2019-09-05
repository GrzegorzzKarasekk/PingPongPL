//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TShape *tlo;
        TImage *stol;
        TImage *paletkaLG;
        TImage *paletkaPG;
        TTimer *goraGL;
        TTimer *dolGL;
        TTimer *goraGP;
        TTimer *dolGP;
        TTimer *pilkaTimer;
        TImage *pilka;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TLabel *Label9;
        TLabel *Label10;
        TButton *Button5;
        TButton *Button6;
        void __fastcall goraGLTimer(TObject *Sender);
        void __fastcall dolGLTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall goraGPTimer(TObject *Sender);
        void __fastcall dolGPTimer(TObject *Sender);
        void __fastcall pilkaTimerTimer(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
