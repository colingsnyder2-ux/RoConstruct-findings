// from server: 100% by auto
// roc 2009-06 004a9130  unit: G3D::Win32Window  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9130
//
// 004a9130  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 004a9136  8b89a4000000         mov ecx, dword ptr [ecx + 0xa4]
// 004a913c  50                   push eax
// 004a913d  51                   push ecx
// 004a913e  ff15bcea8900         call dword ptr [0x89eabc]
// 004a9144  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?reallyMakeCurrent@Win32Window@G3D@@MBEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
