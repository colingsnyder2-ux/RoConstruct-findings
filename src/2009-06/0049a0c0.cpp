// roc 2009-06 0049a0c0  unit: G3D::GImage  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049a0c0
//
// 0049a0c0  8bc1                 mov eax, ecx
// 0049a0c2  33c9                 xor ecx, ecx
// 0049a0c4  c700a8fc8b00         mov dword ptr [eax], 0x8bfca8
// 0049a0ca  894804               mov dword ptr [eax + 4], ecx
// 0049a0cd  894808               mov dword ptr [eax + 8], ecx
// 0049a0d0  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ??0ReferenceCountedObject@G3D@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
