// roc 2010-06 0048ebd0  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048ebd0
//
// 0048ebd0  e81b090c00           call 0x54f4f0
// 0048ebd5  50                   push eax
// 0048ebd6  e895eeffff           call 0x48da70
// 0048ebdb  59                   pop ecx
// 0048ebdc  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?init@GLCaps@G3D@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
