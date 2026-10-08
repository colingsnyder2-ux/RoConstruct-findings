// roc 2009-12 004e0150  unit: G3D::VertexAndPixelShader  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004e0150
//
// 004e0150  8bc1                 mov eax, ecx
// 004e0152  33c9                 xor ecx, ecx
// 004e0154  8908                 mov dword ptr [eax], ecx
// 004e0156  894804               mov dword ptr [eax + 4], ecx
// 004e0159  894808               mov dword ptr [eax + 8], ecx
// 004e015c  89480c               mov dword ptr [eax + 0xc], ecx
// 004e015f  894810               mov dword ptr [eax + 0x10], ecx
// 004e0162  894814               mov dword ptr [eax + 0x14], ecx
// 004e0165  c7401806140000       mov dword ptr [eax + 0x18], 0x1406
// 004e016c  89481c               mov dword ptr [eax + 0x1c], ecx
// 004e016f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ??0VAR@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
