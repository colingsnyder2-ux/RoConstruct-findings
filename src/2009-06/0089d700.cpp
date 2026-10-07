// roc 2009-06 0089d700  unit: seg_00890000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d700
//
// 0089d700  a15889a500           mov eax, dword ptr [0xa58958]
// 0089d705  85c0                 test eax, eax
// 0089d707  7435                 je 0x89d73e
// 0089d709  83c004               add eax, 4
// 0089d70c  50                   push eax
// 0089d70d  ff15a4e18900         call dword ptr [0x89e1a4]
// 0089d713  85c0                 test eax, eax
// 0089d715  751d                 jne 0x89d734
// 0089d717  8b0d5889a500         mov ecx, dword ptr [0xa58958]
// 0089d71d  e85e76baff           call 0x444d80
// 0089d722  8b0d5889a500         mov ecx, dword ptr [0xa58958]
// 0089d728  85c9                 test ecx, ecx
// 0089d72a  7408                 je 0x89d734
// 0089d72c  8b01                 mov eax, dword ptr [ecx]
// 0089d72e  8b10                 mov edx, dword ptr [eax]
// 0089d730  6a01                 push 1
// 0089d732  ffd2                 call edx
// 0089d734  c7055889a50000000000 mov dword ptr [0xa58958], 0
// 0089d73e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
