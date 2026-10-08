// roc 2007-03 00773c40  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773c40
//
// 00773c40  56                   push esi
// 00773c41  6a04                 push 4
// 00773c43  33c9                 xor ecx, ecx
// 00773c45  51                   push ecx
// 00773c46  b810095900           mov eax, 0x590910
// 00773c4b  50                   push eax
// 00773c4c  33f6                 xor esi, esi
// 00773c4e  56                   push esi
// 00773c4f  ba705a4500           mov edx, 0x455a70
// 00773c54  52                   push edx
// 00773c55  6870a77900           push 0x79a770
// 00773c5a  6860197b00           push 0x7b1960
// 00773c5f  b9f8e68b00           mov ecx, 0x8be6f8
// 00773c64  e857c6e1ff           call 0x5902c0
// 00773c69  68d0a87700           push 0x77a8d0
// 00773c6e  e840b5eaff           call 0x61f1b3
// 00773c73  83c404               add esp, 4
// 00773c76  5e                   pop esi
// 00773c77  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??__Edesc_Focus@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
