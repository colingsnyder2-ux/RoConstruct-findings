// roc 2007-03 00446160  unit: seg_00440000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00446160
//
// 00446160  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00446164  8b5108               mov edx, dword ptr [ecx + 8]
// 00446167  33c0                 xor eax, eax
// 00446169  3b542408             cmp edx, dword ptr [esp + 8]
// 0044616d  0f94c0               sete al
// 00446170  c3                   ret 
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?equalValue@EnumDescriptor@Reflection@RBX@@CA_NPBVItem@123@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
