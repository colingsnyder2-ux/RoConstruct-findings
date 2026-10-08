// from server: 100% by auto
// roc 2009-06 00896520  unit: seg_00890000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896520
//
// 00896520  a10019a400           mov eax, dword ptr [0xa41900]
// 00896525  85c0                 test eax, eax
// 00896527  7435                 je 0x89655e
// 00896529  83c004               add eax, 4
// 0089652c  50                   push eax
// 0089652d  ff15a4e18900         call dword ptr [0x89e1a4]
// 00896533  85c0                 test eax, eax
// 00896535  751d                 jne 0x896554
// 00896537  8b0d0019a400         mov ecx, dword ptr [0xa41900]
// 0089653d  e83ee8baff           call 0x444d80
// 00896542  8b0d0019a400         mov ecx, dword ptr [0xa41900]
// 00896548  85c9                 test ecx, ecx
// 0089654a  7408                 je 0x896554
// 0089654c  8b01                 mov eax, dword ptr [ecx]
// 0089654e  8b10                 mov edx, dword ptr [eax]
// 00896550  6a01                 push 1
// 00896552  ffd2                 call edx
// 00896554  c7050019a40000000000 mov dword ptr [0xa41900], 0
// 0089655e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
