// from server: 100% by auto
// roc 2008-06 0047f010  unit: G3D::Win32Window  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047f010
//
// 0047f010  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 0047f016  8b89a4000000         mov ecx, dword ptr [ecx + 0xa4]
// 0047f01c  50                   push eax
// 0047f01d  51                   push ecx
// 0047f01e  ff15382a8000         call dword ptr [0x802a38]
// 0047f024  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?reallyMakeCurrent@Win32Window@G3D@@MBEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
