// from server: 100% by auto
// roc 2007-08 0077ca30  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ca30
//
// 0077ca30  a134838c00           mov eax, dword ptr [0x8c8334]
// 0077ca35  85c0                 test eax, eax
// 0077ca37  7435                 je 0x77ca6e
// 0077ca39  83c004               add eax, 4
// 0077ca3c  50                   push eax
// 0077ca3d  ff15e8d27700         call dword ptr [0x77d2e8]
// 0077ca43  85c0                 test eax, eax
// 0077ca45  751d                 jne 0x77ca64
// 0077ca47  8b0d34838c00         mov ecx, dword ptr [0x8c8334]
// 0077ca4d  e87eb3cdff           call 0x457dd0
// 0077ca52  8b0d34838c00         mov ecx, dword ptr [0x8c8334]
// 0077ca58  85c9                 test ecx, ecx
// 0077ca5a  7408                 je 0x77ca64
// 0077ca5c  8b01                 mov eax, dword ptr [ecx]
// 0077ca5e  8b10                 mov edx, dword ptr [eax]
// 0077ca60  6a01                 push 1
// 0077ca62  ffd2                 call edx
// 0077ca64  c70534838c0000000000 mov dword ptr [0x8c8334], 0
// 0077ca6e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
