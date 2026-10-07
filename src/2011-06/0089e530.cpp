// roc 2011-06 0089e530  unit: CXTPKeyboardManager  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089e530
//
// 0089e530  53                   push ebx
// 0089e531  56                   push esi
// 0089e532  57                   push edi
// 0089e533  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0089e537  33db                 xor ebx, ebx
// 0089e539  3bfb                 cmp edi, ebx
// 0089e53b  8bf1                 mov esi, ecx
// 0089e53d  7d05                 jge 0x89e544
// 0089e53f  e8c6bdf6ff           call 0x80a30a
// 0089e544  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089e548  3bc3                 cmp eax, ebx
// 0089e54a  7c03                 jl 0x89e54f
// 0089e54c  894610               mov dword ptr [esi + 0x10], eax
// 0089e54f  3bfb                 cmp edi, ebx
// 0089e551  751f                 jne 0x89e572
// 0089e553  8b4604               mov eax, dword ptr [esi + 4]
// 0089e556  3bc3                 cmp eax, ebx
// 0089e558  740c                 je 0x89e566
// 0089e55a  50                   push eax
// 0089e55b  e8a4bdf6ff           call 0x80a304
// 0089e560  83c404               add esp, 4
// 0089e563  895e04               mov dword ptr [esi + 4], ebx
// 0089e566  5f                   pop edi
// 0089e567  895e0c               mov dword ptr [esi + 0xc], ebx
// 0089e56a  895e08               mov dword ptr [esi + 8], ebx
// 0089e56d  5e                   pop esi
// 0089e56e  5b                   pop ebx
// 0089e56f  c20800               ret 8
// 0089e572  8b4e04               mov ecx, dword ptr [esi + 4]
// 0089e575  55                   push ebp
// 0089e576  3bcb                 cmp ecx, ebx
// 0089e578  7530                 jne 0x89e5aa
// 0089e57a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0089e57d  3bfd                 cmp edi, ebp
// 0089e57f  7e02                 jle 0x89e583
// 0089e581  8bef                 mov ebp, edi
// 0089e583  8bdd                 mov ebx, ebp
// 0089e585  c1e304               shl ebx, 4
// 0089e588  53                   push ebx
// 0089e589  e8b2bdf6ff           call 0x80a340
// 0089e58e  53                   push ebx
// 0089e58f  6a00                 push 0
// 0089e591  50                   push eax
// 0089e592  894604               mov dword ptr [esi + 4], eax
// 0089e595  e84acdf6ff           call 0x80b2e4
// 0089e59a  83c410               add esp, 0x10
// 0089e59d  896e0c               mov dword ptr [esi + 0xc], ebp
// 0089e5a0  5d                   pop ebp
// 0089e5a1  897e08               mov dword ptr [esi + 8], edi
// 0089e5a4  5f                   pop edi
// 0089e5a5  5e                   pop esi
// 0089e5a6  5b                   pop ebx
// 0089e5a7  c20800               ret 8
// 0089e5aa  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0089e5ad  3bfd                 cmp edi, ebp
// 0089e5af  7f2c                 jg 0x89e5dd
// 0089e5b1  8b4608               mov eax, dword ptr [esi + 8]
// 0089e5b4  3bf8                 cmp edi, eax
// 0089e5b6  0f8eb3000000         jle 0x89e66f
// 0089e5bc  8bd7                 mov edx, edi
// 0089e5be  2bd0                 sub edx, eax
// 0089e5c0  c1e204               shl edx, 4
// 0089e5c3  52                   push edx
// 0089e5c4  c1e004               shl eax, 4
// 0089e5c7  03c1                 add eax, ecx
// 0089e5c9  53                   push ebx
// 0089e5ca  50                   push eax
// 0089e5cb  e814cdf6ff           call 0x80b2e4
// 0089e5d0  83c40c               add esp, 0xc
// 0089e5d3  5d                   pop ebp
// 0089e5d4  897e08               mov dword ptr [esi + 8], edi
// 0089e5d7  5f                   pop edi
// 0089e5d8  5e                   pop esi
// 0089e5d9  5b                   pop ebx
// 0089e5da  c20800               ret 8
// 0089e5dd  8b4610               mov eax, dword ptr [esi + 0x10]
// 0089e5e0  3bc3                 cmp eax, ebx
// 0089e5e2  7524                 jne 0x89e608
// 0089e5e4  8b4608               mov eax, dword ptr [esi + 8]
// 0089e5e7  99                   cdq 
// 0089e5e8  83e207               and edx, 7
// 0089e5eb  03c2                 add eax, edx
// 0089e5ed  c1f803               sar eax, 3
// 0089e5f0  83f804               cmp eax, 4
// 0089e5f3  7d07                 jge 0x89e5fc
// 0089e5f5  b804000000           mov eax, 4
// 0089e5fa  eb0c                 jmp 0x89e608
// 0089e5fc  3d00040000           cmp eax, 0x400
// 0089e601  7e05                 jle 0x89e608
// 0089e603  b800040000           mov eax, 0x400
// 0089e608  8d1c28               lea ebx, [eax + ebp]
// 0089e60b  3bfb                 cmp edi, ebx
// 0089e60d  7d06                 jge 0x89e615
// 0089e60f  895c2414             mov dword ptr [esp + 0x14], ebx
// 0089e613  eb06                 jmp 0x89e61b
// 0089e615  897c2414             mov dword ptr [esp + 0x14], edi
// 0089e619  8bdf                 mov ebx, edi
// 0089e61b  3bdd                 cmp ebx, ebp
// 0089e61d  7d05                 jge 0x89e624
// 0089e61f  e8e6bcf6ff           call 0x80a30a
// 0089e624  c1e304               shl ebx, 4
// 0089e627  53                   push ebx
// 0089e628  e813bdf6ff           call 0x80a340
// 0089e62d  8b4e04               mov ecx, dword ptr [esi + 4]
// 0089e630  8be8                 mov ebp, eax
// 0089e632  8b4608               mov eax, dword ptr [esi + 8]
// 0089e635  c1e004               shl eax, 4
// 0089e638  50                   push eax
// 0089e639  51                   push ecx
// 0089e63a  53                   push ebx
// 0089e63b  55                   push ebp
// 0089e63c  e87f4fb6ff           call 0x4035c0
// 0089e641  8b4608               mov eax, dword ptr [esi + 8]
// 0089e644  8bd7                 mov edx, edi
// 0089e646  2bd0                 sub edx, eax
// 0089e648  c1e204               shl edx, 4
// 0089e64b  52                   push edx
// 0089e64c  c1e004               shl eax, 4
// 0089e64f  03c5                 add eax, ebp
// 0089e651  6a00                 push 0
// 0089e653  50                   push eax
// 0089e654  e88bccf6ff           call 0x80b2e4
// 0089e659  8b4604               mov eax, dword ptr [esi + 4]
// 0089e65c  50                   push eax
// 0089e65d  e8a2bcf6ff           call 0x80a304
// 0089e662  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0089e666  83c424               add esp, 0x24
// 0089e669  896e04               mov dword ptr [esi + 4], ebp
// 0089e66c  894e0c               mov dword ptr [esi + 0xc], ecx
// 0089e66f  5d                   pop ebp
// 0089e670  897e08               mov dword ptr [esi + 8], edi
// 0089e673  5f                   pop edi
// 0089e674  5e                   pop esi
// 0089e675  5b                   pop ebx
// 0089e676  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?SetSize@?$CArray@UtagRECT@@AAU1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBarAnimation.cpp
