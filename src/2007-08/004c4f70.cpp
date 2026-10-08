// roc 2007-08 004c4f70  unit: RakPeer  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4f70
//
// 004c4f70  56                   push esi
// 004c4f71  8bf1                 mov esi, ecx
// 004c4f73  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004c4f77  0f849c000000         je 0x4c5019
// 004c4f7d  53                   push ebx
// 004c4f7e  55                   push ebp
// 004c4f7f  57                   push edi
// 004c4f80  bd01000000           mov ebp, 1
// 004c4f85  e8c6ffffff           call 0x4c4f50
// 004c4f8a  3bc5                 cmp eax, ebp
// 004c4f8c  7208                 jb 0x4c4f96
// 004c4f8e  8bff                 mov edi, edi
// 004c4f90  03ed                 add ebp, ebp
// 004c4f92  3be8                 cmp ebp, eax
// 004c4f94  76fa                 jbe 0x4c4f90
// 004c4f96  33c9                 xor ecx, ecx
// 004c4f98  8bc5                 mov eax, ebp
// 004c4f9a  ba08000000           mov edx, 8
// 004c4f9f  f7e2                 mul edx
// 004c4fa1  0f90c1               seto cl
// 004c4fa4  f7d9                 neg ecx
// 004c4fa6  0bc8                 or ecx, eax
// 004c4fa8  51                   push ecx
// 004c4fa9  e848af1600           call 0x62fef6
// 004c4fae  83c404               add esp, 4
// 004c4fb1  8bce                 mov ecx, esi
// 004c4fb3  8bd8                 mov ebx, eax
// 004c4fb5  33ff                 xor edi, edi
// 004c4fb7  e894ffffff           call 0x4c4f50
// 004c4fbc  85c0                 test eax, eax
// 004c4fbe  7629                 jbe 0x4c4fe9
// 004c4fc0  8b4604               mov eax, dword ptr [esi + 4]
// 004c4fc3  03c7                 add eax, edi
// 004c4fc5  33d2                 xor edx, edx
// 004c4fc7  f7760c               div dword ptr [esi + 0xc]
// 004c4fca  8b06                 mov eax, dword ptr [esi]
// 004c4fcc  83c701               add edi, 1
// 004c4fcf  8b0cd0               mov ecx, dword ptr [eax + edx*8]
// 004c4fd2  894cfbf8             mov dword ptr [ebx + edi*8 - 8], ecx
// 004c4fd6  8b54d004             mov edx, dword ptr [eax + edx*8 + 4]
// 004c4fda  8954fbfc             mov dword ptr [ebx + edi*8 - 4], edx
// 004c4fde  8bce                 mov ecx, esi
// 004c4fe0  e86bffffff           call 0x4c4f50
// 004c4fe5  3bf8                 cmp edi, eax
// 004c4fe7  72d7                 jb 0x4c4fc0
// 004c4fe9  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c4fec  8b4608               mov eax, dword ptr [esi + 8]
// 004c4fef  3bc8                 cmp ecx, eax
// 004c4ff1  7704                 ja 0x4c4ff7
// 004c4ff3  2bc1                 sub eax, ecx
// 004c4ff5  eb05                 jmp 0x4c4ffc
// 004c4ff7  2bc1                 sub eax, ecx
// 004c4ff9  03460c               add eax, dword ptr [esi + 0xc]
// 004c4ffc  894608               mov dword ptr [esi + 8], eax
// 004c4fff  8b06                 mov eax, dword ptr [esi]
// 004c5001  50                   push eax
// 004c5002  896e0c               mov dword ptr [esi + 0xc], ebp
// 004c5005  c7460400000000       mov dword ptr [esi + 4], 0
// 004c500c  e851ac1600           call 0x62fc62
// 004c5011  83c404               add esp, 4
// 004c5014  5f                   pop edi
// 004c5015  5d                   pop ebp
// 004c5016  891e                 mov dword ptr [esi], ebx
// 004c5018  5b                   pop ebx
// 004c5019  5e                   pop esi
// 004c501a  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Compress@?$Queue@_J@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
