// roc 2012-06 006283b0  unit: G3D::Log  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006283b0
//
// 006283b0  8bc1                 mov eax, ecx
// 006283b2  33c9                 xor ecx, ecx
// 006283b4  c7003835b800         mov dword ptr [eax], 0xb83538
// 006283ba  894804               mov dword ptr [eax + 4], ecx
// 006283bd  894808               mov dword ptr [eax + 8], ecx
// 006283c0  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ??0ReferenceCountedObject@G3D@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
