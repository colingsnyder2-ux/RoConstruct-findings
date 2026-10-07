// roc 2007-08 00779160  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779160
//
// 00779160  a170fb8b00           mov eax, dword ptr [0x8bfb70]
// 00779165  85c0                 test eax, eax
// 00779167  7435                 je 0x77919e
// 00779169  83c004               add eax, 4
// 0077916c  50                   push eax
// 0077916d  ff15e8d27700         call dword ptr [0x77d2e8]
// 00779173  85c0                 test eax, eax
// 00779175  751d                 jne 0x779194
// 00779177  8b0d70fb8b00         mov ecx, dword ptr [0x8bfb70]
// 0077917d  e84eeccdff           call 0x457dd0
// 00779182  8b0d70fb8b00         mov ecx, dword ptr [0x8bfb70]
// 00779188  85c9                 test ecx, ecx
// 0077918a  7408                 je 0x779194
// 0077918c  8b01                 mov eax, dword ptr [ecx]
// 0077918e  8b10                 mov edx, dword ptr [eax]
// 00779190  6a01                 push 1
// 00779192  ffd2                 call edx
// 00779194  c70570fb8b0000000000 mov dword ptr [0x8bfb70], 0
// 0077919e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
