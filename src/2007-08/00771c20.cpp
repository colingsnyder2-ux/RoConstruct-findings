// roc 2007-08 00771c20  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771c20
//
// 00771c20  56                   push esi
// 00771c21  6a05                 push 5
// 00771c23  33c9                 xor ecx, ecx
// 00771c25  51                   push ecx
// 00771c26  b880315700           mov eax, 0x573180
// 00771c2b  50                   push eax
// 00771c2c  33f6                 xor esi, esi
// 00771c2e  56                   push esi
// 00771c2f  baa0785800           mov edx, 0x5878a0
// 00771c34  52                   push edx
// 00771c35  6840a87a00           push 0x7aa840
// 00771c3a  6870a87a00           push 0x7aa870
// 00771c3f  b95c278c00           mov ecx, 0x8c275c
// 00771c44  e85713e0ff           call 0x572fa0
// 00771c49  68a09f7700           push 0x779fa0
// 00771c4e  e8d0f0ebff           call 0x630d23
// 00771c53  83c404               add esp, 4
// 00771c56  5e                   pop esi
// 00771c57  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ??__E?prop_StudsPerTileV@Texture@RBX@@2V?$PropDescriptor@VTexture@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
