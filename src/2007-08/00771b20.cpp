// roc 2007-08 00771b20  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771b20
//
// 00771b20  56                   push esi
// 00771b21  6a05                 push 5
// 00771b23  33c9                 xor ecx, ecx
// 00771b25  51                   push ecx
// 00771b26  b840305700           mov eax, 0x573040
// 00771b2b  50                   push eax
// 00771b2c  33f6                 xor esi, esi
// 00771b2e  56                   push esi
// 00771b2f  ba90fe4c00           mov edx, 0x4cfe90
// 00771b34  52                   push edx
// 00771b35  6840a87a00           push 0x7aa840
// 00771b3a  6820f87900           push 0x79f820
// 00771b3f  b924278c00           mov ecx, 0x8c2724
// 00771b44  e81713e0ff           call 0x572e60
// 00771b49  6820a07700           push 0x77a020
// 00771b4e  e8d0f1ebff           call 0x630d23
// 00771b53  83c404               add esp, 4
// 00771b56  5e                   pop esi
// 00771b57  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ??__E?prop_Texture@Decal@RBX@@2V?$PropDescriptor@VDecal@RBX@@VTextureId@2@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
