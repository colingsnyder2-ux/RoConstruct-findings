// roc 2009-06 004b3250  unit: G3D::VertexAndPixelShader  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b3250
//
// 004b3250  8b01                 mov eax, dword ptr [ecx]
// 004b3252  85c0                 test eax, eax
// 004b3254  7423                 je 0x4b3279
// 004b3256  8b5018               mov edx, dword ptr [eax + 0x18]
// 004b3259  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 004b325c  751b                 jne 0x4b3279
// 004b325e  8b401c               mov eax, dword ptr [eax + 0x1c]
// 004b3261  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 004b3264  7513                 jne 0x4b3279
// 004b3266  b801000000           mov eax, 1
// 004b326b  390568c8a300         cmp dword ptr [0xa3c868], eax
// 004b3271  7408                 je 0x4b327b
// 004b3273  83790400             cmp dword ptr [ecx + 4], 0
// 004b3277  7502                 jne 0x4b327b
// 004b3279  33c0                 xor eax, eax
// 004b327b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?valid@VAR@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
