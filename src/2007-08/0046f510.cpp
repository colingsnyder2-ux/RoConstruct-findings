// roc 2007-08 0046f510  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046f510
//
// 0046f510  e81b2a0900           call 0x501f30
// 0046f515  50                   push eax
// 0046f516  e885eeffff           call 0x46e3a0
// 0046f51b  59                   pop ecx
// 0046f51c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?init@GLCaps@G3D@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
