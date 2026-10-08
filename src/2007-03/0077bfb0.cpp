// roc 2007-03 0077bfb0  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077bfb0
//
// 0077bfb0  a158138c00           mov eax, dword ptr [0x8c1358]
// 0077bfb5  85c0                 test eax, eax
// 0077bfb7  7435                 je 0x77bfee
// 0077bfb9  83c004               add eax, 4
// 0077bfbc  50                   push eax
// 0077bfbd  ff15a8d27700         call dword ptr [0x77d2a8]
// 0077bfc3  85c0                 test eax, eax
// 0077bfc5  751d                 jne 0x77bfe4
// 0077bfc7  8b0d58138c00         mov ecx, dword ptr [0x8c1358]
// 0077bfcd  e8ee73ceff           call 0x4633c0
// 0077bfd2  8b0d58138c00         mov ecx, dword ptr [0x8c1358]
// 0077bfd8  85c9                 test ecx, ecx
// 0077bfda  7408                 je 0x77bfe4
// 0077bfdc  8b01                 mov eax, dword ptr [ecx]
// 0077bfde  8b10                 mov edx, dword ptr [eax]
// 0077bfe0  6a01                 push 1
// 0077bfe2  ffd2                 call edx
// 0077bfe4  c70558138c0000000000 mov dword ptr [0x8c1358], 0
// 0077bfee  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
