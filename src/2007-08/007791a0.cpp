// from server: 100% by auto
// roc 2007-08 007791a0  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007791a0
//
// 007791a0  a1e0fa8b00           mov eax, dword ptr [0x8bfae0]
// 007791a5  85c0                 test eax, eax
// 007791a7  7435                 je 0x7791de
// 007791a9  83c004               add eax, 4
// 007791ac  50                   push eax
// 007791ad  ff15e8d27700         call dword ptr [0x77d2e8]
// 007791b3  85c0                 test eax, eax
// 007791b5  751d                 jne 0x7791d4
// 007791b7  8b0de0fa8b00         mov ecx, dword ptr [0x8bfae0]
// 007791bd  e80eeccdff           call 0x457dd0
// 007791c2  8b0de0fa8b00         mov ecx, dword ptr [0x8bfae0]
// 007791c8  85c9                 test ecx, ecx
// 007791ca  7408                 je 0x7791d4
// 007791cc  8b01                 mov eax, dword ptr [ecx]
// 007791ce  8b10                 mov edx, dword ptr [eax]
// 007791d0  6a01                 push 1
// 007791d2  ffd2                 call edx
// 007791d4  c705e0fa8b0000000000 mov dword ptr [0x8bfae0], 0
// 007791de  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
