// roc 2009-06 008964d0  unit: seg_00890000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008964d0
//
// 008964d0  a12413a400           mov eax, dword ptr [0xa41324]
// 008964d5  85c0                 test eax, eax
// 008964d7  7435                 je 0x89650e
// 008964d9  83c004               add eax, 4
// 008964dc  50                   push eax
// 008964dd  ff15a4e18900         call dword ptr [0x89e1a4]
// 008964e3  85c0                 test eax, eax
// 008964e5  751d                 jne 0x896504
// 008964e7  8b0d2413a400         mov ecx, dword ptr [0xa41324]
// 008964ed  e88ee8baff           call 0x444d80
// 008964f2  8b0d2413a400         mov ecx, dword ptr [0xa41324]
// 008964f8  85c9                 test ecx, ecx
// 008964fa  7408                 je 0x896504
// 008964fc  8b01                 mov eax, dword ptr [ecx]
// 008964fe  8b10                 mov edx, dword ptr [eax]
// 00896500  6a01                 push 1
// 00896502  ffd2                 call edx
// 00896504  c7052413a40000000000 mov dword ptr [0xa41324], 0
// 0089650e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
