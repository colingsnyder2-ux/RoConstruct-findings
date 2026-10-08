// roc 2007-08 00446c10  unit: CRenderSettings::W4AASamples::?$EnumDesc  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00446c10
//
// 00446c10  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00446c14  8b5108               mov edx, dword ptr [ecx + 8]
// 00446c17  33c0                 xor eax, eax
// 00446c19  3b542408             cmp edx, dword ptr [esp + 8]
// 00446c1d  0f94c0               sete al
// 00446c20  c3                   ret 
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?equalValue@EnumDescriptor@Reflection@RBX@@CA_NPBVItem@123@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
