// from server: 100% by auto
// roc 2010-06 0049c350  unit: G3D::VertexAndPixelShader  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049c350
//
// 0049c350  8b01                 mov eax, dword ptr [ecx]
// 0049c352  85c0                 test eax, eax
// 0049c354  7423                 je 0x49c379
// 0049c356  8b5018               mov edx, dword ptr [eax + 0x18]
// 0049c359  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 0049c35c  751b                 jne 0x49c379
// 0049c35e  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0049c361  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 0049c364  7513                 jne 0x49c379
// 0049c366  b801000000           mov eax, 1
// 0049c36b  39051831c000         cmp dword ptr [0xc03118], eax
// 0049c371  7408                 je 0x49c37b
// 0049c373  83790400             cmp dword ptr [ecx + 4], 0
// 0049c377  7502                 jne 0x49c37b
// 0049c379  33c0                 xor eax, eax
// 0049c37b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?valid@VAR@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
