// roc 2007-03 0077c290  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077c290
//
// 0077c290  a1d0298c00           mov eax, dword ptr [0x8c29d0]
// 0077c295  85c0                 test eax, eax
// 0077c297  7435                 je 0x77c2ce
// 0077c299  83c004               add eax, 4
// 0077c29c  50                   push eax
// 0077c29d  ff15a8d27700         call dword ptr [0x77d2a8]
// 0077c2a3  85c0                 test eax, eax
// 0077c2a5  751d                 jne 0x77c2c4
// 0077c2a7  8b0dd0298c00         mov ecx, dword ptr [0x8c29d0]
// 0077c2ad  e80e71ceff           call 0x4633c0
// 0077c2b2  8b0dd0298c00         mov ecx, dword ptr [0x8c29d0]
// 0077c2b8  85c9                 test ecx, ecx
// 0077c2ba  7408                 je 0x77c2c4
// 0077c2bc  8b01                 mov eax, dword ptr [ecx]
// 0077c2be  8b10                 mov edx, dword ptr [eax]
// 0077c2c0  6a01                 push 1
// 0077c2c2  ffd2                 call edx
// 0077c2c4  c705d0298c0000000000 mov dword ptr [0x8c29d0], 0
// 0077c2ce  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
