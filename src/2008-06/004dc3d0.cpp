// from server: 100% by auto
// roc 2008-06 004dc3d0  unit: RBX::ViewNew::ViewG3D  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dc3d0
//
// 004dc3d0  33c0                 xor eax, eax
// 004dc3d2  3901                 cmp dword ptr [ecx], eax
// 004dc3d4  0f94c0               sete al
// 004dc3d7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ?isNull@?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
