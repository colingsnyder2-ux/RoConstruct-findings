// roc 2010-06 0048f2c0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048f2c0
//
// 0048f2c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048f2c4  83ec20               sub esp, 0x20
// 0048f2c7  8d0424               lea eax, [esp]
// 0048f2ca  50                   push eax
// 0048f2cb  51                   push ecx
// 0048f2cc  ff1550ab9e00         call dword ptr [0x9eab50]
// 0048f2d2  8a0424               mov al, byte ptr [esp]
// 0048f2d5  83c420               add esp, 0x20
// 0048f2d8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\getOpenGLState.cpp (function ?glGetBoolean@G3D@@YAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/getOpenGLState.cpp
