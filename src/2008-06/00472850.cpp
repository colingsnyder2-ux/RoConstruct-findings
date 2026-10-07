// roc 2008-06 00472850  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00472850
//
// 00472850  e85b750900           call 0x509db0
// 00472855  50                   push eax
// 00472856  e895eeffff           call 0x4716f0
// 0047285b  59                   pop ecx
// 0047285c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?init@GLCaps@G3D@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
