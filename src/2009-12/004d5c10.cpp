// roc 2009-12 004d5c10  unit: G3D::Win32Window  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5c10
//
// 004d5c10  51                   push ecx
// 004d5c11  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d5c15  8b01                 mov eax, dword ptr [ecx]
// 004d5c17  8b4058               mov eax, dword ptr [eax + 0x58]
// 004d5c1a  52                   push edx
// 004d5c1b  8d542404             lea edx, [esp + 4]
// 004d5c1f  52                   push edx
// 004d5c20  8d542418             lea edx, [esp + 0x18]
// 004d5c24  52                   push edx
// 004d5c25  ffd0                 call eax
// 004d5c27  db442410             fild dword ptr [esp + 0x10]
// 004d5c2b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d5c2f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004d5c33  dd19                 fstp qword ptr [ecx]
// 004d5c35  db0424               fild dword ptr [esp]
// 004d5c38  dd1a                 fstp qword ptr [edx]
// 004d5c3a  59                   pop ecx
// 004d5c3b  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?getRelativeMouseState@SDLWindow@G3D@@UBEXAAN0AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
