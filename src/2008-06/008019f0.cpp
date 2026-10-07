// roc 2008-06 008019f0  unit: seg_00800000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008019f0
//
// 008019f0  a1ecf39700           mov eax, dword ptr [0x97f3ec]
// 008019f5  85c0                 test eax, eax
// 008019f7  7435                 je 0x801a2e
// 008019f9  83c004               add eax, 4
// 008019fc  50                   push eax
// 008019fd  ff15ac218000         call dword ptr [0x8021ac]
// 00801a03  85c0                 test eax, eax
// 00801a05  751d                 jne 0x801a24
// 00801a07  8b0decf39700         mov ecx, dword ptr [0x97f3ec]
// 00801a0d  e87e93c5ff           call 0x45ad90
// 00801a12  8b0decf39700         mov ecx, dword ptr [0x97f3ec]
// 00801a18  85c9                 test ecx, ecx
// 00801a1a  7408                 je 0x801a24
// 00801a1c  8b01                 mov eax, dword ptr [ecx]
// 00801a1e  8b10                 mov edx, dword ptr [eax]
// 00801a20  6a01                 push 1
// 00801a22  ffd2                 call edx
// 00801a24  c705ecf3970000000000 mov dword ptr [0x97f3ec], 0
// 00801a2e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
