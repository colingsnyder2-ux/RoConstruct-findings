// roc 2007-08 0077cde0  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cde0
//
// 0077cde0  a114998c00           mov eax, dword ptr [0x8c9914]
// 0077cde5  85c0                 test eax, eax
// 0077cde7  7435                 je 0x77ce1e
// 0077cde9  83c004               add eax, 4
// 0077cdec  50                   push eax
// 0077cded  ff15e8d27700         call dword ptr [0x77d2e8]
// 0077cdf3  85c0                 test eax, eax
// 0077cdf5  751d                 jne 0x77ce14
// 0077cdf7  8b0d14998c00         mov ecx, dword ptr [0x8c9914]
// 0077cdfd  e8ceafcdff           call 0x457dd0
// 0077ce02  8b0d14998c00         mov ecx, dword ptr [0x8c9914]
// 0077ce08  85c9                 test ecx, ecx
// 0077ce0a  7408                 je 0x77ce14
// 0077ce0c  8b01                 mov eax, dword ptr [ecx]
// 0077ce0e  8b10                 mov edx, dword ptr [eax]
// 0077ce10  6a01                 push 1
// 0077ce12  ffd2                 call edx
// 0077ce14  c70514998c0000000000 mov dword ptr [0x8c9914], 0
// 0077ce1e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
