// from server: 99% by colin
// roc 2007-08 007726a0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007726a0
//
// 007726a0  56                   push esi
// 007726a1  6a05                 push 5
// 007726a3  33c9                 xor ecx, ecx
// 007726a5  51                   push ecx
// 007726a6  b8b0a65700           mov eax, 0x58b9c0
// 007726ab  50                   push eax
// 007726ac  33f6                 xor esi, esi
// 007726ae  56                   push esi
// 007726af  ba70785800           mov edx, 0x5878b0
// 007726b4  52                   push edx
// 007726b5  6898b67900           push 0x7a6448
// 007726ba  6838b57a00           push 0x7af65c
// 007726bf  b9382e8c00           mov ecx, 0x8c3488
// 007726c4  e8677ae0ff           call 0x58ac30
// 007726c9  6800a47700           push 0x77a7b0
// 007726ce  e850e6ebff           call 0x630d23
// 007726d3  83c404               add esp, 4
// 007726d6  5e                   pop esi
// 007726d7  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_textureId@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp