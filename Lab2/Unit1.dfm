object Form1: TForm1
  Left = 295
  Top = 120
  Width = 358
  Height = 109
  Caption = 'Main'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 38
    Height = 16
    Caption = #1042#1074#1086#1076
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 40
    Width = 48
    Height = 16
    Caption = #1042#1099#1074#1086#1076
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object next: TButton
    Left = 256
    Top = 8
    Width = 75
    Height = 25
    Caption = #1042#1099#1095#1080#1089#1083#1080#1090#1100
    TabOrder = 0
    OnClick = nextClick
  end
  object Input: TEdit
    Left = 72
    Top = 8
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object Output: TEdit
    Left = 72
    Top = 40
    Width = 121
    Height = 21
    ReadOnly = True
    TabOrder = 2
  end
end
