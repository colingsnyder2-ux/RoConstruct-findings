// from server: 100% by auto
// roc 2010-06 0049c4f0  unit: G3D::VertexAndPixelShader  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049c4f0
//
// 0049c4f0  8bc1                 mov eax, ecx
// 0049c4f2  33c9                 xor ecx, ecx
// 0049c4f4  8908                 mov dword ptr [eax], ecx
// 0049c4f6  894804               mov dword ptr [eax + 4], ecx
// 0049c4f9  894808               mov dword ptr [eax + 8], ecx
// 0049c4fc  89480c               mov dword ptr [eax + 0xc], ecx
// 0049c4ff  894810               mov dword ptr [eax + 0x10], ecx
// 0049c502  894814               mov dword ptr [eax + 0x14], ecx
// 0049c505  c7401806140000       mov dword ptr [eax + 0x18], 0x1406
// 0049c50c  89481c               mov dword ptr [eax + 0x1c], ecx
// 0049c50f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ??0VAR@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
