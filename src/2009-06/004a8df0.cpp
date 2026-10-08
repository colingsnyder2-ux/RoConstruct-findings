// from server: 100% by auto
// roc 2009-06 004a8df0  unit: G3D::Win32Window  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8df0
//
// 004a8df0  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 004a8df6  50                   push eax
// 004a8df7  ff154ce18900         call dword ptr [0x89e14c]
// 004a8dfd  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?swapGLBuffers@Win32Window@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
