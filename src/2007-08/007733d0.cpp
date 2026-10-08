// roc 2007-08 007733d0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007733d0
//
// 007733d0  56                   push esi
// 007733d1  6a05                 push 5
// 007733d3  33c9                 xor ecx, ecx
// 007733d5  51                   push ecx
// 007733d6  b8f0e25900           mov eax, 0x59e2f0
// 007733db  50                   push eax
// 007733dc  33f6                 xor esi, esi
// 007733de  56                   push esi
// 007733df  ba10ca5900           mov edx, 0x59ca10
// 007733e4  52                   push edx
// 007733e5  6898b67900           push 0x79b698
// 007733ea  6838b57a00           push 0x7ab538
// 007733ef  b9d8518c00           mov ecx, 0x8c51d8
// 007733f4  e8d7a7e2ff           call 0x59dbd0
// 007733f9  68d0af7700           push 0x77afd0
// 007733fe  e820d9ebff           call 0x630d23
// 00773403  83c404               add esp, 4
// 00773406  5e                   pop esi
// 00773407  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_textureId@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
