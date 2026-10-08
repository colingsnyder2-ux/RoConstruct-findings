// roc 2007-08 00773310  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773310
//
// 00773310  56                   push esi
// 00773311  6a04                 push 4
// 00773313  33c9                 xor ecx, ecx
// 00773315  51                   push ecx
// 00773316  b830c05900           mov eax, 0x59c030
// 0077331b  50                   push eax
// 0077331c  33f6                 xor esi, esi
// 0077331e  56                   push esi
// 0077331f  ba107f4500           mov edx, 0x457f10
// 00773324  52                   push edx
// 00773325  6898b67900           push 0x79b698
// 0077332a  68c0a97a00           push 0x7aa9c0
// 0077332f  b97c508c00           mov ecx, 0x8c507c
// 00773334  e8e77de2ff           call 0x59b120
// 00773339  6870af7700           push 0x77af70
// 0077333e  e8e0d9ebff           call 0x630d23
// 00773343  83c404               add esp, 4
// 00773346  5e                   pop esi
// 00773347  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??__Edesc_CoordFrame@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
