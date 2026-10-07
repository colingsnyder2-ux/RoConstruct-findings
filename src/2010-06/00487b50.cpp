// roc 2010-06 00487b50  unit: G3D::Win32Window  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487b50
//
// 00487b50  51                   push ecx
// 00487b51  8b542410             mov edx, dword ptr [esp + 0x10]
// 00487b55  8b01                 mov eax, dword ptr [ecx]
// 00487b57  8b4058               mov eax, dword ptr [eax + 0x58]
// 00487b5a  52                   push edx
// 00487b5b  8d542404             lea edx, [esp + 4]
// 00487b5f  52                   push edx
// 00487b60  8d542418             lea edx, [esp + 0x18]
// 00487b64  52                   push edx
// 00487b65  ffd0                 call eax
// 00487b67  db442410             fild dword ptr [esp + 0x10]
// 00487b6b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00487b6f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00487b73  dd19                 fstp qword ptr [ecx]
// 00487b75  db0424               fild dword ptr [esp]
// 00487b78  dd1a                 fstp qword ptr [edx]
// 00487b7a  59                   pop ecx
// 00487b7b  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?getRelativeMouseState@SDLWindow@G3D@@UBEXAAN0AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
