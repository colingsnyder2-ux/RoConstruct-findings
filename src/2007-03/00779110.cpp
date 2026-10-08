// roc 2007-03 00779110  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779110
//
// 00779110  a1d09f8b00           mov eax, dword ptr [0x8b9fd0]
// 00779115  85c0                 test eax, eax
// 00779117  7435                 je 0x77914e
// 00779119  83c004               add eax, 4
// 0077911c  50                   push eax
// 0077911d  ff15a8d27700         call dword ptr [0x77d2a8]
// 00779123  85c0                 test eax, eax
// 00779125  751d                 jne 0x779144
// 00779127  8b0dd09f8b00         mov ecx, dword ptr [0x8b9fd0]
// 0077912d  e88ea2ceff           call 0x4633c0
// 00779132  8b0dd09f8b00         mov ecx, dword ptr [0x8b9fd0]
// 00779138  85c9                 test ecx, ecx
// 0077913a  7408                 je 0x779144
// 0077913c  8b01                 mov eax, dword ptr [ecx]
// 0077913e  8b10                 mov edx, dword ptr [eax]
// 00779140  6a01                 push 1
// 00779142  ffd2                 call edx
// 00779144  c705d09f8b0000000000 mov dword ptr [0x8b9fd0], 0
// 0077914e  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
