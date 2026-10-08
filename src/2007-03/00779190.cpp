// roc 2007-03 00779190  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779190
//
// 00779190  a140a08b00           mov eax, dword ptr [0x8ba040]
// 00779195  85c0                 test eax, eax
// 00779197  7435                 je 0x7791ce
// 00779199  83c004               add eax, 4
// 0077919c  50                   push eax
// 0077919d  ff15a8d27700         call dword ptr [0x77d2a8]
// 007791a3  85c0                 test eax, eax
// 007791a5  751d                 jne 0x7791c4
// 007791a7  8b0d40a08b00         mov ecx, dword ptr [0x8ba040]
// 007791ad  e80ea2ceff           call 0x4633c0
// 007791b2  8b0d40a08b00         mov ecx, dword ptr [0x8ba040]
// 007791b8  85c9                 test ecx, ecx
// 007791ba  7408                 je 0x7791c4
// 007791bc  8b01                 mov eax, dword ptr [ecx]
// 007791be  8b10                 mov edx, dword ptr [eax]
// 007791c0  6a01                 push 1
// 007791c2  ffd2                 call edx
// 007791c4  c70540a08b0000000000 mov dword ptr [0x8ba040], 0
// 007791ce  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
