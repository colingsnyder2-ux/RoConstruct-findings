// roc 2008-06 0045aca0  unit: G3D::Hashable  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045aca0
//
// 0045aca0  8bc1                 mov eax, ecx
// 0045aca2  33c9                 xor ecx, ecx
// 0045aca4  c7005c978100         mov dword ptr [eax], 0x81975c
// 0045acaa  894810               mov dword ptr [eax + 0x10], ecx
// 0045acad  89480c               mov dword ptr [eax + 0xc], ecx
// 0045acb0  894808               mov dword ptr [eax + 8], ecx
// 0045acb3  894804               mov dword ptr [eax + 4], ecx
// 0045acb6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0GImage@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
