// roc 2007-08 00773f10  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773f10
//
// 00773f10  56                   push esi
// 00773f11  6a05                 push 5
// 00773f13  33c9                 xor ecx, ecx
// 00773f15  51                   push ecx
// 00773f16  b890f95a00           mov eax, 0x5af990
// 00773f1b  50                   push eax
// 00773f1c  33f6                 xor esi, esi
// 00773f1e  56                   push esi
// 00773f1f  ba90ca5a00           mov edx, 0x5aca90
// 00773f24  52                   push edx
// 00773f25  6840a87a00           push 0x7aa840
// 00773f2a  68ac5d7b00           push 0x7b5dac
// 00773f2f  b96c5d8c00           mov ecx, 0x8c5d6c
// 00773f34  e857abe3ff           call 0x5aea90
// 00773f39  6820b57700           push 0x77b520
// 00773f3e  e8e0cdebff           call 0x630d23
// 00773f43  83c404               add esp, 4
// 00773f46  5e                   pop esi
// 00773f47  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Edesc_ClearColor@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
