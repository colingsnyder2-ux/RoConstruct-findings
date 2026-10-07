// roc 2012-06 00750440  unit: RBX::ContentProvider::UCachedContent::?$AsyncHttpCache  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00750440
//
// 00750440  33c0                 xor eax, eax
// 00750442  3901                 cmp dword ptr [ecx], eax
// 00750444  0f94c0               sete al
// 00750447  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ?isNull@?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
