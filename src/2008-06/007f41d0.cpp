// roc 2008-06 007f41d0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f41d0
//
// 007f41d0  56                   push esi
// 007f41d1  6a05                 push 5
// 007f41d3  33c9                 xor ecx, ecx
// 007f41d5  51                   push ecx
// 007f41d6  b890865900           mov eax, 0x598690
// 007f41db  50                   push eax
// 007f41dc  33f6                 xor esi, esi
// 007f41de  56                   push esi
// 007f41df  bae05b4e00           mov edx, 0x4e5be0
// 007f41e4  52                   push edx
// 007f41e5  68ac298300           push 0x8329ac
// 007f41ea  68b8298300           push 0x8329b8
// 007f41ef  b9f85e9700           mov ecx, 0x975ef8
// 007f41f4  e8b73fdaff           call 0x5981b0
// 007f41f9  6840db7f00           push 0x7fdb40
// 007f41fe  e8acd5eaff           call 0x6a17af
// 007f4203  83c404               add esp, 4
// 007f4206  5e                   pop esi
// 007f4207  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ??__E?prop_Specular@Decal@RBX@@2V?$PropDescriptor@VDecal@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
