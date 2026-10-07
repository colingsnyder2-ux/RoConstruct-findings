// roc 2008-06 004837e0  unit: G3D::Win32Window  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004837e0
//
// 004837e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004837e4  81ec80000000         sub esp, 0x80
// 004837ea  8d0424               lea eax, [esp]
// 004837ed  50                   push eax
// 004837ee  51                   push ecx
// 004837ef  ff15b42a8000         call dword ptr [0x802ab4]
// 004837f5  8b0424               mov eax, dword ptr [esp]
// 004837f8  81c480000000         add esp, 0x80
// 004837fe  c3                   ret 
// library g3d-6.09/GLG3Dcpp\getOpenGLState.cpp (function ?glGetInteger@G3D@@YAHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/getOpenGLState.cpp
