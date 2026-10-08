// roc 2007-08 00772620  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772620
//
// 00772620  56                   push esi
// 00772621  6a05                 push 5
// 00772623  33c9                 xor ecx, ecx
// 00772625  51                   push ecx
// 00772626  b890a55700           mov eax, 0x57a590
// 0077262b  50                   push eax
// 0077262c  33f6                 xor esi, esi
// 0077262e  56                   push esi
// 0077262f  ba70fe4c00           mov edx, 0x4cfe70
// 00772634  52                   push edx
// 00772635  6898b67900           push 0x79b698
// 0077263a  6828b57a00           push 0x7ab528
// 0077263f  b9702e8c00           mov ecx, 0x8c2e70
// 00772644  e8a779e0ff           call 0x579ff0
// 00772649  6840a47700           push 0x77a440
// 0077264e  e8d0e6ebff           call 0x630d23
// 00772653  83c404               add esp, 4
// 00772656  5e                   pop esi
// 00772657  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_scale@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
