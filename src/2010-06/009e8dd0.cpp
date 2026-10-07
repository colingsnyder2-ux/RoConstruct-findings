// roc 2010-06 009e8dd0  unit: seg_009e0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8dd0
//
// 009e8dd0  a15837c200           mov eax, dword ptr [0xc23758]
// 009e8dd5  85c0                 test eax, eax
// 009e8dd7  7435                 je 0x9e8e0e
// 009e8dd9  83c004               add eax, 4
// 009e8ddc  50                   push eax
// 009e8ddd  ff157ca39e00         call dword ptr [0x9ea37c]
// 009e8de3  85c0                 test eax, eax
// 009e8de5  751d                 jne 0x9e8e04
// 009e8de7  8b0d5837c200         mov ecx, dword ptr [0xc23758]
// 009e8ded  e82eada9ff           call 0x483b20
// 009e8df2  8b0d5837c200         mov ecx, dword ptr [0xc23758]
// 009e8df8  85c9                 test ecx, ecx
// 009e8dfa  7408                 je 0x9e8e04
// 009e8dfc  8b01                 mov eax, dword ptr [ecx]
// 009e8dfe  8b10                 mov edx, dword ptr [eax]
// 009e8e00  6a01                 push 1
// 009e8e02  ffd2                 call edx
// 009e8e04  c7055837c20000000000 mov dword ptr [0xc23758], 0
// 009e8e0e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
