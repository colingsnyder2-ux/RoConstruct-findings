// roc 2007-03 00773c00  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773c00
//
// 00773c00  56                   push esi
// 00773c01  6a04                 push 4
// 00773c03  33c9                 xor ecx, ecx
// 00773c05  51                   push ecx
// 00773c06  b800115900           mov eax, 0x591100
// 00773c0b  50                   push eax
// 00773c0c  33f6                 xor esi, esi
// 00773c0e  56                   push esi
// 00773c0f  ba805a4500           mov edx, 0x455a80
// 00773c14  52                   push edx
// 00773c15  6870a77900           push 0x79a770
// 00773c1a  6880c07a00           push 0x7ac080
// 00773c1f  b954e78b00           mov ecx, 0x8be754
// 00773c24  e8f7c5e1ff           call 0x590220
// 00773c29  68f0a87700           push 0x77a8f0
// 00773c2e  e880b5eaff           call 0x61f1b3
// 00773c33  83c404               add esp, 4
// 00773c36  5e                   pop esi
// 00773c37  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??__Edesc_CoordFrame@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
