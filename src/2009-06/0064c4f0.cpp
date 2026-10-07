// roc 2009-06 0064c4f0  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064c4f0
//
// 0064c4f0  33c0                 xor eax, eax
// 0064c4f2  3901                 cmp dword ptr [ecx], eax
// 0064c4f4  0f94c0               sete al
// 0064c4f7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ?isNull@?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
