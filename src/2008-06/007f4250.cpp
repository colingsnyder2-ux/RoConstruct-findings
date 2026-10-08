// roc 2008-06 007f4250  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4250
//
// 007f4250  56                   push esi
// 007f4251  6a05                 push 5
// 007f4253  33c9                 xor ecx, ecx
// 007f4255  51                   push ecx
// 007f4256  b810875900           mov eax, 0x598710
// 007f425b  50                   push eax
// 007f425c  33f6                 xor esi, esi
// 007f425e  56                   push esi
// 007f425f  ba50735900           mov edx, 0x597350
// 007f4264  52                   push edx
// 007f4265  68ac298300           push 0x8329ac
// 007f426a  68cc298300           push 0x8329cc
// 007f426f  b9685f9700           mov ecx, 0x975f68
// 007f4274  e8e73fdaff           call 0x598260
// 007f4279  6800db7f00           push 0x7fdb00
// 007f427e  e82cd5eaff           call 0x6a17af
// 007f4283  83c404               add esp, 4
// 007f4286  5e                   pop esi
// 007f4287  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ??__E?prop_StudsPerTileU@Texture@RBX@@2V?$PropDescriptor@VTexture@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
