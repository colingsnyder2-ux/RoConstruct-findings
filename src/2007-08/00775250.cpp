// roc 2007-08 00775250  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775250
//
// 00775250  68fccf7b00           push 0x7bcffc
// 00775255  680ce57b00           push 0x7be50c
// 0077525a  b9d06f8c00           mov ecx, 0x8c6fd0
// 0077525f  e86c58e7ff           call 0x5eaad0
// 00775264  68c0bf7700           push 0x77bfc0
// 00775269  e8b5baebff           call 0x630d23
// 0077526e  59                   pop ecx
// 0077526f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??__Eevent_FlagCaptured@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
