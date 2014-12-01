//Вычислить частное от деления произведения двух первых цифр четырехзначного числа на произведение двух остальных цифр числа
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <math.h>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//функция разделения числа на цифры
int separator(int a, int precision)
{
	int result=0;
	int sep = a;
	for(int i=0; i < 4; i++)
	{
		if(i == precision-1)result = sep%10;
		sep = floor((float)(sep/10 ));
	}
	return result;
}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
//событие клика
void __fastcall TForm1::nextClick(TObject *Sender)
{
        int a = StrToInt(Input->Text);//получаем число
	float b = (float)(separator(a, 4) * separator(a, 3)) / (float)(separator(a, 2) * separator(a, 1));
        Output->Text = FloatToStr(b);//показываем результат
}
//---------------------------------------------------------------------------
