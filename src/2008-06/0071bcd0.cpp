// roc 2008-06 0071bcd0  unit: CXTPDockBar  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071bcd0
//
// 0071bcd0  83ec20               sub esp, 0x20
// 0071bcd3  894c2404             mov dword ptr [esp + 4], ecx
// 0071bcd7  e82e030a00           call 0x7bc00a
// 0071bcdc  890424               mov dword ptr [esp], eax
// 0071bcdf  a900000010           test eax, 0x10000000
// 0071bce4  0f8440010000         je 0x71be2a
// 0071bcea  53                   push ebx
// 0071bceb  55                   push ebp
// 0071bcec  56                   push esi
// 0071bced  8b742434             mov esi, dword ptr [esp + 0x34]
// 0071bcf1  57                   push edi
// 0071bcf2  8d6e04               lea ebp, [esi + 4]
// 0071bcf5  55                   push ebp
// 0071bcf6  8d442424             lea eax, [esp + 0x24]
// 0071bcfa  50                   push eax
// 0071bcfb  ff15702d8000         call dword ptr [0x802d70]
// 0071bd01  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0071bd05  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0071bd09  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 0071bd0d  2b5c2424             sub ebx, dword ptr [esp + 0x24]
// 0071bd11  8b542414             mov edx, dword ptr [esp + 0x14]
// 0071bd15  8b4254               mov eax, dword ptr [edx + 0x54]
// 0071bd18  33c9                 xor ecx, ecx
// 0071bd1a  394e1c               cmp dword ptr [esi + 0x1c], ecx
// 0071bd1d  0f95c1               setne cl
// 0071bd20  a804                 test al, 4
// 0071bd22  7409                 je 0x71bd2d
// 0071bd24  a801                 test al, 1
// 0071bd26  7405                 je 0x71bd2d
// 0071bd28  83c906               or ecx, 6
// 0071bd2b  eb12                 jmp 0x71bd3f
// 0071bd2d  f744241000a00000     test dword ptr [esp + 0x10], 0xa000
// 0071bd35  7405                 je 0x71bd3c
// 0071bd37  83c90a               or ecx, 0xa
// 0071bd3a  eb03                 jmp 0x71bd3f
// 0071bd3c  83c910               or ecx, 0x10
// 0071bd3f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0071bd43  2500a00000           and eax, 0xa000
// 0071bd48  89442438             mov dword ptr [esp + 0x38], eax
// 0071bd4c  8bc7                 mov eax, edi
// 0071bd4e  7502                 jne 0x71bd52
// 0071bd50  8bc3                 mov eax, ebx
// 0071bd52  56                   push esi
// 0071bd53  51                   push ecx
// 0071bd54  50                   push eax
// 0071bd55  8d4c2424             lea ecx, [esp + 0x24]
// 0071bd59  51                   push ecx
// 0071bd5a  8bca                 mov ecx, edx
// 0071bd5c  e8affdffff           call 0x71bb10
// 0071bd61  8b442418             mov eax, dword ptr [esp + 0x18]
// 0071bd65  3bc7                 cmp eax, edi
// 0071bd67  7c02                 jl 0x71bd6b
// 0071bd69  8bc7                 mov eax, edi
// 0071bd6b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0071bd6f  3bcb                 cmp ecx, ebx
// 0071bd71  7c02                 jl 0x71bd75
// 0071bd73  8bcb                 mov ecx, ebx
// 0071bd75  837c243800           cmp dword ptr [esp + 0x38], 0
// 0071bd7a  7437                 je 0x71bdb3
// 0071bd7c  8b5614               mov edx, dword ptr [esi + 0x14]
// 0071bd7f  014e18               add dword ptr [esi + 0x18], ecx
// 0071bd82  3bd0                 cmp edx, eax
// 0071bd84  7f02                 jg 0x71bd88
// 0071bd86  8bd0                 mov edx, eax
// 0071bd88  895614               mov dword ptr [esi + 0x14], edx
// 0071bd8b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071bd8f  f7c200200000         test edx, 0x2000
// 0071bd95  7405                 je 0x71bd9c
// 0071bd97  014e08               add dword ptr [esi + 8], ecx
// 0071bd9a  eb4c                 jmp 0x71bde8
// 0071bd9c  f7c200800000         test edx, 0x8000
// 0071bda2  7444                 je 0x71bde8
// 0071bda4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0071bda8  2bd1                 sub edx, ecx
// 0071bdaa  294e10               sub dword ptr [esi + 0x10], ecx
// 0071bdad  89542424             mov dword ptr [esp + 0x24], edx
// 0071bdb1  eb35                 jmp 0x71bde8
// 0071bdb3  8b5618               mov edx, dword ptr [esi + 0x18]
// 0071bdb6  014614               add dword ptr [esi + 0x14], eax
// 0071bdb9  3bd1                 cmp edx, ecx
// 0071bdbb  7f02                 jg 0x71bdbf
// 0071bdbd  8bd1                 mov edx, ecx
// 0071bdbf  895618               mov dword ptr [esi + 0x18], edx
// 0071bdc2  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071bdc6  f7c200100000         test edx, 0x1000
// 0071bdcc  7405                 je 0x71bdd3
// 0071bdce  014500               add dword ptr [ebp], eax
// 0071bdd1  eb15                 jmp 0x71bde8
// 0071bdd3  f7c200400000         test edx, 0x4000
// 0071bdd9  740d                 je 0x71bde8
// 0071bddb  8b542428             mov edx, dword ptr [esp + 0x28]
// 0071bddf  2bd0                 sub edx, eax
// 0071bde1  29460c               sub dword ptr [esi + 0xc], eax
// 0071bde4  89542420             mov dword ptr [esp + 0x20], edx
// 0071bde8  8b542420             mov edx, dword ptr [esp + 0x20]
// 0071bdec  03d0                 add edx, eax
// 0071bdee  8b442424             mov eax, dword ptr [esp + 0x24]
// 0071bdf2  03c1                 add eax, ecx
// 0071bdf4  833e00               cmp dword ptr [esi], 0
// 0071bdf7  89542428             mov dword ptr [esp + 0x28], edx
// 0071bdfb  8944242c             mov dword ptr [esp + 0x2c], eax
// 0071bdff  7413                 je 0x71be14
// 0071be01  8b542414             mov edx, dword ptr [esp + 0x14]
// 0071be05  8b4220               mov eax, dword ptr [edx + 0x20]
// 0071be08  8d4c2420             lea ecx, [esp + 0x20]
// 0071be0c  51                   push ecx
// 0071be0d  50                   push eax
// 0071be0e  56                   push esi
// 0071be0f  e864030a00           call 0x7bc178
// 0071be14  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071be18  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0071be1b  6a00                 push 0
// 0071be1d  6a00                 push 0
// 0071be1f  52                   push edx
// 0071be20  ff15182e8000         call dword ptr [0x802e18]
// 0071be26  5f                   pop edi
// 0071be27  5e                   pop esi
// 0071be28  5d                   pop ebp
// 0071be29  5b                   pop ebx
// 0071be2a  33c0                 xor eax, eax
// 0071be2c  83c420               add esp, 0x20
// 0071be2f  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDockBar.cpp (function ?OnSizeParent@CXTPDockBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockBar.cpp
