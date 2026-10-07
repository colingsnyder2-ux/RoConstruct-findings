// roc 2007-08 0047b6b0  unit: G3D::Win32Window  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b6b0
//
// 0047b6b0  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 0047b6b6  50                   push eax
// 0047b6b7  ff15b4d07700         call dword ptr [0x77d0b4]
// 0047b6bd  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?swapGLBuffers@Win32Window@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
