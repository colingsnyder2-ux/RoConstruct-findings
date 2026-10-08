// roc 2007-03 00772a00  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772a00
//
// 00772a00  56                   push esi
// 00772a01  6a05                 push 5
// 00772a03  33c9                 xor ecx, ecx
// 00772a05  51                   push ecx
// 00772a06  b8c0195700           mov eax, 0x5719c0
// 00772a0b  50                   push eax
// 00772a0c  33f6                 xor esi, esi
// 00772a0e  56                   push esi
// 00772a0f  ba902d5a00           mov edx, 0x5a2d90
// 00772a14  52                   push edx
// 00772a15  6814bf7a00           push 0x7abf14
// 00772a1a  6844bf7a00           push 0x7abf44
// 00772a1f  b92cca8b00           mov ecx, 0x8bca2c
// 00772a24  e8b7eddfff           call 0x5717e0
// 00772a29  68409d7700           push 0x779d40
// 00772a2e  e880c7eaff           call 0x61f1b3
// 00772a33  83c404               add esp, 4
// 00772a36  5e                   pop esi
// 00772a37  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ??__E?prop_StudsPerTileV@Texture@RBX@@2V?$PropDescriptor@VTexture@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
