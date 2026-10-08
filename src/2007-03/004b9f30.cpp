// roc 2007-03 004b9f30  unit: seg_004b0000  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9f30
//
// 004b9f30  56                   push esi
// 004b9f31  8bf1                 mov esi, ecx
// 004b9f33  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004b9f37  0f849c000000         je 0x4b9fd9
// 004b9f3d  53                   push ebx
// 004b9f3e  55                   push ebp
// 004b9f3f  57                   push edi
// 004b9f40  bd01000000           mov ebp, 1
// 004b9f45  e8c6ffffff           call 0x4b9f10
// 004b9f4a  3bc5                 cmp eax, ebp
// 004b9f4c  7208                 jb 0x4b9f56
// 004b9f4e  8bff                 mov edi, edi
// 004b9f50  03ed                 add ebp, ebp
// 004b9f52  3be8                 cmp ebp, eax
// 004b9f54  76fa                 jbe 0x4b9f50
// 004b9f56  33c9                 xor ecx, ecx
// 004b9f58  8bc5                 mov eax, ebp
// 004b9f5a  ba08000000           mov edx, 8
// 004b9f5f  f7e2                 mul edx
// 004b9f61  0f90c1               seto cl
// 004b9f64  f7d9                 neg ecx
// 004b9f66  0bc8                 or ecx, eax
// 004b9f68  51                   push ecx
// 004b9f69  e89a411600           call 0x61e108
// 004b9f6e  83c404               add esp, 4
// 004b9f71  8bce                 mov ecx, esi
// 004b9f73  8bd8                 mov ebx, eax
// 004b9f75  33ff                 xor edi, edi
// 004b9f77  e894ffffff           call 0x4b9f10
// 004b9f7c  85c0                 test eax, eax
// 004b9f7e  7629                 jbe 0x4b9fa9
// 004b9f80  8b4604               mov eax, dword ptr [esi + 4]
// 004b9f83  03c7                 add eax, edi
// 004b9f85  33d2                 xor edx, edx
// 004b9f87  f7760c               div dword ptr [esi + 0xc]
// 004b9f8a  8b06                 mov eax, dword ptr [esi]
// 004b9f8c  83c701               add edi, 1
// 004b9f8f  8b0cd0               mov ecx, dword ptr [eax + edx*8]
// 004b9f92  894cfbf8             mov dword ptr [ebx + edi*8 - 8], ecx
// 004b9f96  8b54d004             mov edx, dword ptr [eax + edx*8 + 4]
// 004b9f9a  8954fbfc             mov dword ptr [ebx + edi*8 - 4], edx
// 004b9f9e  8bce                 mov ecx, esi
// 004b9fa0  e86bffffff           call 0x4b9f10
// 004b9fa5  3bf8                 cmp edi, eax
// 004b9fa7  72d7                 jb 0x4b9f80
// 004b9fa9  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b9fac  8b4608               mov eax, dword ptr [esi + 8]
// 004b9faf  3bc8                 cmp ecx, eax
// 004b9fb1  7704                 ja 0x4b9fb7
// 004b9fb3  2bc1                 sub eax, ecx
// 004b9fb5  eb05                 jmp 0x4b9fbc
// 004b9fb7  2bc1                 sub eax, ecx
// 004b9fb9  03460c               add eax, dword ptr [esi + 0xc]
// 004b9fbc  894608               mov dword ptr [esi + 8], eax
// 004b9fbf  8b06                 mov eax, dword ptr [esi]
// 004b9fc1  50                   push eax
// 004b9fc2  896e0c               mov dword ptr [esi + 0xc], ebp
// 004b9fc5  c7460400000000       mov dword ptr [esi + 4], 0
// 004b9fcc  e81f411600           call 0x61e0f0
// 004b9fd1  83c404               add esp, 4
// 004b9fd4  5f                   pop edi
// 004b9fd5  5d                   pop ebp
// 004b9fd6  891e                 mov dword ptr [esi], ebx
// 004b9fd8  5b                   pop ebx
// 004b9fd9  5e                   pop esi
// 004b9fda  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Compress@?$Queue@_J@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
