// roc 2010-06 004878f0  unit: G3D::Win32Window  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004878f0
//
// 004878f0  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 004878f6  50                   push eax
// 004878f7  ff1590a19e00         call dword ptr [0x9ea190]
// 004878fd  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?swapGLBuffers@Win32Window@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
