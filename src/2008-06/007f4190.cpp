// roc 2008-06 007f4190  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4190
//
// 007f4190  56                   push esi
// 007f4191  6a05                 push 5
// 007f4193  33c9                 xor ecx, ecx
// 007f4195  51                   push ecx
// 007f4196  b810865900           mov eax, 0x598610
// 007f419b  50                   push eax
// 007f419c  33f6                 xor esi, esi
// 007f419e  56                   push esi
// 007f419f  bab05b4e00           mov edx, 0x4e5bb0
// 007f41a4  52                   push edx
// 007f41a5  68ac298300           push 0x8329ac
// 007f41aa  68cc288300           push 0x8328cc
// 007f41af  b9145f9700           mov ecx, 0x975f14
// 007f41b4  e8473fdaff           call 0x598100
// 007f41b9  6860db7f00           push 0x7fdb60
// 007f41be  e8ecd5eaff           call 0x6a17af
// 007f41c3  83c404               add esp, 4
// 007f41c6  5e                   pop esi
// 007f41c7  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ??__E?prop_Texture@Decal@RBX@@2V?$PropDescriptor@VDecal@RBX@@VTextureId@2@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
