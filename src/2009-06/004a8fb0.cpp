// from server: 100% by auto
// roc 2009-06 004a8fb0  unit: G3D::Win32Window  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8fb0
//
// 004a8fb0  51                   push ecx
// 004a8fb1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004a8fb5  8b01                 mov eax, dword ptr [ecx]
// 004a8fb7  8b4058               mov eax, dword ptr [eax + 0x58]
// 004a8fba  52                   push edx
// 004a8fbb  8d542404             lea edx, [esp + 4]
// 004a8fbf  52                   push edx
// 004a8fc0  8d542414             lea edx, [esp + 0x14]
// 004a8fc4  52                   push edx
// 004a8fc5  ffd0                 call eax
// 004a8fc7  db44240c             fild dword ptr [esp + 0xc]
// 004a8fcb  8b442408             mov eax, dword ptr [esp + 8]
// 004a8fcf  d918                 fstp dword ptr [eax]
// 004a8fd1  db0424               fild dword ptr [esp]
// 004a8fd4  d95804               fstp dword ptr [eax + 4]
// 004a8fd7  59                   pop ecx
// 004a8fd8  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?getRelativeMouseState@SDLWindow@G3D@@UBEXAAVVector2@2@AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
