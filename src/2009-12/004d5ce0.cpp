// roc 2009-12 004d5ce0  unit: G3D::Win32Window  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5ce0
//
// 004d5ce0  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 004d5ce6  8b89a4000000         mov ecx, dword ptr [ecx + 0xa4]
// 004d5cec  50                   push eax
// 004d5ced  51                   push ecx
// 004d5cee  ff1534bb9800         call dword ptr [0x98bb34]
// 004d5cf4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?reallyMakeCurrent@Win32Window@G3D@@MBEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
