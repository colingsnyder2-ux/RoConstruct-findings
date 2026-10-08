// roc 2009-12 004d59c0  unit: G3D::Win32Window  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d59c0
//
// 004d59c0  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 004d59c6  50                   push eax
// 004d59c7  ff1570b19800         call dword ptr [0x98b170]
// 004d59cd  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?swapGLBuffers@Win32Window@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
