// from server: 100% by auto
// roc 2007-08 0058d680  unit: RBX::SoundService  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058d680
//
// 0058d680  33c0                 xor eax, eax
// 0058d682  3901                 cmp dword ptr [ecx], eax
// 0058d684  0f94c0               sete al
// 0058d687  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ?isNull@?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
