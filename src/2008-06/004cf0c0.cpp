// roc 2008-06 004cf0c0  unit: RBX::Network::PhysicsSender  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cf0c0
//
// 004cf0c0  56                   push esi
// 004cf0c1  8bf1                 mov esi, ecx
// 004cf0c3  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004cf0c7  0f849a000000         je 0x4cf167
// 004cf0cd  53                   push ebx
// 004cf0ce  55                   push ebp
// 004cf0cf  57                   push edi
// 004cf0d0  bd01000000           mov ebp, 1
// 004cf0d5  e8c6ffffff           call 0x4cf0a0
// 004cf0da  3bc5                 cmp eax, ebp
// 004cf0dc  7208                 jb 0x4cf0e6
// 004cf0de  8bff                 mov edi, edi
// 004cf0e0  03ed                 add ebp, ebp
// 004cf0e2  3be8                 cmp ebp, eax
// 004cf0e4  76fa                 jbe 0x4cf0e0
// 004cf0e6  33c9                 xor ecx, ecx
// 004cf0e8  8bc5                 mov eax, ebp
// 004cf0ea  ba08000000           mov edx, 8
// 004cf0ef  f7e2                 mul edx
// 004cf0f1  0f90c1               seto cl
// 004cf0f4  f7d9                 neg ecx
// 004cf0f6  0bc8                 or ecx, eax
// 004cf0f8  51                   push ecx
// 004cf0f9  e822181d00           call 0x6a0920
// 004cf0fe  83c404               add esp, 4
// 004cf101  8bce                 mov ecx, esi
// 004cf103  8bd8                 mov ebx, eax
// 004cf105  33ff                 xor edi, edi
// 004cf107  e894ffffff           call 0x4cf0a0
// 004cf10c  85c0                 test eax, eax
// 004cf10e  7627                 jbe 0x4cf137
// 004cf110  8b4604               mov eax, dword ptr [esi + 4]
// 004cf113  03c7                 add eax, edi
// 004cf115  33d2                 xor edx, edx
// 004cf117  f7760c               div dword ptr [esi + 0xc]
// 004cf11a  8b06                 mov eax, dword ptr [esi]
// 004cf11c  47                   inc edi
// 004cf11d  8b0cd0               mov ecx, dword ptr [eax + edx*8]
// 004cf120  894cfbf8             mov dword ptr [ebx + edi*8 - 8], ecx
// 004cf124  8b54d004             mov edx, dword ptr [eax + edx*8 + 4]
// 004cf128  8954fbfc             mov dword ptr [ebx + edi*8 - 4], edx
// 004cf12c  8bce                 mov ecx, esi
// 004cf12e  e86dffffff           call 0x4cf0a0
// 004cf133  3bf8                 cmp edi, eax
// 004cf135  72d9                 jb 0x4cf110
// 004cf137  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cf13a  8b4608               mov eax, dword ptr [esi + 8]
// 004cf13d  3bc8                 cmp ecx, eax
// 004cf13f  7704                 ja 0x4cf145
// 004cf141  2bc1                 sub eax, ecx
// 004cf143  eb05                 jmp 0x4cf14a
// 004cf145  2bc1                 sub eax, ecx
// 004cf147  03460c               add eax, dword ptr [esi + 0xc]
// 004cf14a  894608               mov dword ptr [esi + 8], eax
// 004cf14d  8b06                 mov eax, dword ptr [esi]
// 004cf14f  50                   push eax
// 004cf150  896e0c               mov dword ptr [esi + 0xc], ebp
// 004cf153  c7460400000000       mov dword ptr [esi + 4], 0
// 004cf15a  e81b151d00           call 0x6a067a
// 004cf15f  83c404               add esp, 4
// 004cf162  5f                   pop edi
// 004cf163  5d                   pop ebp
// 004cf164  891e                 mov dword ptr [esi], ebx
// 004cf166  5b                   pop ebx
// 004cf167  5e                   pop esi
// 004cf168  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Compress@?$Queue@_J@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
