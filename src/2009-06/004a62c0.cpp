// from server: 100% by auto
// roc 2009-06 004a62c0  unit: G3D::TextureManager::TextureArgs  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a62c0
//
// 004a62c0  803d14c9a30000       cmp byte ptr [0xa3c914], 0
// 004a62c7  750c                 jne 0x4a62d5
// 004a62c9  803d13c9a30000       cmp byte ptr [0xa3c913], 0
// 004a62d0  7503                 jne 0x4a62d5
// 004a62d2  33c0                 xor eax, eax
// 004a62d4  c3                   ret 
// 004a62d5  b801000000           mov eax, 1
// 004a62da  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?supports_two_sided_stencil@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
