// roc 2009-06 004ad8f0  unit: G3D::Win32Window  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ad8f0
//
// 004ad8f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ad8f4  83ec20               sub esp, 0x20
// 004ad8f7  8d0424               lea eax, [esp]
// 004ad8fa  50                   push eax
// 004ad8fb  51                   push ecx
// 004ad8fc  ff15acea8900         call dword ptr [0x89eaac]
// 004ad902  8a0424               mov al, byte ptr [esp]
// 004ad905  83c420               add esp, 0x20
// 004ad908  c3                   ret 
// library g3d-6.09/GLG3Dcpp\getOpenGLState.cpp (function ?glGetBoolean@G3D@@YAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/getOpenGLState.cpp
