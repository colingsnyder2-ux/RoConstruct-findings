// roc 2007-08 00773350  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773350
//
// 00773350  56                   push esi
// 00773351  6a04                 push 4
// 00773353  33c9                 xor ecx, ecx
// 00773355  51                   push ecx
// 00773356  b8f0b75900           mov eax, 0x59b7f0
// 0077335b  50                   push eax
// 0077335c  33f6                 xor esi, esi
// 0077335e  56                   push esi
// 0077335f  ba007f4500           mov edx, 0x457f00
// 00773364  52                   push edx
// 00773365  6898b67900           push 0x79b698
// 0077336a  687c197b00           push 0x7b197c
// 0077336f  b920508c00           mov ecx, 0x8c5020
// 00773374  e8477ee2ff           call 0x59b1c0
// 00773379  6850af7700           push 0x77af50
// 0077337e  e8a0d9ebff           call 0x630d23
// 00773383  83c404               add esp, 4
// 00773386  5e                   pop esi
// 00773387  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??__Edesc_Focus@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
