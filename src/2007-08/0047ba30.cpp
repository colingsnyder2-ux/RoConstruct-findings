// roc 2007-08 0047ba30  unit: G3D::Win32Window  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047ba30
//
// 0047ba30  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 0047ba36  8b89a4000000         mov ecx, dword ptr [ecx + 0xa4]
// 0047ba3c  50                   push eax
// 0047ba3d  51                   push ecx
// 0047ba3e  ff156cea7700         call dword ptr [0x77ea6c]
// 0047ba44  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?reallyMakeCurrent@Win32Window@G3D@@MBEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
