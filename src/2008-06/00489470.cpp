// roc 2008-06 00489470  unit: G3D::VertexAndPixelShader  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489470
//
// 00489470  8bc1                 mov eax, ecx
// 00489472  33c9                 xor ecx, ecx
// 00489474  8908                 mov dword ptr [eax], ecx
// 00489476  894804               mov dword ptr [eax + 4], ecx
// 00489479  894808               mov dword ptr [eax + 8], ecx
// 0048947c  89480c               mov dword ptr [eax + 0xc], ecx
// 0048947f  894810               mov dword ptr [eax + 0x10], ecx
// 00489482  894814               mov dword ptr [eax + 0x14], ecx
// 00489485  c7401806140000       mov dword ptr [eax + 0x18], 0x1406
// 0048948c  89481c               mov dword ptr [eax + 0x1c], ecx
// 0048948f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ??0VAR@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
