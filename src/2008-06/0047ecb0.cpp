// from server: 100% by auto
// roc 2008-06 0047ecb0  unit: G3D::Win32Window  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047ecb0
//
// 0047ecb0  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 0047ecb6  50                   push eax
// 0047ecb7  ff153c218000         call dword ptr [0x80213c]
// 0047ecbd  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?swapGLBuffers@Win32Window@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
