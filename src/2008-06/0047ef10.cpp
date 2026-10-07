// roc 2008-06 0047ef10  unit: G3D::Win32Window  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047ef10
//
// 0047ef10  51                   push ecx
// 0047ef11  8b542410             mov edx, dword ptr [esp + 0x10]
// 0047ef15  8b01                 mov eax, dword ptr [ecx]
// 0047ef17  8b4058               mov eax, dword ptr [eax + 0x58]
// 0047ef1a  52                   push edx
// 0047ef1b  8d542404             lea edx, [esp + 4]
// 0047ef1f  52                   push edx
// 0047ef20  8d542418             lea edx, [esp + 0x18]
// 0047ef24  52                   push edx
// 0047ef25  ffd0                 call eax
// 0047ef27  db442410             fild dword ptr [esp + 0x10]
// 0047ef2b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047ef2f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0047ef33  dd19                 fstp qword ptr [ecx]
// 0047ef35  db0424               fild dword ptr [esp]
// 0047ef38  dd1a                 fstp qword ptr [edx]
// 0047ef3a  59                   pop ecx
// 0047ef3b  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?getRelativeMouseState@SDLWindow@G3D@@UBEXAAN0AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
