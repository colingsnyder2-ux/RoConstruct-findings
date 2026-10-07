// roc 2008-06 00485430  unit: G3D::Milestone  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485430
//
// 00485430  803d88ee960000       cmp byte ptr [0x96ee88], 0
// 00485437  7418                 je 0x485451
// 00485439  803d89ee960000       cmp byte ptr [0x96ee89], 0
// 00485440  740f                 je 0x485451
// 00485442  803d8aee960000       cmp byte ptr [0x96ee8a], 0
// 00485449  7406                 je 0x485451
// 0048544b  b801000000           mov eax, 1
// 00485450  c3                   ret 
// 00485451  33c0                 xor eax, eax
// 00485453  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?supportsPixelShaders@Shader@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
