// from server: 100% by auto
// roc 2009-06 004a9050  unit: G3D::Win32Window  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9050
//
// 004a9050  51                   push ecx
// 004a9051  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a9055  8b01                 mov eax, dword ptr [ecx]
// 004a9057  8b4058               mov eax, dword ptr [eax + 0x58]
// 004a905a  52                   push edx
// 004a905b  8d542404             lea edx, [esp + 4]
// 004a905f  52                   push edx
// 004a9060  8d542418             lea edx, [esp + 0x18]
// 004a9064  52                   push edx
// 004a9065  ffd0                 call eax
// 004a9067  db442410             fild dword ptr [esp + 0x10]
// 004a906b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a906f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004a9073  dd19                 fstp qword ptr [ecx]
// 004a9075  db0424               fild dword ptr [esp]
// 004a9078  dd1a                 fstp qword ptr [edx]
// 004a907a  59                   pop ecx
// 004a907b  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?getRelativeMouseState@SDLWindow@G3D@@UBEXAAN0AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
