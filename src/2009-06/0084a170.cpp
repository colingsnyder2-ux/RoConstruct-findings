// from server: 100% by auto
// roc 2009-06 0084a170  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084a170
//
// 0084a170  6aff                 push -1
// 0084a172  68a33f8800           push 0x883fa3
// 0084a177  64a100000000         mov eax, dword ptr fs:[0]
// 0084a17d  50                   push eax
// 0084a17e  64892500000000       mov dword ptr fs:[0], esp
// 0084a185  51                   push ecx
// 0084a186  53                   push ebx
// 0084a187  56                   push esi
// 0084a188  8bf1                 mov esi, ecx
// 0084a18a  57                   push edi
// 0084a18b  8974240c             mov dword ptr [esp + 0xc], esi
// 0084a18f  33db                 xor ebx, ebx
// 0084a191  895c2418             mov dword ptr [esp + 0x18], ebx
// 0084a195  895e10               mov dword ptr [esi + 0x10], ebx
// 0084a198  895e14               mov dword ptr [esi + 0x14], ebx
// 0084a19b  895e0c               mov dword ptr [esi + 0xc], ebx
// 0084a19e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0084a1a2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0084a1a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 0084a1aa  6a01                 push 1
// 0084a1ac  894e08               mov dword ptr [esi + 8], ecx
// 0084a1af  8d7e0c               lea edi, [esi + 0xc]
// 0084a1b2  52                   push edx
// 0084a1b3  8bcf                 mov ecx, edi
// 0084a1b5  c644242001           mov byte ptr [esp + 0x20], 1
// 0084a1ba  894604               mov dword ptr [esi + 4], eax
// 0084a1bd  e8fefec5ff           call 0x4aa0c0
// 0084a1c2  33c0                 xor eax, eax
// 0084a1c4  395f04               cmp dword ptr [edi + 4], ebx
// 0084a1c7  7e19                 jle 0x84a1e2
// 0084a1c9  8da42400000000       lea esp, [esp]
// 0084a1d0  8b542428             mov edx, dword ptr [esp + 0x28]
// 0084a1d4  8b1482               mov edx, dword ptr [edx + eax*4]
// 0084a1d7  8b0f                 mov ecx, dword ptr [edi]
// 0084a1d9  891481               mov dword ptr [ecx + eax*4], edx
// 0084a1dc  40                   inc eax
// 0084a1dd  3b4704               cmp eax, dword ptr [edi + 4]
// 0084a1e0  7cee                 jl 0x84a1d0
// 0084a1e2  8b542428             mov edx, dword ptr [esp + 0x28]
// 0084a1e6  8b442434             mov eax, dword ptr [esp + 0x34]
// 0084a1ea  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0084a1ee  52                   push edx
// 0084a1ef  8906                 mov dword ptr [esi], eax
// 0084a1f1  894e18               mov dword ptr [esi + 0x18], ecx
// 0084a1f4  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0084a1fc  e88f10d2ff           call 0x56b290
// 0084a201  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0084a205  83c404               add esp, 4
// 0084a208  5f                   pop edi
// 0084a209  8bc6                 mov eax, esi
// 0084a20b  5e                   pop esi
// 0084a20c  5b                   pop ebx
// 0084a20d  64890d00000000       mov dword ptr fs:[0], ecx
// 0084a214  83c410               add esp, 0x10
// 0084a217  c21c00               ret 0x1c
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??0Node@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAE@VMeshDirectedEdgeKey@2@V?$Array@H@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
