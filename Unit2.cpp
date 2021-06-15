//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

const double start_angle = - 3 * M_PI / 4, end_angle = 3 * M_PI / 4;
double a, l, a1, l1;
double static inc = start_angle, difX, difY, step = 0.002, angle, old_angle = start_angle, angle_from = - M_PI / 2, angle_to = M_PI / 2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
Timer1->Enabled = 1;
Timer1->Interval = 1;
difX = (PaintBox1->ClientWidth) / 2;
difY = (PaintBox1->ClientHeight) / 2;
}
//---------------------------------------------------------------------------
double Y (double t)
{
  return a + l * cos(t);
}
//---------------------------------------------------------------------------
double X (double t)
{
  return a * tan(t) + l * sin(t);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Timer1Timer(TObject *Sender)
{
while ((inc <= angle_from) || ((inc >= angle_to) && (inc <= end_angle)))
    inc += step;
 
  angle = atan2(Y(inc), X(inc));

  PaintBox1->Canvas->Pen->Color = clGreen;
  PaintBox1->Canvas->MoveTo(0, difY - a);
  PaintBox1->Canvas->LineTo(2 * difX, difY - a);
 
  PaintBox1->Canvas->Pen->Color = clBlack;
  PaintBox1->Canvas->MoveTo(0, difY);
  PaintBox1->Canvas->LineTo(2 * difX, difY);
 
  PaintBox1->Canvas->MoveTo(difX, 0);
  PaintBox1->Canvas->LineTo(difX, 2 * difY);

  PaintBox1->Canvas->Pen->Color = clBtnFace;
  PaintBox1->Canvas->MoveTo(difX + X(inc - step), difY - Y(inc - step));
  PaintBox1->Canvas->LineTo(difX + X(inc - step) - cos(old_angle) * 2 * l, difY - Y(inc - step) + sin(old_angle) * 2 * l);
 
  PaintBox1->Canvas->Pen->Color = clBlue;
  PaintBox1->Canvas->MoveTo(difX + X(inc), difY - Y(inc));
  PaintBox1->Canvas->LineTo(difX + X(inc) - cos(angle) * 2 * l, difY - Y(inc) + sin(angle) * 2 * l);
 
  for (double i = angle_from + step; i < inc; i += step)
  {
	PaintBox1->Canvas->Pixels[difX + X(i - step)][difY - Y(i - step)] = clRed;
	PaintBox1->Canvas->Pixels[difX + X(i) - cos(atan2(Y(i), X(i))) * 2 * l][difY - Y(i) + sin(atan2(Y(i), X(i))) * 2 * l] = clRed;
  }
 
 
  old_angle = angle;
 
  inc += step;
 
  if (inc >= end_angle)
  {
    inc = start_angle;
	PaintBox1->Canvas->FillRect(PaintBox1->Canvas->ClipRect);
  }


int x0, y0;

x0=(PaintBox1->Width)/2;
y0=(PaintBox1->Height)/2;
PaintBox1->Canvas->Pen->Color = clBlack;

PaintBox1->Canvas->MoveTo(20, 240);
PaintBox1->Canvas->LineTo(20, 260);

PaintBox1->Canvas->MoveTo(40, 240);
PaintBox1->Canvas->LineTo(40, 260);

PaintBox1->Canvas->MoveTo(60, 240);
PaintBox1->Canvas->LineTo(60, 260);

PaintBox1->Canvas->MoveTo(80, 240);
PaintBox1->Canvas->LineTo(80, 260);

PaintBox1->Canvas->MoveTo(100, 240);
PaintBox1->Canvas->LineTo(100, 260);

PaintBox1->Canvas->MoveTo(120, 240);
PaintBox1->Canvas->LineTo(120, 260);

PaintBox1->Canvas->MoveTo(140, 240);
PaintBox1->Canvas->LineTo(140, 260);

PaintBox1->Canvas->MoveTo(160, 240);
PaintBox1->Canvas->LineTo(160, 260);

PaintBox1->Canvas->MoveTo(180, 240);
PaintBox1->Canvas->LineTo(180, 260);

PaintBox1->Canvas->MoveTo(200, 240);
PaintBox1->Canvas->LineTo(200, 260);

PaintBox1->Canvas->MoveTo(220, 240);
PaintBox1->Canvas->LineTo(220, 260);

PaintBox1->Canvas->MoveTo(240, 240);
PaintBox1->Canvas->LineTo(240, 260);

PaintBox1->Canvas->MoveTo(260, 240);
PaintBox1->Canvas->LineTo(260, 260);

PaintBox1->Canvas->MoveTo(280, 240);
PaintBox1->Canvas->LineTo(280, 260);

PaintBox1->Canvas->MoveTo(300, 240);
PaintBox1->Canvas->LineTo(300, 260);

PaintBox1->Canvas->MoveTo(320, 240);
PaintBox1->Canvas->LineTo(320, 260);

PaintBox1->Canvas->MoveTo(340, 240);
PaintBox1->Canvas->LineTo(340, 260);

PaintBox1->Canvas->MoveTo(360, 240);
PaintBox1->Canvas->LineTo(360, 260);

PaintBox1->Canvas->MoveTo(380, 240);
PaintBox1->Canvas->LineTo(380, 260);

PaintBox1->Canvas->MoveTo(400, 240);
PaintBox1->Canvas->LineTo(400, 260);

PaintBox1->Canvas->MoveTo(420, 240);
PaintBox1->Canvas->LineTo(420, 260);

PaintBox1->Canvas->MoveTo(440, 240);
PaintBox1->Canvas->LineTo(440, 260);

PaintBox1->Canvas->MoveTo(460, 240);
PaintBox1->Canvas->LineTo(460, 260);

PaintBox1->Canvas->MoveTo(480, 240);
PaintBox1->Canvas->LineTo(480, 260);

PaintBox1->Canvas->MoveTo(520, 240);
PaintBox1->Canvas->LineTo(520, 260);

PaintBox1->Canvas->MoveTo(540, 240);
PaintBox1->Canvas->LineTo(540, 260);

PaintBox1->Canvas->MoveTo(560, 240);
PaintBox1->Canvas->LineTo(560, 260);

PaintBox1->Canvas->MoveTo(580, 240);
PaintBox1->Canvas->LineTo(580, 260);

PaintBox1->Canvas->MoveTo(600, 240);
PaintBox1->Canvas->LineTo(600, 260);

PaintBox1->Canvas->MoveTo(620, 240);
PaintBox1->Canvas->LineTo(620, 260);

PaintBox1->Canvas->MoveTo(640, 240);
PaintBox1->Canvas->LineTo(640, 260);

PaintBox1->Canvas->MoveTo(660, 240);
PaintBox1->Canvas->LineTo(660, 260);

PaintBox1->Canvas->MoveTo(680, 240);
PaintBox1->Canvas->LineTo(680, 260);

PaintBox1->Canvas->MoveTo(700, 240);
PaintBox1->Canvas->LineTo(700, 260);

PaintBox1->Canvas->MoveTo(720, 240);
PaintBox1->Canvas->LineTo(720, 260);

PaintBox1->Canvas->MoveTo(740, 240);
PaintBox1->Canvas->LineTo(740, 260);

PaintBox1->Canvas->MoveTo(760, 240);
PaintBox1->Canvas->LineTo(760, 260);

PaintBox1->Canvas->MoveTo(780, 240);
PaintBox1->Canvas->LineTo(780, 260);

PaintBox1->Canvas->MoveTo(800, 240);
PaintBox1->Canvas->LineTo(800, 260);

PaintBox1->Canvas->MoveTo(820, 240);
PaintBox1->Canvas->LineTo(820, 260);

PaintBox1->Canvas->MoveTo(840, 240);
PaintBox1->Canvas->LineTo(840, 260);

PaintBox1->Canvas->MoveTo(860, 240);
PaintBox1->Canvas->LineTo(860, 260);

PaintBox1->Canvas->MoveTo(880, 240);
PaintBox1->Canvas->LineTo(880, 260);

PaintBox1->Canvas->MoveTo(900, 240);
PaintBox1->Canvas->LineTo(900, 260);

PaintBox1->Canvas->MoveTo(920, 240);
PaintBox1->Canvas->LineTo(920, 260);

PaintBox1->Canvas->MoveTo(940, 240);
PaintBox1->Canvas->LineTo(940, 260);

PaintBox1->Canvas->MoveTo(960, 240);
PaintBox1->Canvas->LineTo(960, 260);

PaintBox1->Canvas->MoveTo(980, 240);
PaintBox1->Canvas->LineTo(980, 260);

PaintBox1->Canvas->MoveTo(490, 10);
PaintBox1->Canvas->LineTo(510, 10);

PaintBox1->Canvas->MoveTo(490, 30);
PaintBox1->Canvas->LineTo(510, 30);

PaintBox1->Canvas->MoveTo(490, 50);
PaintBox1->Canvas->LineTo(510, 50);

PaintBox1->Canvas->MoveTo(490, 70);
PaintBox1->Canvas->LineTo(510, 70);

PaintBox1->Canvas->MoveTo(490, 90);
PaintBox1->Canvas->LineTo(510, 90);

PaintBox1->Canvas->MoveTo(490, 110);
PaintBox1->Canvas->LineTo(510, 110);

PaintBox1->Canvas->MoveTo(490, 130);
PaintBox1->Canvas->LineTo(510, 130);

PaintBox1->Canvas->MoveTo(490, 150);
PaintBox1->Canvas->LineTo(510, 150);

PaintBox1->Canvas->MoveTo(490, 170);
PaintBox1->Canvas->LineTo(510, 170);

PaintBox1->Canvas->MoveTo(490, 190);
PaintBox1->Canvas->LineTo(510, 190);

PaintBox1->Canvas->MoveTo(490, 210);
PaintBox1->Canvas->LineTo(510, 210);

PaintBox1->Canvas->MoveTo(490, 230);
PaintBox1->Canvas->LineTo(510, 230);

PaintBox1->Canvas->MoveTo(490, 270);
PaintBox1->Canvas->LineTo(510, 270);

PaintBox1->Canvas->MoveTo(490, 290);
PaintBox1->Canvas->LineTo(510, 290);

PaintBox1->Canvas->MoveTo(490, 310);
PaintBox1->Canvas->LineTo(510, 310);

PaintBox1->Canvas->MoveTo(490, 330);
PaintBox1->Canvas->LineTo(510, 330);

PaintBox1->Canvas->MoveTo(490, 350);
PaintBox1->Canvas->LineTo(510, 350);

PaintBox1->Canvas->MoveTo(490, 370);
PaintBox1->Canvas->LineTo(510, 370);

PaintBox1->Canvas->MoveTo(490, 390);
PaintBox1->Canvas->LineTo(510, 390);

PaintBox1->Canvas->MoveTo(490, 410);
PaintBox1->Canvas->LineTo(510, 410);

PaintBox1->Canvas->MoveTo(490, 430);
PaintBox1->Canvas->LineTo(510, 430);

PaintBox1->Canvas->MoveTo(490, 450);
PaintBox1->Canvas->LineTo(510, 450);

PaintBox1->Canvas->MoveTo(490, 470);
PaintBox1->Canvas->LineTo(510, 470);

PaintBox1->Canvas->MoveTo(490, 490);
PaintBox1->Canvas->LineTo(510, 490);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
a1 = StrToFloat(Edit2->Text);
l1 = StrToFloat(Edit1->Text);
a = a1 * 20;
l = l1 * 20;
Timer1->Enabled = true;
Label7->Visible = true;
Label8->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormActivate(TObject *Sender)
{
Timer1->Enabled = false;	
}
//---------------------------------------------------------------------------


