// roc 2007-08 007726e0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007726e0
//
// 007726e0  56                   push esi
// 007726e1  6a05                 push 5
// 007726e3  33c9                 xor ecx, ecx
// 007726e5  51                   push ecx
// 007726e6  b8f0a55700           mov eax, 0x57a5f0
// 007726eb  50                   push eax
// 007726ec  33f6                 xor esi, esi
// 007726ee  56                   push esi
// 007726ef  ba80fe4c00           mov edx, 0x4cfe80
// 007726f4  52                   push edx
// 007726f5  6898b67900           push 0x79b698
// 007726fa  6844b57a00           push 0x7ab544
// 007726ff  b9ac2e8c00           mov ecx, 0x8c2eac
// 00772704  e8e778e0ff           call 0x579ff0
// 00772709  68e0a37700           push 0x77a3e0
// 0077270e  e810e6ebff           call 0x630d23
// 00772713  83c404               add esp, 4
// 00772716  5e                   pop esi
// 00772717  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_vertColor@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
