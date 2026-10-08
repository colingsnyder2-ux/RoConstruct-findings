// roc 2007-03 00772000  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772000
//
// 00772000  56                   push esi
// 00772001  6a05                 push 5
// 00772003  33c9                 xor ecx, ecx
// 00772005  51                   push ecx
// 00772006  b8100b5500           mov eax, 0x550b10
// 0077200b  50                   push eax
// 0077200c  33f6                 xor esi, esi
// 0077200e  56                   push esi
// 0077200f  ba60045500           mov edx, 0x550460
// 00772014  52                   push edx
// 00772015  6870a77900           push 0x79a770
// 0077201a  68d4a77900           push 0x79a7d4
// 0077201f  b9a8bf8b00           mov ecx, 0x8bbfa8
// 00772024  e8f7e8ddff           call 0x550920
// 00772029  68b0997700           push 0x7799b0
// 0077202e  e880d1eaff           call 0x61f1b3
// 00772033  83c404               add esp, 4
// 00772036  5e                   pop esi
// 00772037  c3                   ret 
// library rbxgs/v8datamodel\Team.cpp (function ??__Eprop_Color@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Team.cpp
