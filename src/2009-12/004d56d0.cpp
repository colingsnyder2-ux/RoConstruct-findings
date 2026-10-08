// roc 2009-12 004d56d0  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d56d0
//
// 004d56d0  e8db671100           call 0x5ebeb0
// 004d56d5  50                   push eax
// 004d56d6  e895eeffff           call 0x4d4570
// 004d56db  59                   pop ecx
// 004d56dc  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?init@GLCaps@G3D@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
