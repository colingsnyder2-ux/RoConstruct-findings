// from server: 100% by auto
// roc 2007-08 00482150  unit: G3D::Milestone  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00482150
//
// 00482150  803d6ccf8b0000       cmp byte ptr [0x8bcf6c], 0
// 00482157  7418                 je 0x482171
// 00482159  803d6dcf8b0000       cmp byte ptr [0x8bcf6d], 0
// 00482160  740f                 je 0x482171
// 00482162  803d6ecf8b0000       cmp byte ptr [0x8bcf6e], 0
// 00482169  7406                 je 0x482171
// 0048216b  b801000000           mov eax, 1
// 00482170  c3                   ret 
// 00482171  33c0                 xor eax, eax
// 00482173  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?supportsPixelShaders@Shader@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
