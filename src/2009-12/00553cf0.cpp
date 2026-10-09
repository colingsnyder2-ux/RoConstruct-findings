// roc 2009-12 00553cf0  unit: RBX::Network::ClientReplicator  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00553cf0
//
// 00553cf0  56                   push esi
// 00553cf1  8bf1                 mov esi, ecx
// 00553cf3  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00553cf7  0f849a000000         je 0x553d97
// 00553cfd  53                   push ebx
// 00553cfe  55                   push ebp
// 00553cff  57                   push edi
// 00553d00  bd01000000           mov ebp, 1
// 00553d05  e836f6ffff           call 0x553340
// 00553d0a  3bc5                 cmp eax, ebp
// 00553d0c  7208                 jb 0x553d16
// 00553d0e  8bff                 mov edi, edi
// 00553d10  03ed                 add ebp, ebp
// 00553d12  3be8                 cmp ebp, eax
// 00553d14  76fa                 jbe 0x553d10
// 00553d16  33c9                 xor ecx, ecx
// 00553d18  8bc5                 mov eax, ebp
// 00553d1a  ba08000000           mov edx, 8
// 00553d1f  f7e2                 mul edx
// 00553d21  0f90c1               seto cl
// 00553d24  f7d9                 neg ecx
// 00553d26  0bc8                 or ecx, eax
// 00553d28  51                   push ecx
// 00553d29  e814fe2900           call 0x7f3b42
// 00553d2e  83c404               add esp, 4
// 00553d31  8bce                 mov ecx, esi
// 00553d33  8bd8                 mov ebx, eax
// 00553d35  33ff                 xor edi, edi
// 00553d37  e804f6ffff           call 0x553340
// 00553d3c  85c0                 test eax, eax
// 00553d3e  7627                 jbe 0x553d67
// 00553d40  8b4604               mov eax, dword ptr [esi + 4]
// 00553d43  03c7                 add eax, edi
// 00553d45  33d2                 xor edx, edx
// 00553d47  f7760c               div dword ptr [esi + 0xc]
// 00553d4a  8b06                 mov eax, dword ptr [esi]
// 00553d4c  47                   inc edi
// 00553d4d  8b0cd0               mov ecx, dword ptr [eax + edx*8]
// 00553d50  894cfbf8             mov dword ptr [ebx + edi*8 - 8], ecx
// 00553d54  8b54d004             mov edx, dword ptr [eax + edx*8 + 4]
// 00553d58  8954fbfc             mov dword ptr [ebx + edi*8 - 4], edx
// 00553d5c  8bce                 mov ecx, esi
// 00553d5e  e8ddf5ffff           call 0x553340
// 00553d63  3bf8                 cmp edi, eax
// 00553d65  72d9                 jb 0x553d40
// 00553d67  8b4e04               mov ecx, dword ptr [esi + 4]
// 00553d6a  8b4608               mov eax, dword ptr [esi + 8]
// 00553d6d  3bc8                 cmp ecx, eax
// 00553d6f  7704                 ja 0x553d75
// 00553d71  2bc1                 sub eax, ecx
// 00553d73  eb05                 jmp 0x553d7a
// 00553d75  2bc1                 sub eax, ecx
// 00553d77  03460c               add eax, dword ptr [esi + 0xc]
// 00553d7a  894608               mov dword ptr [esi + 8], eax
// 00553d7d  8b06                 mov eax, dword ptr [esi]
// 00553d7f  50                   push eax
// 00553d80  896e0c               mov dword ptr [esi + 0xc], ebp
// 00553d83  c7460400000000       mov dword ptr [esi + 4], 0
// 00553d8a  e877fd2900           call 0x7f3b06
// 00553d8f  83c404               add esp, 4
// 00553d92  5f                   pop edi
// 00553d93  5d                   pop ebp
// 00553d94  891e                 mov dword ptr [esi], ebx
// 00553d96  5b                   pop ebx
// 00553d97  5e                   pop esi
// 00553d98  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Compress@?$Queue@_J@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
