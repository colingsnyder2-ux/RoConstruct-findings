// roc 2009-06 00517dd0  unit: RBX::MaterialBaseRefMaterialAdapter  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00517dd0
//
// 00517dd0  a10019a400           mov eax, dword ptr [0xa41900]
// 00517dd5  85c0                 test eax, eax
// 00517dd7  7435                 je 0x517e0e
// 00517dd9  83c004               add eax, 4
// 00517ddc  50                   push eax
// 00517ddd  ff15a4e18900         call dword ptr [0x89e1a4]
// 00517de3  85c0                 test eax, eax
// 00517de5  751d                 jne 0x517e04
// 00517de7  8b0d0019a400         mov ecx, dword ptr [0xa41900]
// 00517ded  e88ecff2ff           call 0x444d80
// 00517df2  8b0d0019a400         mov ecx, dword ptr [0xa41900]
// 00517df8  85c9                 test ecx, ecx
// 00517dfa  7408                 je 0x517e04
// 00517dfc  8b01                 mov eax, dword ptr [ecx]
// 00517dfe  8b10                 mov edx, dword ptr [eax]
// 00517e00  6a01                 push 1
// 00517e02  ffd2                 call edx
// 00517e04  c7050019a40000000000 mov dword ptr [0xa41900], 0
// 00517e0e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
