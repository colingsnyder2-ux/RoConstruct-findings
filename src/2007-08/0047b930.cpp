// from server: 100% by auto
// roc 2007-08 0047b930  unit: G3D::Win32Window  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b930
//
// 0047b930  51                   push ecx
// 0047b931  8b542410             mov edx, dword ptr [esp + 0x10]
// 0047b935  8b01                 mov eax, dword ptr [ecx]
// 0047b937  8b4058               mov eax, dword ptr [eax + 0x58]
// 0047b93a  52                   push edx
// 0047b93b  8d542404             lea edx, [esp + 4]
// 0047b93f  52                   push edx
// 0047b940  8d542418             lea edx, [esp + 0x18]
// 0047b944  52                   push edx
// 0047b945  ffd0                 call eax
// 0047b947  db442410             fild dword ptr [esp + 0x10]
// 0047b94b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047b94f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0047b953  dd19                 fstp qword ptr [ecx]
// 0047b955  db0424               fild dword ptr [esp]
// 0047b958  dd1a                 fstp qword ptr [edx]
// 0047b95a  59                   pop ecx
// 0047b95b  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?getRelativeMouseState@SDLWindow@G3D@@UBEXAAN0AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
