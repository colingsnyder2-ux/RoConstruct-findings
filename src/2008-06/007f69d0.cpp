// roc 2008-06 007f69d0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f69d0
//
// 007f69d0  56                   push esi
// 007f69d1  6a05                 push 5
// 007f69d3  33c9                 xor ecx, ecx
// 007f69d5  51                   push ecx
// 007f69d6  b830275e00           mov eax, 0x5e2730
// 007f69db  50                   push eax
// 007f69dc  33f6                 xor esi, esi
// 007f69de  56                   push esi
// 007f69df  bae00b5e00           mov edx, 0x5e0be0
// 007f69e4  52                   push edx
// 007f69e5  6890248200           push 0x822490
// 007f69ea  6858df8300           push 0x83df58
// 007f69ef  b91ca99700           mov ecx, 0x97a91c
// 007f69f4  e877a7deff           call 0x5e1170
// 007f69f9  6860f77f00           push 0x7ff760
// 007f69fe  e8acadeaff           call 0x6a17af
// 007f6a03  83c404               add esp, 4
// 007f6a06  5e                   pop esi
// 007f6a07  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Eprop_Time@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
