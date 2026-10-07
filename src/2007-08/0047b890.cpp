// roc 2007-08 0047b890  unit: G3D::Win32Window  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b890
//
// 0047b890  51                   push ecx
// 0047b891  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0047b895  8b01                 mov eax, dword ptr [ecx]
// 0047b897  8b4058               mov eax, dword ptr [eax + 0x58]
// 0047b89a  52                   push edx
// 0047b89b  8d542404             lea edx, [esp + 4]
// 0047b89f  52                   push edx
// 0047b8a0  8d542414             lea edx, [esp + 0x14]
// 0047b8a4  52                   push edx
// 0047b8a5  ffd0                 call eax
// 0047b8a7  db44240c             fild dword ptr [esp + 0xc]
// 0047b8ab  8b442408             mov eax, dword ptr [esp + 8]
// 0047b8af  d918                 fstp dword ptr [eax]
// 0047b8b1  db0424               fild dword ptr [esp]
// 0047b8b4  d95804               fstp dword ptr [eax + 4]
// 0047b8b7  59                   pop ecx
// 0047b8b8  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?getRelativeMouseState@SDLWindow@G3D@@UBEXAAVVector2@2@AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
