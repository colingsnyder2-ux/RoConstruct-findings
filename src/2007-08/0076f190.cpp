// roc 2007-08 0076f190  unit: seg_00760000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f190
//
// 0076f190  6a01                 push 1
// 0076f192  6820be7900           push 0x79be20
// 0076f197  33c9                 xor ecx, ecx
// 0076f199  680cbe7900           push 0x79be0c
// 0076f19e  51                   push ecx
// 0076f19f  b8902c4900           mov eax, 0x492c90
// 0076f1a4  50                   push eax
// 0076f1a5  b9b0e28b00           mov ecx, 0x8be2b0
// 0076f1aa  e8e173d2ff           call 0x496590
// 0076f1af  68d0857700           push 0x7785d0
// 0076f1b4  e86a1becff           call 0x630d23
// 0076f1b9  59                   pop ecx
// 0076f1ba  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Efunc_playerFromCharacterOld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
