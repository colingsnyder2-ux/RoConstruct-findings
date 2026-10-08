// roc 2007-03 00504420  unit: seg_00500000  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00504420
//
// 00504420  6aff                 push -1
// 00504422  68b8107500           push 0x7510b8
// 00504427  64a100000000         mov eax, dword ptr fs:[0]
// 0050442d  50                   push eax
// 0050442e  83ec0c               sub esp, 0xc
// 00504431  53                   push ebx
// 00504432  56                   push esi
// 00504433  57                   push edi
// 00504434  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00504439  33c4                 xor eax, esp
// 0050443b  50                   push eax
// 0050443c  8d44241c             lea eax, [esp + 0x1c]
// 00504440  64a300000000         mov dword ptr fs:[0], eax
// 00504446  8bf1                 mov esi, ecx
// 00504448  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0050444c  53                   push ebx
// 0050444d  e81efcffff           call 0x504070
// 00504452  84c0                 test al, al
// 00504454  755c                 jne 0x5044b2
// 00504456  33ff                 xor edi, edi
// 00504458  6a01                 push 1
// 0050445a  6a01                 push 1
// 0050445c  8d4c2418             lea ecx, [esp + 0x18]
// 00504460  897c241c             mov dword ptr [esp + 0x1c], edi
// 00504464  897c2420             mov dword ptr [esp + 0x20], edi
// 00504468  897c2418             mov dword ptr [esp + 0x18], edi
// 0050446c  e8af6bf7ff           call 0x47b020
// 00504471  8b442430             mov eax, dword ptr [esp + 0x30]
// 00504475  8d4c2410             lea ecx, [esp + 0x10]
// 00504479  51                   push ecx
// 0050447a  897c2428             mov dword ptr [esp + 0x28], edi
// 0050447e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00504482  53                   push ebx
// 00504483  8bce                 mov ecx, esi
// 00504485  8907                 mov dword ptr [edi], eax
// 00504487  e8f4fdffff           call 0x504280
// 0050448c  57                   push edi
// 0050448d  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00504495  e8e6eefeff           call 0x4f3380
// 0050449a  83c404               add esp, 4
// 0050449d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005044a1  64890d00000000       mov dword ptr fs:[0], ecx
// 005044a8  59                   pop ecx
// 005044a9  5f                   pop edi
// 005044aa  5e                   pop esi
// 005044ab  5b                   pop ebx
// 005044ac  83c418               add esp, 0x18
// 005044af  c20800               ret 8
// 005044b2  8d542430             lea edx, [esp + 0x30]
// 005044b6  52                   push edx
// 005044b7  53                   push ebx
// 005044b8  8bce                 mov ecx, esi
// 005044ba  e811fcffff           call 0x5040d0
// 005044bf  8bc8                 mov ecx, eax
// 005044c1  e84a3efeff           call 0x4e8310
// 005044c6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005044ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005044d1  59                   pop ecx
// 005044d2  5f                   pop edi
// 005044d3  5e                   pop esi
// 005044d4  5b                   pop ebx
// 005044d5  83c418               add esp, 0x18
// 005044d8  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?insert@MeshEdgeTable@G3D@@QAEXABVMeshDirectedEdgeKey@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
