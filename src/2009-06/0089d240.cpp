// roc 2009-06 0089d240  unit: seg_00890000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d240
//
// 0089d240  a1a404a500           mov eax, dword ptr [0xa504a4]
// 0089d245  85c0                 test eax, eax
// 0089d247  7435                 je 0x89d27e
// 0089d249  83c004               add eax, 4
// 0089d24c  50                   push eax
// 0089d24d  ff15a4e18900         call dword ptr [0x89e1a4]
// 0089d253  85c0                 test eax, eax
// 0089d255  751d                 jne 0x89d274
// 0089d257  8b0da404a500         mov ecx, dword ptr [0xa504a4]
// 0089d25d  e81e7bbaff           call 0x444d80
// 0089d262  8b0da404a500         mov ecx, dword ptr [0xa504a4]
// 0089d268  85c9                 test ecx, ecx
// 0089d26a  7408                 je 0x89d274
// 0089d26c  8b01                 mov eax, dword ptr [ecx]
// 0089d26e  8b10                 mov edx, dword ptr [eax]
// 0089d270  6a01                 push 1
// 0089d272  ffd2                 call edx
// 0089d274  c705a404a50000000000 mov dword ptr [0xa504a4], 0
// 0089d27e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
