// from server: 100% by auto
// roc 2008-06 0047ee70  unit: G3D::Win32Window  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047ee70
//
// 0047ee70  51                   push ecx
// 0047ee71  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0047ee75  8b01                 mov eax, dword ptr [ecx]
// 0047ee77  8b4058               mov eax, dword ptr [eax + 0x58]
// 0047ee7a  52                   push edx
// 0047ee7b  8d542404             lea edx, [esp + 4]
// 0047ee7f  52                   push edx
// 0047ee80  8d542414             lea edx, [esp + 0x14]
// 0047ee84  52                   push edx
// 0047ee85  ffd0                 call eax
// 0047ee87  db44240c             fild dword ptr [esp + 0xc]
// 0047ee8b  8b442408             mov eax, dword ptr [esp + 8]
// 0047ee8f  d918                 fstp dword ptr [eax]
// 0047ee91  db0424               fild dword ptr [esp]
// 0047ee94  d95804               fstp dword ptr [eax + 4]
// 0047ee97  59                   pop ecx
// 0047ee98  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?getRelativeMouseState@SDLWindow@G3D@@UBEXAAVVector2@2@AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
