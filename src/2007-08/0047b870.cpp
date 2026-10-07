// roc 2007-08 0047b870  unit: G3D::Win32Window  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b870
//
// 0047b870  8b442404             mov eax, dword ptr [esp + 4]
// 0047b874  d94004               fld dword ptr [eax + 4]
// 0047b877  8b11                 mov edx, dword ptr [ecx]
// 0047b879  83ec10               sub esp, 0x10
// 0047b87c  dd5c2408             fstp qword ptr [esp + 8]
// 0047b880  d900                 fld dword ptr [eax]
// 0047b882  8b424c               mov eax, dword ptr [edx + 0x4c]
// 0047b885  dd1c24               fstp qword ptr [esp]
// 0047b888  ffd0                 call eax
// 0047b88a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?setRelativeMousePosition@SDLWindow@G3D@@UAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
