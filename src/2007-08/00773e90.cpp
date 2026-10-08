// roc 2007-08 00773e90  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773e90
//
// 00773e90  56                   push esi
// 00773e91  6a05                 push 5
// 00773e93  33c9                 xor ecx, ecx
// 00773e95  51                   push ecx
// 00773e96  b8e0f65a00           mov eax, 0x5af6e0
// 00773e9b  50                   push eax
// 00773e9c  33f6                 xor esi, esi
// 00773e9e  56                   push esi
// 00773e9f  ba40d44c00           mov edx, 0x4cd440
// 00773ea4  52                   push edx
// 00773ea5  6840a87a00           push 0x7aa840
// 00773eaa  68905d7b00           push 0x7b5d90
// 00773eaf  b9405c8c00           mov ecx, 0x8c5c40
// 00773eb4  e8d7abe3ff           call 0x5aea90
// 00773eb9  6840b57700           push 0x77b540
// 00773ebe  e860ceebff           call 0x630d23
// 00773ec3  83c404               add esp, 4
// 00773ec6  5e                   pop esi
// 00773ec7  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Edesc_AmbientBottom@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
