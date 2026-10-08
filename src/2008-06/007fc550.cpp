// from server: 100% by auto
// roc 2008-06 007fc550  unit: seg_007f0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc550
//
// 007fc550  a178289700           mov eax, dword ptr [0x972878]
// 007fc555  85c0                 test eax, eax
// 007fc557  7435                 je 0x7fc58e
// 007fc559  83c004               add eax, 4
// 007fc55c  50                   push eax
// 007fc55d  ff15ac218000         call dword ptr [0x8021ac]
// 007fc563  85c0                 test eax, eax
// 007fc565  751d                 jne 0x7fc584
// 007fc567  8b0d78289700         mov ecx, dword ptr [0x972878]
// 007fc56d  e81ee8c5ff           call 0x45ad90
// 007fc572  8b0d78289700         mov ecx, dword ptr [0x972878]
// 007fc578  85c9                 test ecx, ecx
// 007fc57a  7408                 je 0x7fc584
// 007fc57c  8b01                 mov eax, dword ptr [ecx]
// 007fc57e  8b10                 mov edx, dword ptr [eax]
// 007fc580  6a01                 push 1
// 007fc582  ffd2                 call edx
// 007fc584  c7057828970000000000 mov dword ptr [0x972878], 0
// 007fc58e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
