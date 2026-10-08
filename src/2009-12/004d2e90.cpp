// roc 2009-12 004d2e90  unit: G3D::TextureManager::TextureArgs  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d2e90
//
// 004d2e90  803dc4d0b70000       cmp byte ptr [0xb7d0c4], 0
// 004d2e97  750c                 jne 0x4d2ea5
// 004d2e99  803dc3d0b70000       cmp byte ptr [0xb7d0c3], 0
// 004d2ea0  7503                 jne 0x4d2ea5
// 004d2ea2  33c0                 xor eax, eax
// 004d2ea4  c3                   ret 
// 004d2ea5  b801000000           mov eax, 1
// 004d2eaa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?supports_two_sided_stencil@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
