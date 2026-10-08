// roc 2009-12 004da4b0  unit: G3D::Win32Window  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004da4b0
//
// 004da4b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004da4b4  81ec80000000         sub esp, 0x80
// 004da4ba  8d0424               lea eax, [esp]
// 004da4bd  50                   push eax
// 004da4be  51                   push ecx
// 004da4bf  ff151cbb9800         call dword ptr [0x98bb1c]
// 004da4c5  8b0424               mov eax, dword ptr [esp]
// 004da4c8  81c480000000         add esp, 0x80
// 004da4ce  c3                   ret 
// library g3d-6.09/GLG3Dcpp\getOpenGLState.cpp (function ?glGetInteger@G3D@@YAHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/getOpenGLState.cpp
