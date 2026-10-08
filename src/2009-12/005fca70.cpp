// roc 2009-12 005fca70  unit: G3D::TextInput::WrongSymbol  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fca70
//
// 005fca70  51                   push ecx
// 005fca71  53                   push ebx
// 005fca72  55                   push ebp
// 005fca73  8bd9                 mov ebx, ecx
// 005fca75  33ed                 xor ebp, ebp
// 005fca77  33c0                 xor eax, eax
// 005fca79  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 005fca7c  89442408             mov dword ptr [esp + 8], eax
// 005fca80  7e42                 jle 0x5fcac4
// 005fca82  56                   push esi
// 005fca83  57                   push edi
// 005fca84  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005fca87  8b3481               mov esi, dword ptr [ecx + eax*4]
// 005fca8a  3bf5                 cmp esi, ebp
// 005fca8c  742a                 je 0x5fcab8
// 005fca8e  8bff                 mov edi, edi
// 005fca90  8b560c               mov edx, dword ptr [esi + 0xc]
// 005fca93  8b7e18               mov edi, dword ptr [esi + 0x18]
// 005fca96  52                   push edx
// 005fca97  e844d9feff           call 0x5ea3e0
// 005fca9c  56                   push esi
// 005fca9d  896e0c               mov dword ptr [esi + 0xc], ebp
// 005fcaa0  896e10               mov dword ptr [esi + 0x10], ebp
// 005fcaa3  896e14               mov dword ptr [esi + 0x14], ebp
// 005fcaa6  e8f5f6f5ff           call 0x55c1a0
// 005fcaab  83c408               add esp, 8
// 005fcaae  8bf7                 mov esi, edi
// 005fcab0  3bfd                 cmp edi, ebp
// 005fcab2  75dc                 jne 0x5fca90
// 005fcab4  8b442410             mov eax, dword ptr [esp + 0x10]
// 005fcab8  40                   inc eax
// 005fcab9  3b430c               cmp eax, dword ptr [ebx + 0xc]
// 005fcabc  89442410             mov dword ptr [esp + 0x10], eax
// 005fcac0  7cc2                 jl 0x5fca84
// 005fcac2  5f                   pop edi
// 005fcac3  5e                   pop esi
// 005fcac4  8b4308               mov eax, dword ptr [ebx + 8]
// 005fcac7  50                   push eax
// 005fcac8  e813d9feff           call 0x5ea3e0
// 005fcacd  83c404               add esp, 4
// 005fcad0  896b08               mov dword ptr [ebx + 8], ebp
// 005fcad3  896b0c               mov dword ptr [ebx + 0xc], ebp
// 005fcad6  896b04               mov dword ptr [ebx + 4], ebp
// 005fcad9  5d                   pop ebp
// 005fcada  5b                   pop ebx
// 005fcadb  59                   pop ecx
// 005fcadc  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?freeMemory@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
