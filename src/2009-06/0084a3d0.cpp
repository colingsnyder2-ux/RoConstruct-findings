// roc 2009-06 0084a3d0  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084a3d0
//
// 0084a3d0  64a100000000         mov eax, dword ptr fs:[0]
// 0084a3d6  6aff                 push -1
// 0084a3d8  6848098600           push 0x860948
// 0084a3dd  50                   push eax
// 0084a3de  64892500000000       mov dword ptr fs:[0], esp
// 0084a3e5  83ec0c               sub esp, 0xc
// 0084a3e8  53                   push ebx
// 0084a3e9  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0084a3ed  56                   push esi
// 0084a3ee  53                   push ebx
// 0084a3ef  8bf1                 mov esi, ecx
// 0084a3f1  e8aafaffff           call 0x849ea0
// 0084a3f6  84c0                 test al, al
// 0084a3f8  755c                 jne 0x84a456
// 0084a3fa  57                   push edi
// 0084a3fb  33ff                 xor edi, edi
// 0084a3fd  6a01                 push 1
// 0084a3ff  6a01                 push 1
// 0084a401  8d4c2414             lea ecx, [esp + 0x14]
// 0084a405  897c2418             mov dword ptr [esp + 0x18], edi
// 0084a409  897c241c             mov dword ptr [esp + 0x1c], edi
// 0084a40d  897c2414             mov dword ptr [esp + 0x14], edi
// 0084a411  e8aafcc5ff           call 0x4aa0c0
// 0084a416  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0084a41a  8d4c240c             lea ecx, [esp + 0xc]
// 0084a41e  51                   push ecx
// 0084a41f  897c2424             mov dword ptr [esp + 0x24], edi
// 0084a423  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0084a427  53                   push ebx
// 0084a428  8bce                 mov ecx, esi
// 0084a42a  8907                 mov dword ptr [edi], eax
// 0084a42c  e8effdffff           call 0x84a220
// 0084a431  57                   push edi
// 0084a432  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0084a43a  e8510ed2ff           call 0x56b290
// 0084a43f  83c404               add esp, 4
// 0084a442  5f                   pop edi
// 0084a443  5e                   pop esi
// 0084a444  5b                   pop ebx
// 0084a445  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0084a449  64890d00000000       mov dword ptr fs:[0], ecx
// 0084a450  83c418               add esp, 0x18
// 0084a453  c20800               ret 8
// 0084a456  8d542428             lea edx, [esp + 0x28]
// 0084a45a  52                   push edx
// 0084a45b  53                   push ebx
// 0084a45c  8bce                 mov ecx, esi
// 0084a45e  e89dfaffff           call 0x849f00
// 0084a463  8bc8                 mov ecx, eax
// 0084a465  e8b60fd6ff           call 0x5ab420
// 0084a46a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0084a46e  5e                   pop esi
// 0084a46f  5b                   pop ebx
// 0084a470  64890d00000000       mov dword ptr fs:[0], ecx
// 0084a477  83c418               add esp, 0x18
// 0084a47a  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?insert@MeshEdgeTable@G3D@@QAEXABVMeshDirectedEdgeKey@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
