// roc 2007-03 007729c0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007729c0
//
// 007729c0  56                   push esi
// 007729c1  6a05                 push 5
// 007729c3  33c9                 xor ecx, ecx
// 007729c5  51                   push ecx
// 007729c6  b880195700           mov eax, 0x571980
// 007729cb  50                   push eax
// 007729cc  33f6                 xor esi, esi
// 007729ce  56                   push esi
// 007729cf  ba503f5800           mov edx, 0x583f50
// 007729d4  52                   push edx
// 007729d5  6814bf7a00           push 0x7abf14
// 007729da  6834bf7a00           push 0x7abf34
// 007729df  b948ca8b00           mov ecx, 0x8bca48
// 007729e4  e8f7eddfff           call 0x5717e0
// 007729e9  68609d7700           push 0x779d60
// 007729ee  e8c0c7eaff           call 0x61f1b3
// 007729f3  83c404               add esp, 4
// 007729f6  5e                   pop esi
// 007729f7  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ??__E?prop_StudsPerTileU@Texture@RBX@@2V?$PropDescriptor@VTexture@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
