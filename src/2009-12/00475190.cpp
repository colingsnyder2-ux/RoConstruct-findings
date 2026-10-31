// roc 2009-12 00475190  unit: DxUserInput  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00475190
//
// 00475190  6aff                 push -1
// 00475192  64a100000000         mov eax, dword ptr fs:[0]
// 00475198  6889dc9200           push 0x92dc89
// 0047519d  50                   push eax
// 0047519e  64892500000000       mov dword ptr fs:[0], esp
// 004751a5  83ec0c               sub esp, 0xc
// 004751a8  53                   push ebx
// 004751a9  55                   push ebp
// 004751aa  56                   push esi
// 004751ab  8bf1                 mov esi, ecx
// 004751ad  8b4604               mov eax, dword ptr [esi + 4]
// 004751b0  33ed                 xor ebp, ebp
// 004751b2  57                   push edi
// 004751b3  896e10               mov dword ptr [esi + 0x10], ebp
// 004751b6  3bc5                 cmp eax, ebp
// 004751b8  740c                 je 0x4751c6
// 004751ba  50                   push eax
// 004751bb  e846e93700           call 0x7f3b06
// 004751c0  83c404               add esp, 4
// 004751c3  896e04               mov dword ptr [esi + 4], ebp
// 004751c6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004751ca  b9e4040000           mov ecx, 0x4e4
// 004751cf  33c0                 xor eax, eax
// 004751d1  66894e02             mov word ptr [esi + 2], cx
// 004751d5  8d5e08               lea ebx, [esi + 8]
// 004751d8  52                   push edx
// 004751d9  8d4c2414             lea ecx, [esp + 0x14]
// 004751dd  668906               mov word ptr [esi], ax
// 004751e0  892b                 mov dword ptr [ebx], ebp
// 004751e2  896e0c               mov dword ptr [esi + 0xc], ebp
// 004751e5  ff1594de9800         call dword ptr [0x98de94]
// 004751eb  8d442414             lea eax, [esp + 0x14]
// 004751ef  50                   push eax
// 004751f0  8d4c2414             lea ecx, [esp + 0x14]
// 004751f4  896c2428             mov dword ptr [esp + 0x28], ebp
// 004751f8  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004751fc  896c2418             mov dword ptr [esp + 0x18], ebp
// 00475200  ff1508d39800         call dword ptr [0x98d308]
// 00475206  50                   push eax
// 00475207  e89e0c4800           call 0x8f5eaa
// 0047520c  8bf8                 mov edi, eax
// 0047520e  3bfd                 cmp edi, ebp
// 00475210  0f8487000000         je 0x47529d
// 00475216  57                   push edi
// 00475217  e826e93700           call 0x7f3b42
// 0047521c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00475220  83c404               add esp, 4
// 00475223  50                   push eax
// 00475224  57                   push edi
// 00475225  51                   push ecx
// 00475226  8d4c241c             lea ecx, [esp + 0x1c]
// 0047522a  894604               mov dword ptr [esi + 4], eax
// 0047522d  ff1508d39800         call dword ptr [0x98d308]
// 00475233  50                   push eax
// 00475234  e86b0c4800           call 0x8f5ea4
// 00475239  85c0                 test eax, eax
// 0047523b  7460                 je 0x47529d
// 0047523d  8d54242c             lea edx, [esp + 0x2c]
// 00475241  52                   push edx
// 00475242  8d4610               lea eax, [esi + 0x10]
// 00475245  50                   push eax
// 00475246  8b4604               mov eax, dword ptr [esi + 4]
// 00475249  682c399a00           push 0x9a392c
// 0047524e  50                   push eax
// 0047524f  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00475253  e8460c4800           call 0x8f5e9e
// 00475258  85c0                 test eax, eax
// 0047525a  7441                 je 0x47529d
// 0047525c  8b5604               mov edx, dword ptr [esi + 4]
// 0047525f  8d4c242c             lea ecx, [esp + 0x2c]
// 00475263  51                   push ecx
// 00475264  53                   push ebx
// 00475265  6830169b00           push 0x9b1630
// 0047526a  52                   push edx
// 0047526b  e82e0c4800           call 0x8f5e9e
// 00475270  85c0                 test eax, eax
// 00475272  741f                 je 0x475293
// 00475274  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00475278  83f804               cmp eax, 4
// 0047527b  7216                 jb 0x475293
// 0047527d  8b1b                 mov ebx, dword ptr [ebx]
// 0047527f  c1e802               shr eax, 2
// 00475282  89460c               mov dword ptr [esi + 0xc], eax
// 00475285  668b03               mov ax, word ptr [ebx]
// 00475288  668906               mov word ptr [esi], ax
// 0047528b  668b4b02             mov cx, word ptr [ebx + 2]
// 0047528f  66894e02             mov word ptr [esi + 2], cx
// 00475293  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0047529b  eb13                 jmp 0x4752b0
// 0047529d  8b4604               mov eax, dword ptr [esi + 4]
// 004752a0  3bc5                 cmp eax, ebp
// 004752a2  740c                 je 0x4752b0
// 004752a4  50                   push eax
// 004752a5  e85ce83700           call 0x7f3b06
// 004752aa  83c404               add esp, 4
// 004752ad  896e04               mov dword ptr [esi + 4], ebp
// 004752b0  8d4c2410             lea ecx, [esp + 0x10]
// 004752b4  ff15c0de9800         call dword ptr [0x98dec0]
// 004752ba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004752be  8b442418             mov eax, dword ptr [esp + 0x18]
// 004752c2  5f                   pop edi
// 004752c3  5e                   pop esi
// 004752c4  5d                   pop ebp
// 004752c5  5b                   pop ebx
// 004752c6  64890d00000000       mov dword ptr fs:[0], ecx
// 004752cd  83c418               add esp, 0x18
// 004752d0  c20400               ret 4
// copied from an identical function in another client (function ?Create@CFileVersionInfo@@QAEHABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_819913a7344f1e19.cpp