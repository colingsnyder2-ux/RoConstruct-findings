// roc 2008-06 00483800  unit: G3D::Win32Window  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00483800
//
// 00483800  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00483804  83ec20               sub esp, 0x20
// 00483807  8d0424               lea eax, [esp]
// 0048380a  50                   push eax
// 0048380b  51                   push ecx
// 0048380c  ff15282a8000         call dword ptr [0x802a28]
// 00483812  8a0424               mov al, byte ptr [esp]
// 00483815  83c420               add esp, 0x20
// 00483818  c3                   ret 
// library g3d-6.09/GLG3Dcpp\getOpenGLState.cpp (function ?glGetBoolean@G3D@@YAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/getOpenGLState.cpp
