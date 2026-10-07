// roc 2010-06 00487c20  unit: G3D::Win32Window  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487c20
//
// 00487c20  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 00487c26  8b89a4000000         mov ecx, dword ptr [ecx + 0xa4]
// 00487c2c  50                   push eax
// 00487c2d  51                   push ecx
// 00487c2e  ff1500ab9e00         call dword ptr [0x9eab00]
// 00487c34  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?reallyMakeCurrent@Win32Window@G3D@@MBEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
