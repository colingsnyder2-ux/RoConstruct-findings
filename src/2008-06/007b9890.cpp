// roc 2008-06 007b9890  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b9890
//
// 007b9890  64a100000000         mov eax, dword ptr fs:[0]
// 007b9896  6aff                 push -1
// 007b9898  68a88d7d00           push 0x7d8da8
// 007b989d  50                   push eax
// 007b989e  64892500000000       mov dword ptr fs:[0], esp
// 007b98a5  83ec0c               sub esp, 0xc
// 007b98a8  53                   push ebx
// 007b98a9  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007b98ad  56                   push esi
// 007b98ae  53                   push ebx
// 007b98af  8bf1                 mov esi, ecx
// 007b98b1  e8bafaffff           call 0x7b9370
// 007b98b6  84c0                 test al, al
// 007b98b8  755c                 jne 0x7b9916
// 007b98ba  57                   push edi
// 007b98bb  33ff                 xor edi, edi
// 007b98bd  6a01                 push 1
// 007b98bf  6a01                 push 1
// 007b98c1  8d4c2414             lea ecx, [esp + 0x14]
// 007b98c5  897c2418             mov dword ptr [esp + 0x18], edi
// 007b98c9  897c241c             mov dword ptr [esp + 0x1c], edi
// 007b98cd  897c2414             mov dword ptr [esp + 0x14], edi
// 007b98d1  e84a67ccff           call 0x480020
// 007b98d6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b98da  8d4c240c             lea ecx, [esp + 0xc]
// 007b98de  51                   push ecx
// 007b98df  897c2424             mov dword ptr [esp + 0x24], edi
// 007b98e3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007b98e7  53                   push ebx
// 007b98e8  8bce                 mov ecx, esi
// 007b98ea  8907                 mov dword ptr [edi], eax
// 007b98ec  e8effdffff           call 0x7b96e0
// 007b98f1  57                   push edi
// 007b98f2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 007b98fa  e821e4d4ff           call 0x507d20
// 007b98ff  83c404               add esp, 4
// 007b9902  5f                   pop edi
// 007b9903  5e                   pop esi
// 007b9904  5b                   pop ebx
// 007b9905  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b9909  64890d00000000       mov dword ptr fs:[0], ecx
// 007b9910  83c418               add esp, 0x18
// 007b9913  c20800               ret 8
// 007b9916  8d542428             lea edx, [esp + 0x28]
// 007b991a  52                   push edx
// 007b991b  53                   push ebx
// 007b991c  8bce                 mov ecx, esi
// 007b991e  e8adfaffff           call 0x7b93d0
// 007b9923  8bc8                 mov ecx, eax
// 007b9925  e84614d9ff           call 0x54ad70
// 007b992a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b992e  5e                   pop esi
// 007b992f  5b                   pop ebx
// 007b9930  64890d00000000       mov dword ptr fs:[0], ecx
// 007b9937  83c418               add esp, 0x18
// 007b993a  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?insert@MeshEdgeTable@G3D@@QAEXABVMeshDirectedEdgeKey@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
