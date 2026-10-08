// from server: 100% by auto
// roc 2008-06 00801a30  unit: seg_00800000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801a30
//
// 00801a30  a1e8f39700           mov eax, dword ptr [0x97f3e8]
// 00801a35  85c0                 test eax, eax
// 00801a37  7435                 je 0x801a6e
// 00801a39  83c004               add eax, 4
// 00801a3c  50                   push eax
// 00801a3d  ff15ac218000         call dword ptr [0x8021ac]
// 00801a43  85c0                 test eax, eax
// 00801a45  751d                 jne 0x801a64
// 00801a47  8b0de8f39700         mov ecx, dword ptr [0x97f3e8]
// 00801a4d  e83e93c5ff           call 0x45ad90
// 00801a52  8b0de8f39700         mov ecx, dword ptr [0x97f3e8]
// 00801a58  85c9                 test ecx, ecx
// 00801a5a  7408                 je 0x801a64
// 00801a5c  8b01                 mov eax, dword ptr [ecx]
// 00801a5e  8b10                 mov edx, dword ptr [eax]
// 00801a60  6a01                 push 1
// 00801a62  ffd2                 call edx
// 00801a64  c705e8f3970000000000 mov dword ptr [0x97f3e8], 0
// 00801a6e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
