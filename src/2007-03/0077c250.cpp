// roc 2007-03 0077c250  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077c250
//
// 0077c250  a1d4298c00           mov eax, dword ptr [0x8c29d4]
// 0077c255  85c0                 test eax, eax
// 0077c257  7435                 je 0x77c28e
// 0077c259  83c004               add eax, 4
// 0077c25c  50                   push eax
// 0077c25d  ff15a8d27700         call dword ptr [0x77d2a8]
// 0077c263  85c0                 test eax, eax
// 0077c265  751d                 jne 0x77c284
// 0077c267  8b0dd4298c00         mov ecx, dword ptr [0x8c29d4]
// 0077c26d  e84e71ceff           call 0x4633c0
// 0077c272  8b0dd4298c00         mov ecx, dword ptr [0x8c29d4]
// 0077c278  85c9                 test ecx, ecx
// 0077c27a  7408                 je 0x77c284
// 0077c27c  8b01                 mov eax, dword ptr [ecx]
// 0077c27e  8b10                 mov edx, dword ptr [eax]
// 0077c280  6a01                 push 1
// 0077c282  ffd2                 call edx
// 0077c284  c705d4298c0000000000 mov dword ptr [0x8c29d4], 0
// 0077c28e  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
