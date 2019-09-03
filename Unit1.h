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
        void __fastcall goraGLTimer(TObject *Sender);
        void __fastcall dolGLTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall goraGPTimer(TObject *Sender);
        void __fastcall dolGPTimer(TObject *Sender);
        void __fastcall pilkaTimerTimer(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
