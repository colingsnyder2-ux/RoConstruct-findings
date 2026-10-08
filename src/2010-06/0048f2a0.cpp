// from server: 100% by auto
// roc 2010-06 0048f2a0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048f2a0
//
// 0048f2a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048f2a4  81ec80000000         sub esp, 0x80
// 0048f2aa  8d0424               lea eax, [esp]
// 0048f2ad  50                   push eax
// 0048f2ae  51                   push ecx
// 0048f2af  ff1544ab9e00         call dword ptr [0x9eab44]
// 0048f2b5  8b0424               mov eax, dword ptr [esp]
// 0048f2b8  81c480000000         add esp, 0x80
// 0048f2be  c3                   ret 
// library g3d-6.09/GLG3Dcpp\getOpenGLState.cpp (function ?glGetInteger@G3D@@YAHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/getOpenGLState.cpp
