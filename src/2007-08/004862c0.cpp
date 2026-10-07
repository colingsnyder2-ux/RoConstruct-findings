// roc 2007-08 004862c0  unit: G3D::VertexAndPixelShader  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004862c0
//
// 004862c0  8b01                 mov eax, dword ptr [ecx]
// 004862c2  85c0                 test eax, eax
// 004862c4  7423                 je 0x4862e9
// 004862c6  8b5018               mov edx, dword ptr [eax + 0x18]
// 004862c9  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 004862cc  751b                 jne 0x4862e9
// 004862ce  8b401c               mov eax, dword ptr [eax + 0x1c]
// 004862d1  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 004862d4  7513                 jne 0x4862e9
// 004862d6  b801000000           mov eax, 1
// 004862db  3905b0d08b00         cmp dword ptr [0x8bd0b0], eax
// 004862e1  7408                 je 0x4862eb
// 004862e3  83790400             cmp dword ptr [ecx + 4], 0
// 004862e7  7502                 jne 0x4862eb
// 004862e9  33c0                 xor eax, eax
// 004862eb  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?valid@VAR@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
