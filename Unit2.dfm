object Form2: TForm2
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Conchoid of Nicomedes'
  ClientHeight = 767
  ClientWidth = 1105
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object PaintBox1: TPaintBox
    Left = 38
    Top = 161
    Width = 1000
    Height = 500
  end
  object Label1: TLabel
    Left = 32
    Top = 24
    Width = 715
    Height = 28
    Caption = 'Enter the distance from the origin to the straight line'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 753
    Top = 24
    Width = 39
    Height = 28
    Caption = '(a)'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Consolas'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 798
    Top = 24
    Width = 13
    Height = 28
    Caption = ':'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 32
    Top = 80
    Width = 819
    Height = 28
    Caption = 'Enter a distance equal to half of the line that draws the curve'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 857
    Top = 80
    Width = 39
    Height = 28
    Caption = '(l)'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Consolas'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object Label6: TLabel
    Left = 902
    Top = 80
    Width = 13
    Height = 28
    Caption = ':'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label7: TLabel
    Left = 516
    Top = 128
    Width = 54
    Height = 19
    Caption = 'x-axis'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
  end
  object Label8: TLabel
    Left = 1044
    Top = 400
    Width = 54
    Height = 19
    Caption = 'y-axis'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
  end
  object Edit1: TEdit
    Left = 921
    Top = 77
    Width = 152
    Height = 36
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 817
    Top = 21
    Width = 256
    Height = 36
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
  end
  object Button1: TButton
    Left = 448
    Top = 688
    Width = 185
    Height = 49
    Caption = 'Run'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = Button1Click
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 784
    Top = 680
  end
end
