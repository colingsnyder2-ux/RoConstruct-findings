// roc 2009-12 004d5b60  unit: G3D::Win32Window  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5b60
//
// 004d5b60  51                   push ecx
// 004d5b61  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004d5b65  8b01                 mov eax, dword ptr [ecx]
// 004d5b67  8b4058               mov eax, dword ptr [eax + 0x58]
// 004d5b6a  52                   push edx
// 004d5b6b  8d542404             lea edx, [esp + 4]
// 004d5b6f  52                   push edx
// 004d5b70  8d542414             lea edx, [esp + 0x14]
// 004d5b74  52                   push edx
// 004d5b75  ffd0                 call eax
// 004d5b77  8b442408             mov eax, dword ptr [esp + 8]
// 004d5b7b  f30f2a44240c         cvtsi2ss xmm0, dword ptr [esp + 0xc]
// 004d5b81  f30f1100             movss dword ptr [eax], xmm0
// 004d5b85  f30f2a0424           cvtsi2ss xmm0, dword ptr [esp]
// 004d5b8a  f30f114004           movss dword ptr [eax + 4], xmm0
// 004d5b8f  59                   pop ecx
// 004d5b90  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?getRelativeMouseState@SDLWindow@G3D@@UBEXAAVVector2@2@AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
