// from server: 100% by auto
// roc 2010-06 00498290  unit: G3D::Milestone  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00498290
//
// 00498290  803dc438c00000       cmp byte ptr [0xc038c4], 0
// 00498297  7418                 je 0x4982b1
// 00498299  803dc538c00000       cmp byte ptr [0xc038c5], 0
// 004982a0  740f                 je 0x4982b1
// 004982a2  803dc638c00000       cmp byte ptr [0xc038c6], 0
// 004982a9  7406                 je 0x4982b1
// 004982ab  b801000000           mov eax, 1
// 004982b0  c3                   ret 
// 004982b1  33c0                 xor eax, eax
// 004982b3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?supportsPixelShaders@Shader@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
