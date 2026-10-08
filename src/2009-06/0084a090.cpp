// from server: 100% by auto
// roc 2009-06 0084a090  unit: RBX::RbxG3D::MegaTextureProxy  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084a090
//
// 0084a090  51                   push ecx
// 0084a091  53                   push ebx
// 0084a092  55                   push ebp
// 0084a093  8bd9                 mov ebx, ecx
// 0084a095  33ed                 xor ebp, ebp
// 0084a097  33c0                 xor eax, eax
// 0084a099  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 0084a09c  89442408             mov dword ptr [esp + 8], eax
// 0084a0a0  7e42                 jle 0x84a0e4
// 0084a0a2  56                   push esi
// 0084a0a3  57                   push edi
// 0084a0a4  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0084a0a7  8b3481               mov esi, dword ptr [ecx + eax*4]
// 0084a0aa  3bf5                 cmp esi, ebp
// 0084a0ac  742a                 je 0x84a0d8
// 0084a0ae  8bff                 mov edi, edi
// 0084a0b0  8b560c               mov edx, dword ptr [esi + 0xc]
// 0084a0b3  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0084a0b6  52                   push edx
// 0084a0b7  e8d411d2ff           call 0x56b290
// 0084a0bc  56                   push esi
// 0084a0bd  896e0c               mov dword ptr [esi + 0xc], ebp
// 0084a0c0  896e10               mov dword ptr [esi + 0x10], ebp
// 0084a0c3  896e14               mov dword ptr [esi + 0x14], ebp
// 0084a0c6  e89510d2ff           call 0x56b160
// 0084a0cb  83c408               add esp, 8
// 0084a0ce  8bf7                 mov esi, edi
// 0084a0d0  3bfd                 cmp edi, ebp
// 0084a0d2  75dc                 jne 0x84a0b0
// 0084a0d4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0084a0d8  40                   inc eax
// 0084a0d9  3b430c               cmp eax, dword ptr [ebx + 0xc]
// 0084a0dc  89442410             mov dword ptr [esp + 0x10], eax
// 0084a0e0  7cc2                 jl 0x84a0a4
// 0084a0e2  5f                   pop edi
// 0084a0e3  5e                   pop esi
// 0084a0e4  8b4308               mov eax, dword ptr [ebx + 8]
// 0084a0e7  50                   push eax
// 0084a0e8  e8a311d2ff           call 0x56b290
// 0084a0ed  83c404               add esp, 4
// 0084a0f0  896b08               mov dword ptr [ebx + 8], ebp
// 0084a0f3  896b0c               mov dword ptr [ebx + 0xc], ebp
// 0084a0f6  896b04               mov dword ptr [ebx + 4], ebp
// 0084a0f9  5d                   pop ebp
// 0084a0fa  5b                   pop ebx
// 0084a0fb  59                   pop ecx
// 0084a0fc  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?freeMemory@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
