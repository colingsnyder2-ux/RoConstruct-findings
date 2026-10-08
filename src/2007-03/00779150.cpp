// roc 2007-03 00779150  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779150
//
// 00779150  a120a08b00           mov eax, dword ptr [0x8ba020]
// 00779155  85c0                 test eax, eax
// 00779157  7435                 je 0x77918e
// 00779159  83c004               add eax, 4
// 0077915c  50                   push eax
// 0077915d  ff15a8d27700         call dword ptr [0x77d2a8]
// 00779163  85c0                 test eax, eax
// 00779165  751d                 jne 0x779184
// 00779167  8b0d20a08b00         mov ecx, dword ptr [0x8ba020]
// 0077916d  e84ea2ceff           call 0x4633c0
// 00779172  8b0d20a08b00         mov ecx, dword ptr [0x8ba020]
// 00779178  85c9                 test ecx, ecx
// 0077917a  7408                 je 0x779184
// 0077917c  8b01                 mov eax, dword ptr [ecx]
// 0077917e  8b10                 mov edx, dword ptr [eax]
// 00779180  6a01                 push 1
// 00779182  ffd2                 call edx
// 00779184  c70520a08b0000000000 mov dword ptr [0x8ba020], 0
// 0077918e  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
