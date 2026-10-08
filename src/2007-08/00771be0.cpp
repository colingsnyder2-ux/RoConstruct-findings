// roc 2007-08 00771be0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771be0
//
// 00771be0  56                   push esi
// 00771be1  6a05                 push 5
// 00771be3  33c9                 xor ecx, ecx
// 00771be5  51                   push ecx
// 00771be6  b840315700           mov eax, 0x573140
// 00771beb  50                   push eax
// 00771bec  33f6                 xor esi, esi
// 00771bee  56                   push esi
// 00771bef  bab0255700           mov edx, 0x5725b0
// 00771bf4  52                   push edx
// 00771bf5  6840a87a00           push 0x7aa840
// 00771bfa  6860a87a00           push 0x7aa860
// 00771bff  b978278c00           mov ecx, 0x8c2778
// 00771c04  e89713e0ff           call 0x572fa0
// 00771c09  68c09f7700           push 0x779fc0
// 00771c0e  e810f1ebff           call 0x630d23
// 00771c13  83c404               add esp, 4
// 00771c16  5e                   pop esi
// 00771c17  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ??__E?prop_StudsPerTileU@Texture@RBX@@2V?$PropDescriptor@VTexture@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
