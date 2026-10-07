// roc 2011-06 0053c440  unit: G3D::Log  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053c440
//
// 0053c440  8bc1                 mov eax, ecx
// 0053c442  33c9                 xor ecx, ecx
// 0053c444  c700b8f7a700         mov dword ptr [eax], 0xa7f7b8
// 0053c44a  894804               mov dword ptr [eax + 4], ecx
// 0053c44d  894808               mov dword ptr [eax + 8], ecx
// 0053c450  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ??0ReferenceCountedObject@G3D@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
