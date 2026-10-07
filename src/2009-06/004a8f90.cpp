// roc 2009-06 004a8f90  unit: G3D::Win32Window  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8f90
//
// 004a8f90  8b442404             mov eax, dword ptr [esp + 4]
// 004a8f94  d94004               fld dword ptr [eax + 4]
// 004a8f97  8b11                 mov edx, dword ptr [ecx]
// 004a8f99  83ec10               sub esp, 0x10
// 004a8f9c  dd5c2408             fstp qword ptr [esp + 8]
// 004a8fa0  d900                 fld dword ptr [eax]
// 004a8fa2  8b424c               mov eax, dword ptr [edx + 0x4c]
// 004a8fa5  dd1c24               fstp qword ptr [esp]
// 004a8fa8  ffd0                 call eax
// 004a8faa  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?setRelativeMousePosition@SDLWindow@G3D@@UAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
