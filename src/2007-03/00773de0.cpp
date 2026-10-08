// roc 2007-03 00773de0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773de0
//
// 00773de0  56                   push esi
// 00773de1  6a05                 push 5
// 00773de3  33c9                 xor ecx, ecx
// 00773de5  51                   push ecx
// 00773de6  b880c45900           mov eax, 0x59c480
// 00773deb  50                   push eax
// 00773dec  33f6                 xor esi, esi
// 00773dee  56                   push esi
// 00773def  ba00b15900           mov edx, 0x59b100
// 00773df4  52                   push edx
// 00773df5  6870a77900           push 0x79a770
// 00773dfa  68f41f7b00           push 0x7b1ff4
// 00773dff  b95ce88b00           mov ecx, 0x8be85c
// 00773e04  e8e73ee2ff           call 0x597cf0
// 00773e09  68b0a97700           push 0x77a9b0
// 00773e0e  e8a0b3eaff           call 0x61f1b3
// 00773e13  83c404               add esp, 4
// 00773e16  5e                   pop esi
// 00773e17  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Eprop_Time@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
