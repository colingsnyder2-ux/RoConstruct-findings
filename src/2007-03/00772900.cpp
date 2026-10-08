// roc 2007-03 00772900  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772900
//
// 00772900  56                   push esi
// 00772901  6a05                 push 5
// 00772903  33c9                 xor ecx, ecx
// 00772905  51                   push ecx
// 00772906  b880185700           mov eax, 0x571880
// 0077290b  50                   push eax
// 0077290c  33f6                 xor esi, esi
// 0077290e  56                   push esi
// 0077290f  baa0424c00           mov edx, 0x4c42a0
// 00772914  52                   push edx
// 00772915  6814bf7a00           push 0x7abf14
// 0077291a  6820ee7900           push 0x79ee20
// 0077291f  b9f4c98b00           mov ecx, 0x8bc9f4
// 00772924  e877eddfff           call 0x5716a0
// 00772929  68c09d7700           push 0x779dc0
// 0077292e  e880c8eaff           call 0x61f1b3
// 00772933  83c404               add esp, 4
// 00772936  5e                   pop esi
// 00772937  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ??__E?prop_Texture@Decal@RBX@@2V?$PropDescriptor@VDecal@RBX@@VTextureId@2@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
