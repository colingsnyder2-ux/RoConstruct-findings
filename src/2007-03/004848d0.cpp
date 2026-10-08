// roc 2007-03 004848d0  unit: seg_00480000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004848d0
//
// 004848d0  8bc1                 mov eax, ecx
// 004848d2  33c9                 xor ecx, ecx
// 004848d4  8908                 mov dword ptr [eax], ecx
// 004848d6  894804               mov dword ptr [eax + 4], ecx
// 004848d9  894808               mov dword ptr [eax + 8], ecx
// 004848dc  89480c               mov dword ptr [eax + 0xc], ecx
// 004848df  894810               mov dword ptr [eax + 0x10], ecx
// 004848e2  894814               mov dword ptr [eax + 0x14], ecx
// 004848e5  c7401806140000       mov dword ptr [eax + 0x18], 0x1406
// 004848ec  89481c               mov dword ptr [eax + 0x1c], ecx
// 004848ef  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\VAR.cpp (function ??0VAR@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/VAR.cpp
