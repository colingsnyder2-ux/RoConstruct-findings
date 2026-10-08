// from server: 100% by auto
// roc 2009-06 004a8b00  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8b00
//
// 004a8b00  e89b420c00           call 0x56cda0
// 004a8b05  50                   push eax
// 004a8b06  e895eeffff           call 0x4a79a0
// 004a8b0b  59                   pop ecx
// 004a8b0c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?init@GLCaps@G3D@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
