// from server: 100% by auto
// roc 2007-08 00486460  unit: G3D::VertexAndPixelShader  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486460
//
// 00486460  8bc1                 mov eax, ecx
// 00486462  33c9                 xor ecx, ecx
// 00486464  8908                 mov dword ptr [eax], ecx
// 00486466  894804               mov dword ptr [eax + 4], ecx
// 00486469  894808               mov dword ptr [eax + 8], ecx
// 0048646c  89480c               mov dword ptr [eax + 0xc], ecx
// 0048646f  894810               mov dword ptr [eax + 0x10], ecx
// 00486472  894814               mov dword ptr [eax + 0x14], ecx
// 00486475  c7401806140000       mov dword ptr [eax + 0x18], 0x1406
// 0048647c  89481c               mov dword ptr [eax + 0x1c], ecx
// 0048647f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ??0VAR@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
