// roc 2008-06 007b9630  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b9630
//
// 007b9630  6aff                 push -1
// 007b9632  6883e67e00           push 0x7ee683
// 007b9637  64a100000000         mov eax, dword ptr fs:[0]
// 007b963d  50                   push eax
// 007b963e  64892500000000       mov dword ptr fs:[0], esp
// 007b9645  51                   push ecx
// 007b9646  53                   push ebx
// 007b9647  56                   push esi
// 007b9648  8bf1                 mov esi, ecx
// 007b964a  57                   push edi
// 007b964b  8974240c             mov dword ptr [esp + 0xc], esi
// 007b964f  33db                 xor ebx, ebx
// 007b9651  895c2418             mov dword ptr [esp + 0x18], ebx
// 007b9655  895e10               mov dword ptr [esi + 0x10], ebx
// 007b9658  895e14               mov dword ptr [esi + 0x14], ebx
// 007b965b  895e0c               mov dword ptr [esi + 0xc], ebx
// 007b965e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007b9662  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007b9666  8b442420             mov eax, dword ptr [esp + 0x20]
// 007b966a  6a01                 push 1
// 007b966c  894e08               mov dword ptr [esi + 8], ecx
// 007b966f  8d7e0c               lea edi, [esi + 0xc]
// 007b9672  52                   push edx
// 007b9673  8bcf                 mov ecx, edi
// 007b9675  c644242001           mov byte ptr [esp + 0x20], 1
// 007b967a  894604               mov dword ptr [esi + 4], eax
// 007b967d  e89e69ccff           call 0x480020
// 007b9682  33c0                 xor eax, eax
// 007b9684  395f04               cmp dword ptr [edi + 4], ebx
// 007b9687  7e19                 jle 0x7b96a2
// 007b9689  8da42400000000       lea esp, [esp]
// 007b9690  8b542428             mov edx, dword ptr [esp + 0x28]
// 007b9694  8b1482               mov edx, dword ptr [edx + eax*4]
// 007b9697  8b0f                 mov ecx, dword ptr [edi]
// 007b9699  891481               mov dword ptr [ecx + eax*4], edx
// 007b969c  40                   inc eax
// 007b969d  3b4704               cmp eax, dword ptr [edi + 4]
// 007b96a0  7cee                 jl 0x7b9690
// 007b96a2  8b542428             mov edx, dword ptr [esp + 0x28]
// 007b96a6  8b442434             mov eax, dword ptr [esp + 0x34]
// 007b96aa  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007b96ae  52                   push edx
// 007b96af  8906                 mov dword ptr [esi], eax
// 007b96b1  894e18               mov dword ptr [esi + 0x18], ecx
// 007b96b4  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 007b96bc  e85fe6d4ff           call 0x507d20
// 007b96c1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b96c5  83c404               add esp, 4
// 007b96c8  5f                   pop edi
// 007b96c9  8bc6                 mov eax, esi
// 007b96cb  5e                   pop esi
// 007b96cc  5b                   pop ebx
// 007b96cd  64890d00000000       mov dword ptr fs:[0], ecx
// 007b96d4  83c410               add esp, 0x10
// 007b96d7  c21c00               ret 0x1c
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??0Node@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAE@VMeshDirectedEdgeKey@2@V?$Array@H@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
