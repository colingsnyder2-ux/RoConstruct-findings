// from server: 100% by auto
// roc 2010-06 00487a80  unit: G3D::Win32Window  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487a80
//
// 00487a80  8b442404             mov eax, dword ptr [esp + 4]
// 00487a84  d94004               fld dword ptr [eax + 4]
// 00487a87  8b11                 mov edx, dword ptr [ecx]
// 00487a89  83ec10               sub esp, 0x10
// 00487a8c  dd5c2408             fstp qword ptr [esp + 8]
// 00487a90  d900                 fld dword ptr [eax]
// 00487a92  8b424c               mov eax, dword ptr [edx + 0x4c]
// 00487a95  dd1c24               fstp qword ptr [esp]
// 00487a98  ffd0                 call eax
// 00487a9a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?setRelativeMousePosition@SDLWindow@G3D@@UAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
