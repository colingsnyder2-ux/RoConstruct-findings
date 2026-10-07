// roc 2009-06 0084b150  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084b150
//
// 0084b150  53                   push ebx
// 0084b151  57                   push edi
// 0084b152  8bf9                 mov edi, ecx
// 0084b154  33db                 xor ebx, ebx
// 0084b156  395f0c               cmp dword ptr [edi + 0xc], ebx
// 0084b159  7e2e                 jle 0x84b189
// 0084b15b  56                   push esi
// 0084b15c  8d642400             lea esp, [esp]
// 0084b160  8b4708               mov eax, dword ptr [edi + 8]
// 0084b163  8b0498               mov eax, dword ptr [eax + ebx*4]
// 0084b166  85c0                 test eax, eax
// 0084b168  7418                 je 0x84b182
// 0084b16a  8d9b00000000         lea ebx, [ebx]
// 0084b170  8b700c               mov esi, dword ptr [eax + 0xc]
// 0084b173  50                   push eax
// 0084b174  e8e7ffd1ff           call 0x56b160
// 0084b179  83c404               add esp, 4
// 0084b17c  8bc6                 mov eax, esi
// 0084b17e  85f6                 test esi, esi
// 0084b180  75ee                 jne 0x84b170
// 0084b182  43                   inc ebx
// 0084b183  3b5f0c               cmp ebx, dword ptr [edi + 0xc]
// 0084b186  7cd8                 jl 0x84b160
// 0084b188  5e                   pop esi
// 0084b189  8b4f08               mov ecx, dword ptr [edi + 8]
// 0084b18c  51                   push ecx
// 0084b18d  e8fe00d2ff           call 0x56b290
// 0084b192  83c404               add esp, 4
// 0084b195  c7470800000000       mov dword ptr [edi + 8], 0
// 0084b19c  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 0084b1a3  c7470400000000       mov dword ptr [edi + 4], 0
// 0084b1aa  5f                   pop edi
// 0084b1ab  5b                   pop ebx
// 0084b1ac  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?freeMemory@?$Table@PAV?$Array@H@G3D@@_N@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
