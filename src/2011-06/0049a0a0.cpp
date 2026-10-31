// roc 2011-06 0049a0a0  unit: VerbBinderJob  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049a0a0
//
// 0049a0a0  6aff                 push -1
// 0049a0a2  64a100000000         mov eax, dword ptr fs:[0]
// 0049a0a8  68d96b9d00           push 0x9d6bd9
// 0049a0ad  50                   push eax
// 0049a0ae  64892500000000       mov dword ptr fs:[0], esp
// 0049a0b5  83ec0c               sub esp, 0xc
// 0049a0b8  53                   push ebx
// 0049a0b9  55                   push ebp
// 0049a0ba  56                   push esi
// 0049a0bb  8bf1                 mov esi, ecx
// 0049a0bd  8b4604               mov eax, dword ptr [esi + 4]
// 0049a0c0  33ed                 xor ebp, ebp
// 0049a0c2  57                   push edi
// 0049a0c3  896e10               mov dword ptr [esi + 0x10], ebp
// 0049a0c6  3bc5                 cmp eax, ebp
// 0049a0c8  740c                 je 0x49a0d6
// 0049a0ca  50                   push eax
// 0049a0cb  e834023700           call 0x80a304
// 0049a0d0  83c404               add esp, 4
// 0049a0d3  896e04               mov dword ptr [esi + 4], ebp
// 0049a0d6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0049a0da  b9e4040000           mov ecx, 0x4e4
// 0049a0df  33c0                 xor eax, eax
// 0049a0e1  66894e02             mov word ptr [esi + 2], cx
// 0049a0e5  8d5e08               lea ebx, [esi + 8]
// 0049a0e8  52                   push edx
// 0049a0e9  8d4c2414             lea ecx, [esp + 0x14]
// 0049a0ed  668906               mov word ptr [esi], ax
// 0049a0f0  892b                 mov dword ptr [ebx], ebp
// 0049a0f2  896e0c               mov dword ptr [esi + 0xc], ebp
// 0049a0f5  ff15e42da400         call dword ptr [0xa42de4]
// 0049a0fb  8d442414             lea eax, [esp + 0x14]
// 0049a0ff  50                   push eax
// 0049a100  8d4c2414             lea ecx, [esp + 0x14]
// 0049a104  896c2428             mov dword ptr [esp + 0x28], ebp
// 0049a108  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0049a10c  896c2418             mov dword ptr [esp + 0x18], ebp
// 0049a110  ff152c23a400         call dword ptr [0xa4232c]
// 0049a116  50                   push eax
// 0049a117  e8de9d4600           call 0x903efa
// 0049a11c  8bf8                 mov edi, eax
// 0049a11e  3bfd                 cmp edi, ebp
// 0049a120  0f8487000000         je 0x49a1ad
// 0049a126  57                   push edi
// 0049a127  e814023700           call 0x80a340
// 0049a12c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049a130  83c404               add esp, 4
// 0049a133  50                   push eax
// 0049a134  57                   push edi
// 0049a135  51                   push ecx
// 0049a136  8d4c241c             lea ecx, [esp + 0x1c]
// 0049a13a  894604               mov dword ptr [esi + 4], eax
// 0049a13d  ff152c23a400         call dword ptr [0xa4232c]
// 0049a143  50                   push eax
// 0049a144  e8ab9d4600           call 0x903ef4
// 0049a149  85c0                 test eax, eax
// 0049a14b  7460                 je 0x49a1ad
// 0049a14d  8d54242c             lea edx, [esp + 0x2c]
// 0049a151  52                   push edx
// 0049a152  8d4610               lea eax, [esi + 0x10]
// 0049a155  50                   push eax
// 0049a156  8b4604               mov eax, dword ptr [esi + 4]
// 0049a159  684858a600           push 0xa65848
// 0049a15e  50                   push eax
// 0049a15f  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0049a163  e8869d4600           call 0x903eee
// 0049a168  85c0                 test eax, eax
// 0049a16a  7441                 je 0x49a1ad
// 0049a16c  8b5604               mov edx, dword ptr [esi + 4]
// 0049a16f  8d4c242c             lea ecx, [esp + 0x2c]
// 0049a173  51                   push ecx
// 0049a174  53                   push ebx
// 0049a175  68485da700           push 0xa75d48
// 0049a17a  52                   push edx
// 0049a17b  e86e9d4600           call 0x903eee
// 0049a180  85c0                 test eax, eax
// 0049a182  741f                 je 0x49a1a3
// 0049a184  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0049a188  83f804               cmp eax, 4
// 0049a18b  7216                 jb 0x49a1a3
// 0049a18d  8b1b                 mov ebx, dword ptr [ebx]
// 0049a18f  c1e802               shr eax, 2
// 0049a192  89460c               mov dword ptr [esi + 0xc], eax
// 0049a195  668b03               mov ax, word ptr [ebx]
// 0049a198  668906               mov word ptr [esi], ax
// 0049a19b  668b4b02             mov cx, word ptr [ebx + 2]
// 0049a19f  66894e02             mov word ptr [esi + 2], cx
// 0049a1a3  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0049a1ab  eb13                 jmp 0x49a1c0
// 0049a1ad  8b4604               mov eax, dword ptr [esi + 4]
// 0049a1b0  3bc5                 cmp eax, ebp
// 0049a1b2  740c                 je 0x49a1c0
// 0049a1b4  50                   push eax
// 0049a1b5  e84a013700           call 0x80a304
// 0049a1ba  83c404               add esp, 4
// 0049a1bd  896e04               mov dword ptr [esi + 4], ebp
// 0049a1c0  8d4c2410             lea ecx, [esp + 0x10]
// 0049a1c4  ff15082ea400         call dword ptr [0xa42e08]
// 0049a1ca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0049a1ce  8b442418             mov eax, dword ptr [esp + 0x18]
// 0049a1d2  5f                   pop edi
// 0049a1d3  5e                   pop esi
// 0049a1d4  5d                   pop ebp
// 0049a1d5  5b                   pop ebx
// 0049a1d6  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a1dd  83c418               add esp, 0x18
// 0049a1e0  c20400               ret 4
// copied from an identical function in another client (function ?Create@CFileVersionInfo@@QAEHABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_819913a7344f1e19.cpp