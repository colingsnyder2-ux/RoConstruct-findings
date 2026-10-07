// roc 2007-08 007790e0  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007790e0
//
// 007790e0  a100fb8b00           mov eax, dword ptr [0x8bfb00]
// 007790e5  85c0                 test eax, eax
// 007790e7  7435                 je 0x77911e
// 007790e9  83c004               add eax, 4
// 007790ec  50                   push eax
// 007790ed  ff15e8d27700         call dword ptr [0x77d2e8]
// 007790f3  85c0                 test eax, eax
// 007790f5  751d                 jne 0x779114
// 007790f7  8b0d00fb8b00         mov ecx, dword ptr [0x8bfb00]
// 007790fd  e8ceeccdff           call 0x457dd0
// 00779102  8b0d00fb8b00         mov ecx, dword ptr [0x8bfb00]
// 00779108  85c9                 test ecx, ecx
// 0077910a  7408                 je 0x779114
// 0077910c  8b01                 mov eax, dword ptr [ecx]
// 0077910e  8b10                 mov edx, dword ptr [eax]
// 00779110  6a01                 push 1
// 00779112  ffd2                 call edx
// 00779114  c70500fb8b0000000000 mov dword ptr [0x8bfb00], 0
// 0077911e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
