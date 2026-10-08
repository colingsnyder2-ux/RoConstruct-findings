// roc 2009-12 004d5b40  unit: G3D::Win32Window  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5b40
//
// 004d5b40  8b442404             mov eax, dword ptr [esp + 4]
// 004d5b44  d94004               fld dword ptr [eax + 4]
// 004d5b47  8b11                 mov edx, dword ptr [ecx]
// 004d5b49  83ec10               sub esp, 0x10
// 004d5b4c  dd5c2408             fstp qword ptr [esp + 8]
// 004d5b50  d900                 fld dword ptr [eax]
// 004d5b52  8b424c               mov eax, dword ptr [edx + 0x4c]
// 004d5b55  dd1c24               fstp qword ptr [esp]
// 004d5b58  ffd0                 call eax
// 004d5b5a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?setRelativeMousePosition@SDLWindow@G3D@@UAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
