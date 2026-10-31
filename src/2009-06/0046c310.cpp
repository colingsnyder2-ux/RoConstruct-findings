// roc 2009-06 0046c310  unit: DxUserInput  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046c310
//
// 0046c310  6aff                 push -1
// 0046c312  64a100000000         mov eax, dword ptr fs:[0]
// 0046c318  6899338500           push 0x853399
// 0046c31d  50                   push eax
// 0046c31e  64892500000000       mov dword ptr fs:[0], esp
// 0046c325  83ec0c               sub esp, 0xc
// 0046c328  53                   push ebx
// 0046c329  55                   push ebp
// 0046c32a  56                   push esi
// 0046c32b  8bf1                 mov esi, ecx
// 0046c32d  8b4604               mov eax, dword ptr [esi + 4]
// 0046c330  33ed                 xor ebp, ebp
// 0046c332  57                   push edi
// 0046c333  896e10               mov dword ptr [esi + 0x10], ebp
// 0046c336  3bc5                 cmp eax, ebp
// 0046c338  740c                 je 0x46c346
// 0046c33a  50                   push eax
// 0046c33b  e89ec92a00           call 0x718cde
// 0046c340  83c404               add esp, 4
// 0046c343  896e04               mov dword ptr [esi + 4], ebp
// 0046c346  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0046c34a  b9e4040000           mov ecx, 0x4e4
// 0046c34f  33c0                 xor eax, eax
// 0046c351  66894e02             mov word ptr [esi + 2], cx
// 0046c355  8d5e08               lea ebx, [esi + 8]
// 0046c358  52                   push edx
// 0046c359  8d4c2414             lea ecx, [esp + 0x14]
// 0046c35d  668906               mov word ptr [esi], ax
// 0046c360  892b                 mov dword ptr [ebx], ebp
// 0046c362  896e0c               mov dword ptr [esi + 0xc], ebp
// 0046c365  ff15e4fc8900         call dword ptr [0x89fce4]
// 0046c36b  8d442414             lea eax, [esp + 0x14]
// 0046c36f  50                   push eax
// 0046c370  8d4c2414             lea ecx, [esp + 0x14]
// 0046c374  896c2428             mov dword ptr [esp + 0x28], ebp
// 0046c378  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0046c37c  896c2418             mov dword ptr [esp + 0x18], ebp
// 0046c380  ff1508028a00         call dword ptr [0x8a0208]
// 0046c386  50                   push eax
// 0046c387  e83eee3a00           call 0x81b1ca
// 0046c38c  8bf8                 mov edi, eax
// 0046c38e  3bfd                 cmp edi, ebp
// 0046c390  0f8487000000         je 0x46c41d
// 0046c396  57                   push edi
// 0046c397  e87ec92a00           call 0x718d1a
// 0046c39c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0046c3a0  83c404               add esp, 4
// 0046c3a3  50                   push eax
// 0046c3a4  57                   push edi
// 0046c3a5  51                   push ecx
// 0046c3a6  8d4c241c             lea ecx, [esp + 0x1c]
// 0046c3aa  894604               mov dword ptr [esi + 4], eax
// 0046c3ad  ff1508028a00         call dword ptr [0x8a0208]
// 0046c3b3  50                   push eax
// 0046c3b4  e80bee3a00           call 0x81b1c4
// 0046c3b9  85c0                 test eax, eax
// 0046c3bb  7460                 je 0x46c41d
// 0046c3bd  8d54242c             lea edx, [esp + 0x2c]
// 0046c3c1  52                   push edx
// 0046c3c2  8d4610               lea eax, [esi + 0x10]
// 0046c3c5  50                   push eax
// 0046c3c6  8b4604               mov eax, dword ptr [esi + 4]
// 0046c3c9  68480c8b00           push 0x8b0c48
// 0046c3ce  50                   push eax
// 0046c3cf  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0046c3d3  e8e6ed3a00           call 0x81b1be
// 0046c3d8  85c0                 test eax, eax
// 0046c3da  7441                 je 0x46c41d
// 0046c3dc  8b5604               mov edx, dword ptr [esi + 4]
// 0046c3df  8d4c242c             lea ecx, [esp + 0x2c]
// 0046c3e3  51                   push ecx
// 0046c3e4  53                   push ebx
// 0046c3e5  6850d08b00           push 0x8bd050
// 0046c3ea  52                   push edx
// 0046c3eb  e8ceed3a00           call 0x81b1be
// 0046c3f0  85c0                 test eax, eax
// 0046c3f2  741f                 je 0x46c413
// 0046c3f4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0046c3f8  83f804               cmp eax, 4
// 0046c3fb  7216                 jb 0x46c413
// 0046c3fd  8b1b                 mov ebx, dword ptr [ebx]
// 0046c3ff  c1e802               shr eax, 2
// 0046c402  89460c               mov dword ptr [esi + 0xc], eax
// 0046c405  668b03               mov ax, word ptr [ebx]
// 0046c408  668906               mov word ptr [esi], ax
// 0046c40b  668b4b02             mov cx, word ptr [ebx + 2]
// 0046c40f  66894e02             mov word ptr [esi + 2], cx
// 0046c413  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0046c41b  eb13                 jmp 0x46c430
// 0046c41d  8b4604               mov eax, dword ptr [esi + 4]
// 0046c420  3bc5                 cmp eax, ebp
// 0046c422  740c                 je 0x46c430
// 0046c424  50                   push eax
// 0046c425  e8b4c82a00           call 0x718cde
// 0046c42a  83c404               add esp, 4
// 0046c42d  896e04               mov dword ptr [esi + 4], ebp
// 0046c430  8d4c2410             lea ecx, [esp + 0x10]
// 0046c434  ff1510fd8900         call dword ptr [0x89fd10]
// 0046c43a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046c43e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0046c442  5f                   pop edi
// 0046c443  5e                   pop esi
// 0046c444  5d                   pop ebp
// 0046c445  5b                   pop ebx
// 0046c446  64890d00000000       mov dword ptr fs:[0], ecx
// 0046c44d  83c418               add esp, 0x18
// 0046c450  c20400               ret 4
// copied from an identical function in another client (function ?Create@CFileVersionInfo@@QAEHABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_819913a7344f1e19.cpp