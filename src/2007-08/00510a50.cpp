// from server: 100% by auto
// roc 2007-08 00510a50  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00510a50
//
// 00510a50  53                   push ebx
// 00510a51  57                   push edi
// 00510a52  8bf9                 mov edi, ecx
// 00510a54  33db                 xor ebx, ebx
// 00510a56  395f0c               cmp dword ptr [edi + 0xc], ebx
// 00510a59  7e30                 jle 0x510a8b
// 00510a5b  56                   push esi
// 00510a5c  8d642400             lea esp, [esp]
// 00510a60  8b4708               mov eax, dword ptr [edi + 8]
// 00510a63  8b0498               mov eax, dword ptr [eax + ebx*4]
// 00510a66  85c0                 test eax, eax
// 00510a68  7418                 je 0x510a82
// 00510a6a  8d9b00000000         lea ebx, [ebx]
// 00510a70  8b700c               mov esi, dword ptr [eax + 0xc]
// 00510a73  50                   push eax
// 00510a74  e877edfeff           call 0x4ff7f0
// 00510a79  83c404               add esp, 4
// 00510a7c  85f6                 test esi, esi
// 00510a7e  8bc6                 mov eax, esi
// 00510a80  75ee                 jne 0x510a70
// 00510a82  83c301               add ebx, 1
// 00510a85  3b5f0c               cmp ebx, dword ptr [edi + 0xc]
// 00510a88  7cd6                 jl 0x510a60
// 00510a8a  5e                   pop esi
// 00510a8b  8b4f08               mov ecx, dword ptr [edi + 8]
// 00510a8e  51                   push ecx
// 00510a8f  e87cedfeff           call 0x4ff810
// 00510a94  83c404               add esp, 4
// 00510a97  c7470800000000       mov dword ptr [edi + 8], 0
// 00510a9e  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 00510aa5  c7470400000000       mov dword ptr [edi + 4], 0
// 00510aac  5f                   pop edi
// 00510aad  5b                   pop ebx
// 00510aae  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?freeMemory@?$Table@PAV?$Array@H@G3D@@_N@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
