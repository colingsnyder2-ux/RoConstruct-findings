// roc 2009-06 004f5db0  unit: RBX::Network::ClientReplicator  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f5db0
//
// 004f5db0  56                   push esi
// 004f5db1  8bf1                 mov esi, ecx
// 004f5db3  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004f5db7  0f849a000000         je 0x4f5e57
// 004f5dbd  53                   push ebx
// 004f5dbe  55                   push ebp
// 004f5dbf  57                   push edi
// 004f5dc0  bd01000000           mov ebp, 1
// 004f5dc5  e836f6ffff           call 0x4f5400
// 004f5dca  3bc5                 cmp eax, ebp
// 004f5dcc  7208                 jb 0x4f5dd6
// 004f5dce  8bff                 mov edi, edi
// 004f5dd0  03ed                 add ebp, ebp
// 004f5dd2  3be8                 cmp ebp, eax
// 004f5dd4  76fa                 jbe 0x4f5dd0
// 004f5dd6  33c9                 xor ecx, ecx
// 004f5dd8  8bc5                 mov eax, ebp
// 004f5dda  ba08000000           mov edx, 8
// 004f5ddf  f7e2                 mul edx
// 004f5de1  0f90c1               seto cl
// 004f5de4  f7d9                 neg ecx
// 004f5de6  0bc8                 or ecx, eax
// 004f5de8  51                   push ecx
// 004f5de9  e82c2f2200           call 0x718d1a
// 004f5dee  83c404               add esp, 4
// 004f5df1  8bce                 mov ecx, esi
// 004f5df3  8bd8                 mov ebx, eax
// 004f5df5  33ff                 xor edi, edi
// 004f5df7  e804f6ffff           call 0x4f5400
// 004f5dfc  85c0                 test eax, eax
// 004f5dfe  7627                 jbe 0x4f5e27
// 004f5e00  8b4604               mov eax, dword ptr [esi + 4]
// 004f5e03  03c7                 add eax, edi
// 004f5e05  33d2                 xor edx, edx
// 004f5e07  f7760c               div dword ptr [esi + 0xc]
// 004f5e0a  8b06                 mov eax, dword ptr [esi]
// 004f5e0c  47                   inc edi
// 004f5e0d  8b0cd0               mov ecx, dword ptr [eax + edx*8]
// 004f5e10  894cfbf8             mov dword ptr [ebx + edi*8 - 8], ecx
// 004f5e14  8b54d004             mov edx, dword ptr [eax + edx*8 + 4]
// 004f5e18  8954fbfc             mov dword ptr [ebx + edi*8 - 4], edx
// 004f5e1c  8bce                 mov ecx, esi
// 004f5e1e  e8ddf5ffff           call 0x4f5400
// 004f5e23  3bf8                 cmp edi, eax
// 004f5e25  72d9                 jb 0x4f5e00
// 004f5e27  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f5e2a  8b4608               mov eax, dword ptr [esi + 8]
// 004f5e2d  3bc8                 cmp ecx, eax
// 004f5e2f  7704                 ja 0x4f5e35
// 004f5e31  2bc1                 sub eax, ecx
// 004f5e33  eb05                 jmp 0x4f5e3a
// 004f5e35  2bc1                 sub eax, ecx
// 004f5e37  03460c               add eax, dword ptr [esi + 0xc]
// 004f5e3a  894608               mov dword ptr [esi + 8], eax
// 004f5e3d  8b06                 mov eax, dword ptr [esi]
// 004f5e3f  50                   push eax
// 004f5e40  896e0c               mov dword ptr [esi + 0xc], ebp
// 004f5e43  c7460400000000       mov dword ptr [esi + 4], 0
// 004f5e4a  e88f2e2200           call 0x718cde
// 004f5e4f  83c404               add esp, 4
// 004f5e52  5f                   pop edi
// 004f5e53  5d                   pop ebp
// 004f5e54  891e                 mov dword ptr [esi], ebx
// 004f5e56  5b                   pop ebx
// 004f5e57  5e                   pop esi
// 004f5e58  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Compress@?$Queue@_J@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
