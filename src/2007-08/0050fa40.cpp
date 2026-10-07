// roc 2007-08 0050fa40  unit: G3D::TextInput::WrongSymbol  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050fa40
//
// 0050fa40  51                   push ecx
// 0050fa41  53                   push ebx
// 0050fa42  55                   push ebp
// 0050fa43  8bd9                 mov ebx, ecx
// 0050fa45  33ed                 xor ebp, ebp
// 0050fa47  33c0                 xor eax, eax
// 0050fa49  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 0050fa4c  89442408             mov dword ptr [esp + 8], eax
// 0050fa50  7e44                 jle 0x50fa96
// 0050fa52  56                   push esi
// 0050fa53  57                   push edi
// 0050fa54  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0050fa57  8b3481               mov esi, dword ptr [ecx + eax*4]
// 0050fa5a  3bf5                 cmp esi, ebp
// 0050fa5c  742a                 je 0x50fa88
// 0050fa5e  8bff                 mov edi, edi
// 0050fa60  8b560c               mov edx, dword ptr [esi + 0xc]
// 0050fa63  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0050fa66  52                   push edx
// 0050fa67  e8a4fdfeff           call 0x4ff810
// 0050fa6c  56                   push esi
// 0050fa6d  896e0c               mov dword ptr [esi + 0xc], ebp
// 0050fa70  896e10               mov dword ptr [esi + 0x10], ebp
// 0050fa73  896e14               mov dword ptr [esi + 0x14], ebp
// 0050fa76  e875fdfeff           call 0x4ff7f0
// 0050fa7b  83c408               add esp, 8
// 0050fa7e  3bfd                 cmp edi, ebp
// 0050fa80  8bf7                 mov esi, edi
// 0050fa82  75dc                 jne 0x50fa60
// 0050fa84  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050fa88  83c001               add eax, 1
// 0050fa8b  3b430c               cmp eax, dword ptr [ebx + 0xc]
// 0050fa8e  89442410             mov dword ptr [esp + 0x10], eax
// 0050fa92  7cc0                 jl 0x50fa54
// 0050fa94  5f                   pop edi
// 0050fa95  5e                   pop esi
// 0050fa96  8b4308               mov eax, dword ptr [ebx + 8]
// 0050fa99  50                   push eax
// 0050fa9a  e871fdfeff           call 0x4ff810
// 0050fa9f  83c404               add esp, 4
// 0050faa2  896b08               mov dword ptr [ebx + 8], ebp
// 0050faa5  896b0c               mov dword ptr [ebx + 0xc], ebp
// 0050faa8  896b04               mov dword ptr [ebx + 4], ebp
// 0050faab  5d                   pop ebp
// 0050faac  5b                   pop ebx
// 0050faad  59                   pop ecx
// 0050faae  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?freeMemory@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
