// roc 2007-03 007791d0  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007791d0
//
// 007791d0  a1b09f8b00           mov eax, dword ptr [0x8b9fb0]
// 007791d5  85c0                 test eax, eax
// 007791d7  7435                 je 0x77920e
// 007791d9  83c004               add eax, 4
// 007791dc  50                   push eax
// 007791dd  ff15a8d27700         call dword ptr [0x77d2a8]
// 007791e3  85c0                 test eax, eax
// 007791e5  751d                 jne 0x779204
// 007791e7  8b0db09f8b00         mov ecx, dword ptr [0x8b9fb0]
// 007791ed  e8cea1ceff           call 0x4633c0
// 007791f2  8b0db09f8b00         mov ecx, dword ptr [0x8b9fb0]
// 007791f8  85c9                 test ecx, ecx
// 007791fa  7408                 je 0x779204
// 007791fc  8b01                 mov eax, dword ptr [ecx]
// 007791fe  8b10                 mov edx, dword ptr [eax]
// 00779200  6a01                 push 1
// 00779202  ffd2                 call edx
// 00779204  c705b09f8b0000000000 mov dword ptr [0x8b9fb0], 0
// 0077920e  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
