// roc 2007-08 00773410  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773410
//
// 00773410  56                   push esi
// 00773411  6a05                 push 5
// 00773413  33c9                 xor ecx, ecx
// 00773415  51                   push ecx
// 00773416  b890ed5900           mov eax, 0x59ed90
// 0077341b  50                   push eax
// 0077341c  33f6                 xor esi, esi
// 0077341e  56                   push esi
// 0077341f  ba00ca5900           mov edx, 0x59ca00
// 00773424  52                   push edx
// 00773425  6898b67900           push 0x79b698
// 0077342a  683c217b00           push 0x7b213c
// 0077342f  b910528c00           mov ecx, 0x8c5210
// 00773434  e8a7aae2ff           call 0x59dee0
// 00773439  68b0af7700           push 0x77afb0
// 0077343e  e8e0d8ebff           call 0x630d23
// 00773443  83c404               add esp, 4
// 00773446  5e                   pop esi
// 00773447  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??__Edesc_BinType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
