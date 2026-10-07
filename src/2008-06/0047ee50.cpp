// roc 2008-06 0047ee50  unit: G3D::Win32Window  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047ee50
//
// 0047ee50  8b442404             mov eax, dword ptr [esp + 4]
// 0047ee54  d94004               fld dword ptr [eax + 4]
// 0047ee57  8b11                 mov edx, dword ptr [ecx]
// 0047ee59  83ec10               sub esp, 0x10
// 0047ee5c  dd5c2408             fstp qword ptr [esp + 8]
// 0047ee60  d900                 fld dword ptr [eax]
// 0047ee62  8b424c               mov eax, dword ptr [edx + 0x4c]
// 0047ee65  dd1c24               fstp qword ptr [esp]
// 0047ee68  ffd0                 call eax
// 0047ee6a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?setRelativeMousePosition@SDLWindow@G3D@@UAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
