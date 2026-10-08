// roc 2007-08 00773f50  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773f50
//
// 00773f50  56                   push esi
// 00773f51  6a05                 push 5
// 00773f53  33c9                 xor ecx, ecx
// 00773f55  51                   push ecx
// 00773f56  b830fc5a00           mov eax, 0x5afc30
// 00773f5b  50                   push eax
// 00773f5c  33f6                 xor esi, esi
// 00773f5e  56                   push esi
// 00773f5f  ba20e25a00           mov edx, 0x5ae220
// 00773f64  52                   push edx
// 00773f65  6898b67900           push 0x79b698
// 00773f6a  68b85d7b00           push 0x7b5db8
// 00773f6f  b95c5c8c00           mov ecx, 0x8c5c5c
// 00773f74  e8b7abe3ff           call 0x5aeb30
// 00773f79  68a0b57700           push 0x77b5a0
// 00773f7e  e8a0cdebff           call 0x630d23
// 00773f83  83c404               add esp, 4
// 00773f86  5e                   pop esi
// 00773f87  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Eprop_Time@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
