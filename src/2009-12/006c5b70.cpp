// roc 2009-12 006c5b70  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c5b70
//
// 006c5b70  33c0                 xor eax, eax
// 006c5b72  3901                 cmp dword ptr [ecx], eax
// 006c5b74  0f94c0               sete al
// 006c5b77  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?isNull@?$ReferenceCountedPointer@VGFont@G3D@@@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
