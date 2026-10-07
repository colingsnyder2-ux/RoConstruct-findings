// roc 2007-08 00480490  unit: G3D::Win32Window  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00480490
//
// 00480490  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00480494  81ec80000000         sub esp, 0x80
// 0048049a  8d0424               lea eax, [esp]
// 0048049d  50                   push eax
// 0048049e  51                   push ecx
// 0048049f  ff1534eb7700         call dword ptr [0x77eb34]
// 004804a5  8b0424               mov eax, dword ptr [esp]
// 004804a8  81c480000000         add esp, 0x80
// 004804ae  c3                   ret 
// library g3d-6.09/GLG3Dcpp\getOpenGLState.cpp (function ?glGetInteger@G3D@@YAHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/getOpenGLState.cpp
