// roc 2009-12 005fcb50  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fcb50
//
// 005fcb50  6aff                 push -1
// 005fcb52  6883fa9300           push 0x93fa83
// 005fcb57  64a100000000         mov eax, dword ptr fs:[0]
// 005fcb5d  50                   push eax
// 005fcb5e  64892500000000       mov dword ptr fs:[0], esp
// 005fcb65  51                   push ecx
// 005fcb66  53                   push ebx
// 005fcb67  56                   push esi
// 005fcb68  8bf1                 mov esi, ecx
// 005fcb6a  57                   push edi
// 005fcb6b  8974240c             mov dword ptr [esp + 0xc], esi
// 005fcb6f  33db                 xor ebx, ebx
// 005fcb71  895c2418             mov dword ptr [esp + 0x18], ebx
// 005fcb75  895e10               mov dword ptr [esi + 0x10], ebx
// 005fcb78  895e14               mov dword ptr [esi + 0x14], ebx
// 005fcb7b  895e0c               mov dword ptr [esi + 0xc], ebx
// 005fcb7e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005fcb82  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005fcb86  8b442420             mov eax, dword ptr [esp + 0x20]
// 005fcb8a  6a01                 push 1
// 005fcb8c  894e08               mov dword ptr [esi + 8], ecx
// 005fcb8f  8d7e0c               lea edi, [esi + 0xc]
// 005fcb92  52                   push edx
// 005fcb93  8bcf                 mov ecx, edi
// 005fcb95  c644242001           mov byte ptr [esp + 0x20], 1
// 005fcb9a  894604               mov dword ptr [esi + 4], eax
// 005fcb9d  e83ea0edff           call 0x4d6be0
// 005fcba2  33c0                 xor eax, eax
// 005fcba4  395f04               cmp dword ptr [edi + 4], ebx
// 005fcba7  7e19                 jle 0x5fcbc2
// 005fcba9  8da42400000000       lea esp, [esp]
// 005fcbb0  8b542428             mov edx, dword ptr [esp + 0x28]
// 005fcbb4  8b1482               mov edx, dword ptr [edx + eax*4]
// 005fcbb7  8b0f                 mov ecx, dword ptr [edi]
// 005fcbb9  891481               mov dword ptr [ecx + eax*4], edx
// 005fcbbc  40                   inc eax
// 005fcbbd  3b4704               cmp eax, dword ptr [edi + 4]
// 005fcbc0  7cee                 jl 0x5fcbb0
// 005fcbc2  8b542428             mov edx, dword ptr [esp + 0x28]
// 005fcbc6  8b442434             mov eax, dword ptr [esp + 0x34]
// 005fcbca  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005fcbce  52                   push edx
// 005fcbcf  8906                 mov dword ptr [esi], eax
// 005fcbd1  894e18               mov dword ptr [esi + 0x18], ecx
// 005fcbd4  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005fcbdc  e8ffd7feff           call 0x5ea3e0
// 005fcbe1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fcbe5  83c404               add esp, 4
// 005fcbe8  5f                   pop edi
// 005fcbe9  8bc6                 mov eax, esi
// 005fcbeb  5e                   pop esi
// 005fcbec  5b                   pop ebx
// 005fcbed  64890d00000000       mov dword ptr fs:[0], ecx
// 005fcbf4  83c410               add esp, 0x10
// 005fcbf7  c21c00               ret 0x1c
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??0Node@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAE@VMeshDirectedEdgeKey@2@V?$Array@H@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
