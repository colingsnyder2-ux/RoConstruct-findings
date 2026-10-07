// roc 2010-06 00487aa0  unit: G3D::Win32Window  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487aa0
//
// 00487aa0  51                   push ecx
// 00487aa1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00487aa5  8b01                 mov eax, dword ptr [ecx]
// 00487aa7  8b4058               mov eax, dword ptr [eax + 0x58]
// 00487aaa  52                   push edx
// 00487aab  8d542404             lea edx, [esp + 4]
// 00487aaf  52                   push edx
// 00487ab0  8d542414             lea edx, [esp + 0x14]
// 00487ab4  52                   push edx
// 00487ab5  ffd0                 call eax
// 00487ab7  8b442408             mov eax, dword ptr [esp + 8]
// 00487abb  f30f2a44240c         cvtsi2ss xmm0, dword ptr [esp + 0xc]
// 00487ac1  f30f1100             movss dword ptr [eax], xmm0
// 00487ac5  f30f2a0424           cvtsi2ss xmm0, dword ptr [esp]
// 00487aca  f30f114004           movss dword ptr [eax + 4], xmm0
// 00487acf  59                   pop ecx
// 00487ad0  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?getRelativeMouseState@SDLWindow@G3D@@UBEXAAVVector2@2@AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
