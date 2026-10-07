// roc 2010-06 0055ff30  unit: G3D::Line  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055ff30
//
// 0055ff30  51                   push ecx
// 0055ff31  53                   push ebx
// 0055ff32  55                   push ebp
// 0055ff33  8bd9                 mov ebx, ecx
// 0055ff35  33ed                 xor ebp, ebp
// 0055ff37  33c0                 xor eax, eax
// 0055ff39  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 0055ff3c  89442408             mov dword ptr [esp + 8], eax
// 0055ff40  7e42                 jle 0x55ff84
// 0055ff42  56                   push esi
// 0055ff43  57                   push edi
// 0055ff44  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0055ff47  8b3481               mov esi, dword ptr [ecx + eax*4]
// 0055ff4a  3bf5                 cmp esi, ebp
// 0055ff4c  742a                 je 0x55ff78
// 0055ff4e  8bff                 mov edi, edi
// 0055ff50  8b560c               mov edx, dword ptr [esi + 0xc]
// 0055ff53  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0055ff56  52                   push edx
// 0055ff57  e864dafeff           call 0x54d9c0
// 0055ff5c  56                   push esi
// 0055ff5d  896e0c               mov dword ptr [esi + 0xc], ebp
// 0055ff60  896e10               mov dword ptr [esi + 0x10], ebp
// 0055ff63  896e14               mov dword ptr [esi + 0x14], ebp
// 0055ff66  e845acfaff           call 0x50abb0
// 0055ff6b  83c408               add esp, 8
// 0055ff6e  8bf7                 mov esi, edi
// 0055ff70  3bfd                 cmp edi, ebp
// 0055ff72  75dc                 jne 0x55ff50
// 0055ff74  8b442410             mov eax, dword ptr [esp + 0x10]
// 0055ff78  40                   inc eax
// 0055ff79  3b430c               cmp eax, dword ptr [ebx + 0xc]
// 0055ff7c  89442410             mov dword ptr [esp + 0x10], eax
// 0055ff80  7cc2                 jl 0x55ff44
// 0055ff82  5f                   pop edi
// 0055ff83  5e                   pop esi
// 0055ff84  8b4308               mov eax, dword ptr [ebx + 8]
// 0055ff87  50                   push eax
// 0055ff88  e833dafeff           call 0x54d9c0
// 0055ff8d  83c404               add esp, 4
// 0055ff90  896b08               mov dword ptr [ebx + 8], ebp
// 0055ff93  896b0c               mov dword ptr [ebx + 0xc], ebp
// 0055ff96  896b04               mov dword ptr [ebx + 4], ebp
// 0055ff99  5d                   pop ebp
// 0055ff9a  5b                   pop ebx
// 0055ff9b  59                   pop ecx
// 0055ff9c  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?freeMemory@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
