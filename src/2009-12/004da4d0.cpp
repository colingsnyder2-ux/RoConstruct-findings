// roc 2009-12 004da4d0  unit: G3D::Win32Window  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004da4d0
//
// 004da4d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004da4d4  83ec20               sub esp, 0x20
// 004da4d7  8d0424               lea eax, [esp]
// 004da4da  50                   push eax
// 004da4db  51                   push ecx
// 004da4dc  ff1544bb9800         call dword ptr [0x98bb44]
// 004da4e2  8a0424               mov al, byte ptr [esp]
// 004da4e5  83c420               add esp, 0x20
// 004da4e8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\getOpenGLState.cpp (function ?glGetBoolean@G3D@@YAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/getOpenGLState.cpp
