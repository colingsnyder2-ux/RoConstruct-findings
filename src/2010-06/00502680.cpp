// roc 2010-06 00502680  unit: RBX::Network::ClientReplicator  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00502680
//
// 00502680  56                   push esi
// 00502681  8bf1                 mov esi, ecx
// 00502683  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00502687  0f849a000000         je 0x502727
// 0050268d  53                   push ebx
// 0050268e  55                   push ebp
// 0050268f  57                   push edi
// 00502690  bd01000000           mov ebp, 1
// 00502695  e8562a0100           call 0x5150f0
// 0050269a  3bc5                 cmp eax, ebp
// 0050269c  7208                 jb 0x5026a6
// 0050269e  8bff                 mov edi, edi
// 005026a0  03ed                 add ebp, ebp
// 005026a2  3be8                 cmp ebp, eax
// 005026a4  76fa                 jbe 0x5026a0
// 005026a6  33c9                 xor ecx, ecx
// 005026a8  8bc5                 mov eax, ebp
// 005026aa  ba08000000           mov edx, 8
// 005026af  f7e2                 mul edx
// 005026b1  0f90c1               seto cl
// 005026b4  f7d9                 neg ecx
// 005026b6  0bc8                 or ecx, eax
// 005026b8  51                   push ecx
// 005026b9  e8c4552a00           call 0x7a7c82
// 005026be  83c404               add esp, 4
// 005026c1  8bce                 mov ecx, esi
// 005026c3  8bd8                 mov ebx, eax
// 005026c5  33ff                 xor edi, edi
// 005026c7  e8242a0100           call 0x5150f0
// 005026cc  85c0                 test eax, eax
// 005026ce  7627                 jbe 0x5026f7
// 005026d0  8b4604               mov eax, dword ptr [esi + 4]
// 005026d3  03c7                 add eax, edi
// 005026d5  33d2                 xor edx, edx
// 005026d7  f7760c               div dword ptr [esi + 0xc]
// 005026da  8b06                 mov eax, dword ptr [esi]
// 005026dc  47                   inc edi
// 005026dd  8b0cd0               mov ecx, dword ptr [eax + edx*8]
// 005026e0  894cfbf8             mov dword ptr [ebx + edi*8 - 8], ecx
// 005026e4  8b54d004             mov edx, dword ptr [eax + edx*8 + 4]
// 005026e8  8954fbfc             mov dword ptr [ebx + edi*8 - 4], edx
// 005026ec  8bce                 mov ecx, esi
// 005026ee  e8fd290100           call 0x5150f0
// 005026f3  3bf8                 cmp edi, eax
// 005026f5  72d9                 jb 0x5026d0
// 005026f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005026fa  8b4608               mov eax, dword ptr [esi + 8]
// 005026fd  3bc8                 cmp ecx, eax
// 005026ff  7704                 ja 0x502705
// 00502701  2bc1                 sub eax, ecx
// 00502703  eb05                 jmp 0x50270a
// 00502705  2bc1                 sub eax, ecx
// 00502707  03460c               add eax, dword ptr [esi + 0xc]
// 0050270a  894608               mov dword ptr [esi + 8], eax
// 0050270d  8b06                 mov eax, dword ptr [esi]
// 0050270f  50                   push eax
// 00502710  896e0c               mov dword ptr [esi + 0xc], ebp
// 00502713  c7460400000000       mov dword ptr [esi + 4], 0
// 0050271a  e827552a00           call 0x7a7c46
// 0050271f  83c404               add esp, 4
// 00502722  5f                   pop edi
// 00502723  5d                   pop ebp
// 00502724  891e                 mov dword ptr [esi], ebx
// 00502726  5b                   pop ebx
// 00502727  5e                   pop esi
// 00502728  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Compress@?$Queue@_J@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
