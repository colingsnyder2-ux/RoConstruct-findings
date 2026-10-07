// roc 2008-06 00801510  unit: seg_00800000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801510
//
// 00801510  a140db9700           mov eax, dword ptr [0x97db40]
// 00801515  85c0                 test eax, eax
// 00801517  7435                 je 0x80154e
// 00801519  83c004               add eax, 4
// 0080151c  50                   push eax
// 0080151d  ff15ac218000         call dword ptr [0x8021ac]
// 00801523  85c0                 test eax, eax
// 00801525  751d                 jne 0x801544
// 00801527  8b0d40db9700         mov ecx, dword ptr [0x97db40]
// 0080152d  e85e98c5ff           call 0x45ad90
// 00801532  8b0d40db9700         mov ecx, dword ptr [0x97db40]
// 00801538  85c9                 test ecx, ecx
// 0080153a  7408                 je 0x801544
// 0080153c  8b01                 mov eax, dword ptr [ecx]
// 0080153e  8b10                 mov edx, dword ptr [eax]
// 00801540  6a01                 push 1
// 00801542  ffd2                 call edx
// 00801544  c70540db970000000000 mov dword ptr [0x97db40], 0
// 0080154e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
