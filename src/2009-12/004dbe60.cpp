// roc 2009-12 004dbe60  unit: G3D::Milestone  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dbe60
//
// 004dbe60  803dc8d0b70000       cmp byte ptr [0xb7d0c8], 0
// 004dbe67  7418                 je 0x4dbe81
// 004dbe69  803dc9d0b70000       cmp byte ptr [0xb7d0c9], 0
// 004dbe70  740f                 je 0x4dbe81
// 004dbe72  803dcad0b70000       cmp byte ptr [0xb7d0ca], 0
// 004dbe79  7406                 je 0x4dbe81
// 004dbe7b  b801000000           mov eax, 1
// 004dbe80  c3                   ret 
// 004dbe81  33c0                 xor eax, eax
// 004dbe83  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?supportsPixelShaders@Shader@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
