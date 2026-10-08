// roc 2007-08 00773e50  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773e50
//
// 00773e50  56                   push esi
// 00773e51  6a05                 push 5
// 00773e53  33c9                 xor ecx, ecx
// 00773e55  51                   push ecx
// 00773e56  b8c0fa5a00           mov eax, 0x5afac0
// 00773e5b  50                   push eax
// 00773e5c  33f6                 xor esi, esi
// 00773e5e  56                   push esi
// 00773e5f  ba10d44c00           mov edx, 0x4cd410
// 00773e64  52                   push edx
// 00773e65  6840a87a00           push 0x7aa840
// 00773e6a  68805d7b00           push 0x7b5d80
// 00773e6f  b9785c8c00           mov ecx, 0x8c5c78
// 00773e74  e817ace3ff           call 0x5aea90
// 00773e79  6860b57700           push 0x77b560
// 00773e7e  e8a0ceebff           call 0x630d23
// 00773e83  83c404               add esp, 4
// 00773e86  5e                   pop esi
// 00773e87  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Edesc_AmbientTop@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
