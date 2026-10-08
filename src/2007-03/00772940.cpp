// roc 2007-03 00772940  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772940
//
// 00772940  56                   push esi
// 00772941  6a05                 push 5
// 00772943  33c9                 xor ecx, ecx
// 00772945  51                   push ecx
// 00772946  b800195700           mov eax, 0x571900
// 0077294b  50                   push eax
// 0077294c  33f6                 xor esi, esi
// 0077294e  56                   push esi
// 0077294f  ba20286000           mov edx, 0x602820
// 00772954  52                   push edx
// 00772955  6814bf7a00           push 0x7abf14
// 0077295a  6820bf7a00           push 0x7abf20
// 0077295f  b9d8c98b00           mov ecx, 0x8bc9d8
// 00772964  e8d7eddfff           call 0x571740
// 00772969  68a09d7700           push 0x779da0
// 0077296e  e840c8eaff           call 0x61f1b3
// 00772973  83c404               add esp, 4
// 00772976  5e                   pop esi
// 00772977  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ??__E?prop_Specular@Decal@RBX@@2V?$PropDescriptor@VDecal@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
