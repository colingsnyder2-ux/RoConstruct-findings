// roc 2007-08 00482180  unit: G3D::Milestone  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00482180
//
// 00482180  803d6ccf8b0000       cmp byte ptr [0x8bcf6c], 0
// 00482187  7418                 je 0x4821a1
// 00482189  803d6dcf8b0000       cmp byte ptr [0x8bcf6d], 0
// 00482190  740f                 je 0x4821a1
// 00482192  803d6fcf8b0000       cmp byte ptr [0x8bcf6f], 0
// 00482199  7406                 je 0x4821a1
// 0048219b  b801000000           mov eax, 1
// 004821a0  c3                   ret 
// 004821a1  33c0                 xor eax, eax
// 004821a3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?supportsPixelShaders@Shader@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
