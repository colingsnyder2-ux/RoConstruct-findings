// from server: 100% by auto
// roc 2008-06 007b9550  unit: RBX::Render::MegaTextureProxy  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b9550
//
// 007b9550  51                   push ecx
// 007b9551  53                   push ebx
// 007b9552  55                   push ebp
// 007b9553  8bd9                 mov ebx, ecx
// 007b9555  33ed                 xor ebp, ebp
// 007b9557  33c0                 xor eax, eax
// 007b9559  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 007b955c  89442408             mov dword ptr [esp + 8], eax
// 007b9560  7e42                 jle 0x7b95a4
// 007b9562  56                   push esi
// 007b9563  57                   push edi
// 007b9564  8b4b08               mov ecx, dword ptr [ebx + 8]
// 007b9567  8b3481               mov esi, dword ptr [ecx + eax*4]
// 007b956a  3bf5                 cmp esi, ebp
// 007b956c  742a                 je 0x7b9598
// 007b956e  8bff                 mov edi, edi
// 007b9570  8b560c               mov edx, dword ptr [esi + 0xc]
// 007b9573  8b7e18               mov edi, dword ptr [esi + 0x18]
// 007b9576  52                   push edx
// 007b9577  e8a4e7d4ff           call 0x507d20
// 007b957c  56                   push esi
// 007b957d  896e0c               mov dword ptr [esi + 0xc], ebp
// 007b9580  896e10               mov dword ptr [esi + 0x10], ebp
// 007b9583  896e14               mov dword ptr [esi + 0x14], ebp
// 007b9586  e875e7d4ff           call 0x507d00
// 007b958b  83c408               add esp, 8
// 007b958e  8bf7                 mov esi, edi
// 007b9590  3bfd                 cmp edi, ebp
// 007b9592  75dc                 jne 0x7b9570
// 007b9594  8b442410             mov eax, dword ptr [esp + 0x10]
// 007b9598  40                   inc eax
// 007b9599  3b430c               cmp eax, dword ptr [ebx + 0xc]
// 007b959c  89442410             mov dword ptr [esp + 0x10], eax
// 007b95a0  7cc2                 jl 0x7b9564
// 007b95a2  5f                   pop edi
// 007b95a3  5e                   pop esi
// 007b95a4  8b4308               mov eax, dword ptr [ebx + 8]
// 007b95a7  50                   push eax
// 007b95a8  e873e7d4ff           call 0x507d20
// 007b95ad  83c404               add esp, 4
// 007b95b0  896b08               mov dword ptr [ebx + 8], ebp
// 007b95b3  896b0c               mov dword ptr [ebx + 0xc], ebp
// 007b95b6  896b04               mov dword ptr [ebx + 4], ebp
// 007b95b9  5d                   pop ebp
// 007b95ba  5b                   pop ebx
// 007b95bb  59                   pop ecx
// 007b95bc  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?freeMemory@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
