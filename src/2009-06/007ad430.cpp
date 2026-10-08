// roc 2009-06 007ad430  unit: XTPPaintThemes::CXTPOfficeTheme  size: 797 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ad430
//
// 007ad430  837c242400           cmp dword ptr [esp + 0x24], 0
// 007ad435  56                   push esi
// 007ad436  57                   push edi
// 007ad437  8bf1                 mov esi, ecx
// 007ad439  0f85b5000000         jne 0x7ad4f4
// 007ad43f  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 007ad446  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007ad44a  7542                 jne 0x7ad48e
// 007ad44c  8bcf                 mov ecx, edi
// 007ad44e  e85d4bf8ff           call 0x731fb0
// 007ad453  85c0                 test eax, eax
// 007ad455  7537                 jne 0x7ad48e
// 007ad457  6a28                 push 0x28
// 007ad459  8bce                 mov ecx, esi
// 007ad45b  e82053f7ff           call 0x722780
// 007ad460  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ad464  50                   push eax
// 007ad465  8b442420             mov eax, dword ptr [esp + 0x20]
// 007ad469  50                   push eax
// 007ad46a  51                   push ecx
// 007ad46b  8bcf                 mov ecx, edi
// 007ad46d  e84e4bf8ff           call 0x731fc0
// 007ad472  8b542420             mov edx, dword ptr [esp + 0x20]
// 007ad476  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ad47a  50                   push eax
// 007ad47b  8b442420             mov eax, dword ptr [esp + 0x20]
// 007ad47f  52                   push edx
// 007ad480  50                   push eax
// 007ad481  51                   push ecx
// 007ad482  8bcf                 mov ecx, edi
// 007ad484  e8a7c9f8ff           call 0x739e30
// 007ad489  5f                   pop edi
// 007ad48a  5e                   pop esi
// 007ad48b  c23000               ret 0x30
// 007ad48e  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 007ad495  742e                 je 0x7ad4c5
// 007ad497  8bcf                 mov ecx, edi
// 007ad499  e87266f8ff           call 0x733b10
// 007ad49e  85c0                 test eax, eax
// 007ad4a0  7523                 jne 0x7ad4c5
// 007ad4a2  8b4640               mov eax, dword ptr [esi + 0x40]
// 007ad4a5  83f8ff               cmp eax, -1
// 007ad4a8  7505                 jne 0x7ad4af
// 007ad4aa  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 007ad4ad  eb02                 jmp 0x7ad4b1
// 007ad4af  8bc8                 mov ecx, eax
// 007ad4b1  8b4634               mov eax, dword ptr [esi + 0x34]
// 007ad4b4  83f8ff               cmp eax, -1
// 007ad4b7  7503                 jne 0x7ad4bc
// 007ad4b9  8b4630               mov eax, dword ptr [esi + 0x30]
// 007ad4bc  51                   push ecx
// 007ad4bd  50                   push eax
// 007ad4be  8bcf                 mov ecx, edi
// 007ad4c0  e8cb9ff8ff           call 0x737490
// 007ad4c5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007ad4c9  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ad4cd  52                   push edx
// 007ad4ce  50                   push eax
// 007ad4cf  6a01                 push 1
// 007ad4d1  8bcf                 mov ecx, edi
// 007ad4d3  e8d8bbf8ff           call 0x7390b0
// 007ad4d8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007ad4dc  8b542418             mov edx, dword ptr [esp + 0x18]
// 007ad4e0  50                   push eax
// 007ad4e1  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ad4e5  51                   push ecx
// 007ad4e6  52                   push edx
// 007ad4e7  50                   push eax
// 007ad4e8  8bcf                 mov ecx, edi
// 007ad4ea  e8d1c8f8ff           call 0x739dc0
// 007ad4ef  5f                   pop edi
// 007ad4f0  5e                   pop esi
// 007ad4f1  c23000               ret 0x30
// 007ad4f4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007ad4f8  8b442428             mov eax, dword ptr [esp + 0x28]
// 007ad4fc  83f902               cmp ecx, 2
// 007ad4ff  0f85b4000000         jne 0x7ad5b9
// 007ad505  85c0                 test eax, eax
// 007ad507  0f85ac000000         jne 0x7ad5b9
// 007ad50d  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007ad511  8bcf                 mov ecx, edi
// 007ad513  e8984af8ff           call 0x731fb0
// 007ad518  85c0                 test eax, eax
// 007ad51a  7537                 jne 0x7ad553
// 007ad51c  6a28                 push 0x28
// 007ad51e  8bce                 mov ecx, esi
// 007ad520  e85b52f7ff           call 0x722780
// 007ad525  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007ad529  8b542418             mov edx, dword ptr [esp + 0x18]
// 007ad52d  50                   push eax
// 007ad52e  51                   push ecx
// 007ad52f  52                   push edx
// 007ad530  8bcf                 mov ecx, edi
// 007ad532  e8894af8ff           call 0x731fc0
// 007ad537  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007ad53b  8b542418             mov edx, dword ptr [esp + 0x18]
// 007ad53f  50                   push eax
// 007ad540  8b442424             mov eax, dword ptr [esp + 0x24]
// 007ad544  50                   push eax
// 007ad545  51                   push ecx
// 007ad546  52                   push edx
// 007ad547  8bcf                 mov ecx, edi
// 007ad549  e8e2c8f8ff           call 0x739e30
// 007ad54e  5f                   pop edi
// 007ad54f  5e                   pop esi
// 007ad550  c23000               ret 0x30
// 007ad553  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 007ad55a  742e                 je 0x7ad58a
// 007ad55c  8bcf                 mov ecx, edi
// 007ad55e  e8ad65f8ff           call 0x733b10
// 007ad563  85c0                 test eax, eax
// 007ad565  7523                 jne 0x7ad58a
// 007ad567  8b4640               mov eax, dword ptr [esi + 0x40]
// 007ad56a  83f8ff               cmp eax, -1
// 007ad56d  7505                 jne 0x7ad574
// 007ad56f  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 007ad572  eb02                 jmp 0x7ad576
// 007ad574  8bc8                 mov ecx, eax
// 007ad576  8b4634               mov eax, dword ptr [esi + 0x34]
// 007ad579  83f8ff               cmp eax, -1
// 007ad57c  7503                 jne 0x7ad581
// 007ad57e  8b4630               mov eax, dword ptr [esi + 0x30]
// 007ad581  51                   push ecx
// 007ad582  50                   push eax
// 007ad583  8bcf                 mov ecx, edi
// 007ad585  e8069ff8ff           call 0x737490
// 007ad58a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ad58e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ad592  50                   push eax
// 007ad593  51                   push ecx
// 007ad594  6a01                 push 1
// 007ad596  8bcf                 mov ecx, edi
// 007ad598  e813bbf8ff           call 0x7390b0
// 007ad59d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007ad5a1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007ad5a5  50                   push eax
// 007ad5a6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ad5aa  52                   push edx
// 007ad5ab  50                   push eax
// 007ad5ac  51                   push ecx
// 007ad5ad  8bcf                 mov ecx, edi
// 007ad5af  e80cc8f8ff           call 0x739dc0
// 007ad5b4  5f                   pop edi
// 007ad5b5  5e                   pop esi
// 007ad5b6  c23000               ret 0x30
// 007ad5b9  837c243400           cmp dword ptr [esp + 0x34], 0
// 007ad5be  0f8547010000         jne 0x7ad70b
// 007ad5c4  85c9                 test ecx, ecx
// 007ad5c6  0f8543010000         jne 0x7ad70f
// 007ad5cc  394c2424             cmp dword ptr [esp + 0x24], ecx
// 007ad5d0  7544                 jne 0x7ad616
// 007ad5d2  85c0                 test eax, eax
// 007ad5d4  7549                 jne 0x7ad61f
// 007ad5d6  398648010000         cmp dword ptr [esi + 0x148], eax
// 007ad5dc  8b742420             mov esi, dword ptr [esp + 0x20]
// 007ad5e0  8bce                 mov ecx, esi
// 007ad5e2  7407                 je 0x7ad5eb
// 007ad5e4  e877baf8ff           call 0x739060
// 007ad5e9  eb05                 jmp 0x7ad5f0
// 007ad5eb  e8d049f8ff           call 0x731fc0
// 007ad5f0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007ad5f4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ad5f8  52                   push edx
// 007ad5f9  8b542418             mov edx, dword ptr [esp + 0x18]
// 007ad5fd  51                   push ecx
// 007ad5fe  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007ad602  50                   push eax
// 007ad603  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ad607  52                   push edx
// 007ad608  50                   push eax
// 007ad609  51                   push ecx
// 007ad60a  8bce                 mov ecx, esi
// 007ad60c  e8afc7f8ff           call 0x739dc0
// 007ad611  5f                   pop edi
// 007ad612  5e                   pop esi
// 007ad613  c23000               ret 0x30
// 007ad616  85c0                 test eax, eax
// 007ad618  740e                 je 0x7ad628
// 007ad61a  e9bb000000           jmp 0x7ad6da
// 007ad61f  83f801               cmp eax, 1
// 007ad622  0f85a5000000         jne 0x7ad6cd
// 007ad628  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 007ad62f  8b742420             mov esi, dword ptr [esp + 0x20]
// 007ad633  746b                 je 0x7ad6a0
// 007ad635  8bce                 mov ecx, esi
// 007ad637  e854baf8ff           call 0x739090
// 007ad63c  8bc8                 mov ecx, eax
// 007ad63e  e8bd61f8ff           call 0x733800
// 007ad643  85c0                 test eax, eax
// 007ad645  7559                 jne 0x7ad6a0
// 007ad647  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007ad64b  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ad64f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007ad653  53                   push ebx
// 007ad654  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007ad658  55                   push ebp
// 007ad659  52                   push edx
// 007ad65a  50                   push eax
// 007ad65b  8bce                 mov ecx, esi
// 007ad65d  47                   inc edi
// 007ad65e  43                   inc ebx
// 007ad65f  e82cbaf8ff           call 0x739090
// 007ad664  50                   push eax
// 007ad665  53                   push ebx
// 007ad666  57                   push edi
// 007ad667  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007ad66b  57                   push edi
// 007ad66c  8bce                 mov ecx, esi
// 007ad66e  e84dc7f8ff           call 0x739dc0
// 007ad673  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007ad677  8b542420             mov edx, dword ptr [esp + 0x20]
// 007ad67b  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007ad67f  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007ad683  51                   push ecx
// 007ad684  52                   push edx
// 007ad685  8bce                 mov ecx, esi
// 007ad687  4b                   dec ebx
// 007ad688  4d                   dec ebp
// 007ad689  e82264f8ff           call 0x733ab0
// 007ad68e  50                   push eax
// 007ad68f  55                   push ebp
// 007ad690  53                   push ebx
// 007ad691  57                   push edi
// 007ad692  8bce                 mov ecx, esi
// 007ad694  e827c7f8ff           call 0x739dc0
// 007ad699  5d                   pop ebp
// 007ad69a  5b                   pop ebx
// 007ad69b  5f                   pop edi
// 007ad69c  5e                   pop esi
// 007ad69d  c23000               ret 0x30
// 007ad6a0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ad6a4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ad6a8  50                   push eax
// 007ad6a9  51                   push ecx
// 007ad6aa  8bce                 mov ecx, esi
// 007ad6ac  e8ff63f8ff           call 0x733ab0
// 007ad6b1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007ad6b5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007ad6b9  50                   push eax
// 007ad6ba  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ad6be  52                   push edx
// 007ad6bf  50                   push eax
// 007ad6c0  51                   push ecx
// 007ad6c1  8bce                 mov ecx, esi
// 007ad6c3  e8f8c6f8ff           call 0x739dc0
// 007ad6c8  5f                   pop edi
// 007ad6c9  5e                   pop esi
// 007ad6ca  c23000               ret 0x30
// 007ad6cd  50                   push eax
// 007ad6ce  e86d1df7ff           call 0x71f440
// 007ad6d3  83c404               add esp, 4
// 007ad6d6  85c0                 test eax, eax
// 007ad6d8  746e                 je 0x7ad748
// 007ad6da  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007ad6de  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ad6e2  8b742420             mov esi, dword ptr [esp + 0x20]
// 007ad6e6  52                   push edx
// 007ad6e7  50                   push eax
// 007ad6e8  8bce                 mov ecx, esi
// 007ad6ea  e80164f8ff           call 0x733af0
// 007ad6ef  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007ad6f3  8b542418             mov edx, dword ptr [esp + 0x18]
// 007ad6f7  50                   push eax
// 007ad6f8  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ad6fc  51                   push ecx
// 007ad6fd  52                   push edx
// 007ad6fe  50                   push eax
// 007ad6ff  8bce                 mov ecx, esi
// 007ad701  e8bac6f8ff           call 0x739dc0
// 007ad706  5f                   pop edi
// 007ad707  5e                   pop esi
// 007ad708  c23000               ret 0x30
// 007ad70b  85c9                 test ecx, ecx
// 007ad70d  740d                 je 0x7ad71c
// 007ad70f  8b742420             mov esi, dword ptr [esp + 0x20]
// 007ad713  8bce                 mov ecx, esi
// 007ad715  e8b663f8ff           call 0x733ad0
// 007ad71a  eb0b                 jmp 0x7ad727
// 007ad71c  8b742420             mov esi, dword ptr [esp + 0x20]
// 007ad720  8bce                 mov ecx, esi
// 007ad722  e89948f8ff           call 0x731fc0
// 007ad727  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007ad72b  8b542418             mov edx, dword ptr [esp + 0x18]
// 007ad72f  51                   push ecx
// 007ad730  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007ad734  52                   push edx
// 007ad735  8b542414             mov edx, dword ptr [esp + 0x14]
// 007ad739  50                   push eax
// 007ad73a  8b442420             mov eax, dword ptr [esp + 0x20]
// 007ad73e  50                   push eax
// 007ad73f  51                   push ecx
// 007ad740  52                   push edx
// 007ad741  8bce                 mov ecx, esi
// 007ad743  e878c6f8ff           call 0x739dc0
// 007ad748  5f                   pop edi
// 007ad749  5e                   pop esi
// 007ad74a  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawImage@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@VCPoint@@VCSize@@PAVCXTPImageManagerIcon@@HHHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
