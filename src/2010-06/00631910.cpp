// from server: 100% by auto
// roc 2010-06 00631910  unit: std::D::DU?$char_traits::?$basic_ifstream  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00631910
//
// 00631910  33c0                 xor eax, eax
// 00631912  3901                 cmp dword ptr [ecx], eax
// 00631914  0f94c0               sete al
// 00631917  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ?isNull@?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
