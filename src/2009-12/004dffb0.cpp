// roc 2009-12 004dffb0  unit: G3D::VertexAndPixelShader  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dffb0
//
// 004dffb0  8b01                 mov eax, dword ptr [ecx]
// 004dffb2  85c0                 test eax, eax
// 004dffb4  7423                 je 0x4dffd9
// 004dffb6  8b5018               mov edx, dword ptr [eax + 0x18]
// 004dffb9  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 004dffbc  751b                 jne 0x4dffd9
// 004dffbe  8b401c               mov eax, dword ptr [eax + 0x1c]
// 004dffc1  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 004dffc4  7513                 jne 0x4dffd9
// 004dffc6  b801000000           mov eax, 1
// 004dffcb  390528d0b700         cmp dword ptr [0xb7d028], eax
// 004dffd1  7408                 je 0x4dffdb
// 004dffd3  83790400             cmp dword ptr [ecx + 4], 0
// 004dffd7  7502                 jne 0x4dffdb
// 004dffd9  33c0                 xor eax, eax
// 004dffdb  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?valid@VAR@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
