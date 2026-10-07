// roc 2007-08 00457cf0  unit: G3D::Hashable  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00457cf0
//
// 00457cf0  8bc1                 mov eax, ecx
// 00457cf2  33c9                 xor ecx, ecx
// 00457cf4  c70084317900         mov dword ptr [eax], 0x793184
// 00457cfa  894810               mov dword ptr [eax + 0x10], ecx
// 00457cfd  89480c               mov dword ptr [eax + 0xc], ecx
// 00457d00  894808               mov dword ptr [eax + 8], ecx
// 00457d03  894804               mov dword ptr [eax + 4], ecx
// 00457d06  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0GImage@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
