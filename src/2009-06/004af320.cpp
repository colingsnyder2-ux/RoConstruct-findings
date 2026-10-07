// roc 2009-06 004af320  unit: G3D::Milestone  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af320
//
// 004af320  803d18c9a30000       cmp byte ptr [0xa3c918], 0
// 004af327  7418                 je 0x4af341
// 004af329  803d19c9a30000       cmp byte ptr [0xa3c919], 0
// 004af330  740f                 je 0x4af341
// 004af332  803d1ac9a30000       cmp byte ptr [0xa3c91a], 0
// 004af339  7406                 je 0x4af341
// 004af33b  b801000000           mov eax, 1
// 004af340  c3                   ret 
// 004af341  33c0                 xor eax, eax
// 004af343  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?supportsPixelShaders@Shader@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
