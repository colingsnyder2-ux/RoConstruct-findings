// roc 2010-06 009ddcc0  unit: seg_009d0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddcc0
//
// 009ddcc0  a15888c000           mov eax, dword ptr [0xc08858]
// 009ddcc5  85c0                 test eax, eax
// 009ddcc7  7435                 je 0x9ddcfe
// 009ddcc9  83c004               add eax, 4
// 009ddccc  50                   push eax
// 009ddccd  ff157ca39e00         call dword ptr [0x9ea37c]
// 009ddcd3  85c0                 test eax, eax
// 009ddcd5  751d                 jne 0x9ddcf4
// 009ddcd7  8b0d5888c000         mov ecx, dword ptr [0xc08858]
// 009ddcdd  e83e5eaaff           call 0x483b20
// 009ddce2  8b0d5888c000         mov ecx, dword ptr [0xc08858]
// 009ddce8  85c9                 test ecx, ecx
// 009ddcea  7408                 je 0x9ddcf4
// 009ddcec  8b01                 mov eax, dword ptr [ecx]
// 009ddcee  8b10                 mov edx, dword ptr [eax]
// 009ddcf0  6a01                 push 1
// 009ddcf2  ffd2                 call edx
// 009ddcf4  c7055888c00000000000 mov dword ptr [0xc08858], 0
// 009ddcfe  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
