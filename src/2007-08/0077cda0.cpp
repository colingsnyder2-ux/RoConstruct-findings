// roc 2007-08 0077cda0  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cda0
//
// 0077cda0  a118998c00           mov eax, dword ptr [0x8c9918]
// 0077cda5  85c0                 test eax, eax
// 0077cda7  7435                 je 0x77cdde
// 0077cda9  83c004               add eax, 4
// 0077cdac  50                   push eax
// 0077cdad  ff15e8d27700         call dword ptr [0x77d2e8]
// 0077cdb3  85c0                 test eax, eax
// 0077cdb5  751d                 jne 0x77cdd4
// 0077cdb7  8b0d18998c00         mov ecx, dword ptr [0x8c9918]
// 0077cdbd  e80eb0cdff           call 0x457dd0
// 0077cdc2  8b0d18998c00         mov ecx, dword ptr [0x8c9918]
// 0077cdc8  85c9                 test ecx, ecx
// 0077cdca  7408                 je 0x77cdd4
// 0077cdcc  8b01                 mov eax, dword ptr [ecx]
// 0077cdce  8b10                 mov edx, dword ptr [eax]
// 0077cdd0  6a01                 push 1
// 0077cdd2  ffd2                 call edx
// 0077cdd4  c70518998c0000000000 mov dword ptr [0x8c9918], 0
// 0077cdde  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
