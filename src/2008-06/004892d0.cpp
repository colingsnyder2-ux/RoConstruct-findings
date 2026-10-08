// from server: 100% by auto
// roc 2008-06 004892d0  unit: G3D::VertexAndPixelShader  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004892d0
//
// 004892d0  8b01                 mov eax, dword ptr [ecx]
// 004892d2  85c0                 test eax, eax
// 004892d4  7423                 je 0x4892f9
// 004892d6  8b5018               mov edx, dword ptr [eax + 0x18]
// 004892d9  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 004892dc  751b                 jne 0x4892f9
// 004892de  8b401c               mov eax, dword ptr [eax + 0x1c]
// 004892e1  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 004892e4  7513                 jne 0x4892f9
// 004892e6  b801000000           mov eax, 1
// 004892eb  3905ccef9600         cmp dword ptr [0x96efcc], eax
// 004892f1  7408                 je 0x4892fb
// 004892f3  83790400             cmp dword ptr [ecx + 4], 0
// 004892f7  7502                 jne 0x4892fb
// 004892f9  33c0                 xor eax, eax
// 004892fb  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?valid@VAR@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
