// roc 2007-08 0047b6c0  unit: G3D::Win32Window  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b6c0
//
// 0047b6c0  8b81e8010000         mov eax, dword ptr [ecx + 0x1e8]
// 0047b6c6  6a00                 push 0
// 0047b6c8  6a00                 push 0
// 0047b6ca  6a10                 push 0x10
// 0047b6cc  50                   push eax
// 0047b6cd  ff15d0ec7700         call dword ptr [0x77ecd0]
// 0047b6d3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?close@Win32Window@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
