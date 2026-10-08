// from server: 100% by auto
// roc 2007-08 00779120  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779120
//
// 00779120  a150fb8b00           mov eax, dword ptr [0x8bfb50]
// 00779125  85c0                 test eax, eax
// 00779127  7435                 je 0x77915e
// 00779129  83c004               add eax, 4
// 0077912c  50                   push eax
// 0077912d  ff15e8d27700         call dword ptr [0x77d2e8]
// 00779133  85c0                 test eax, eax
// 00779135  751d                 jne 0x779154
// 00779137  8b0d50fb8b00         mov ecx, dword ptr [0x8bfb50]
// 0077913d  e88eeccdff           call 0x457dd0
// 00779142  8b0d50fb8b00         mov ecx, dword ptr [0x8bfb50]
// 00779148  85c9                 test ecx, ecx
// 0077914a  7408                 je 0x779154
// 0077914c  8b01                 mov eax, dword ptr [ecx]
// 0077914e  8b10                 mov edx, dword ptr [eax]
// 00779150  6a01                 push 1
// 00779152  ffd2                 call edx
// 00779154  c70550fb8b0000000000 mov dword ptr [0x8bfb50], 0
// 0077915e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
