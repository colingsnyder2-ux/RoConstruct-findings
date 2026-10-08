// roc 2008-06 007f4290  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4290
//
// 007f4290  56                   push esi
// 007f4291  6a05                 push 5
// 007f4293  33c9                 xor ecx, ecx
// 007f4295  51                   push ecx
// 007f4296  b850875900           mov eax, 0x598750
// 007f429b  50                   push eax
// 007f429c  33f6                 xor esi, esi
// 007f429e  56                   push esi
// 007f429f  ba60735900           mov edx, 0x597360
// 007f42a4  52                   push edx
// 007f42a5  68ac298300           push 0x8329ac
// 007f42aa  68dc298300           push 0x8329dc
// 007f42af  b94c5f9700           mov ecx, 0x975f4c
// 007f42b4  e8a73fdaff           call 0x598260
// 007f42b9  68e0da7f00           push 0x7fdae0
// 007f42be  e8ecd4eaff           call 0x6a17af
// 007f42c3  83c404               add esp, 4
// 007f42c6  5e                   pop esi
// 007f42c7  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ??__E?prop_StudsPerTileV@Texture@RBX@@2V?$PropDescriptor@VTexture@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
