// roc 2009-12 0089fc60  unit: CXTPReportPaintManager  size: 1002 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089fc60
//
// 0089fc60  83ec34               sub esp, 0x34
// 0089fc63  837c244400           cmp dword ptr [esp + 0x44], 0
// 0089fc68  57                   push edi
// 0089fc69  8bf9                 mov edi, ecx
// 0089fc6b  7412                 je 0x89fc7f
// 0089fc6d  8b9740020000         mov edx, dword ptr [edi + 0x240]
// 0089fc73  89542408             mov dword ptr [esp + 8], edx
// 0089fc77  8d87e4010000         lea eax, [edi + 0x1e4]
// 0089fc7d  eb14                 jmp 0x89fc93
// 0089fc7f  8b8744020000         mov eax, dword ptr [edi + 0x244]
// 0089fc85  89442408             mov dword ptr [esp + 8], eax
// 0089fc89  8b542408             mov edx, dword ptr [esp + 8]
// 0089fc8d  8d87f0010000         lea eax, [edi + 0x1f0]
// 0089fc93  8b4808               mov ecx, dword ptr [eax + 8]
// 0089fc96  83f9ff               cmp ecx, -1
// 0089fc99  7503                 jne 0x89fc9e
// 0089fc9b  8b4804               mov ecx, dword ptr [eax + 4]
// 0089fc9e  894c2404             mov dword ptr [esp + 4], ecx
// 0089fca2  85d2                 test edx, edx
// 0089fca4  0f8499030000         je 0x8a0043
// 0089fcaa  53                   push ebx
// 0089fcab  55                   push ebp
// 0089fcac  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0089fcb0  56                   push esi
// 0089fcb1  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0089fcb5  f6c208               test dl, 8
// 0089fcb8  0f84b1020000         je 0x89ff6f
// 0089fcbe  8b87bc020000         mov eax, dword ptr [edi + 0x2bc]
// 0089fcc4  85c0                 test eax, eax
// 0089fcc6  0f85ab000000         jne 0x89fd77
// 0089fccc  8b4778               mov eax, dword ptr [edi + 0x78]
// 0089fccf  83f8ff               cmp eax, -1
// 0089fcd2  7503                 jne 0x89fcd7
// 0089fcd4  8b4774               mov eax, dword ptr [edi + 0x74]
// 0089fcd7  50                   push eax
// 0089fcd8  56                   push esi
// 0089fcd9  8bcd                 mov ecx, ebp
// 0089fcdb  e81e49f5ff           call 0x7f45fe
// 0089fce0  8b87d8000000         mov eax, dword ptr [edi + 0xd8]
// 0089fce6  83f8ff               cmp eax, -1
// 0089fce9  7506                 jne 0x89fcf1
// 0089fceb  8b87d4000000         mov eax, dword ptr [edi + 0xd4]
// 0089fcf1  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 0089fcf4  83f9ff               cmp ecx, -1
// 0089fcf7  7503                 jne 0x89fcfc
// 0089fcf9  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 0089fcfc  dd0578219b00         fld qword ptr [0x9b2178]
// 0089fd02  8b1e                 mov ebx, dword ptr [esi]
// 0089fd04  83ec08               sub esp, 8
// 0089fd07  dd1c24               fstp qword ptr [esp]
// 0089fd0a  50                   push eax
// 0089fd0b  51                   push ecx
// 0089fd0c  8bcf                 mov ecx, edi
// 0089fd0e  e8bda6ffff           call 0x89a3d0
// 0089fd13  8b5608               mov edx, dword ptr [esi + 8]
// 0089fd16  50                   push eax
// 0089fd17  8b460c               mov eax, dword ptr [esi + 0xc]
// 0089fd1a  2bd3                 sub edx, ebx
// 0089fd1c  52                   push edx
// 0089fd1d  83e802               sub eax, 2
// 0089fd20  50                   push eax
// 0089fd21  53                   push ebx
// 0089fd22  55                   push ebp
// 0089fd23  8bcf                 mov ecx, edi
// 0089fd25  e816aaffff           call 0x89a740
// 0089fd2a  8b87d8000000         mov eax, dword ptr [edi + 0xd8]
// 0089fd30  83f8ff               cmp eax, -1
// 0089fd33  7506                 jne 0x89fd3b
// 0089fd35  8b87d4000000         mov eax, dword ptr [edi + 0xd4]
// 0089fd3b  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 0089fd3e  83f9ff               cmp ecx, -1
// 0089fd41  7503                 jne 0x89fd46
// 0089fd43  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 0089fd46  dd05204b9b00         fld qword ptr [0x9b4b20]
// 0089fd4c  8b1e                 mov ebx, dword ptr [esi]
// 0089fd4e  83ec08               sub esp, 8
// 0089fd51  dd1c24               fstp qword ptr [esp]
// 0089fd54  50                   push eax
// 0089fd55  51                   push ecx
// 0089fd56  8bcf                 mov ecx, edi
// 0089fd58  e873a6ffff           call 0x89a3d0
// 0089fd5d  8b4e08               mov ecx, dword ptr [esi + 8]
// 0089fd60  8b560c               mov edx, dword ptr [esi + 0xc]
// 0089fd63  50                   push eax
// 0089fd64  2bcb                 sub ecx, ebx
// 0089fd66  51                   push ecx
// 0089fd67  4a                   dec edx
// 0089fd68  52                   push edx
// 0089fd69  53                   push ebx
// 0089fd6a  55                   push ebp
// 0089fd6b  8bcf                 mov ecx, edi
// 0089fd6d  e8cea9ffff           call 0x89a740
// 0089fd72  e90a020000           jmp 0x89ff81
// 0089fd77  83f803               cmp eax, 3
// 0089fd7a  7565                 jne 0x89fde1
// 0089fd7c  8b8f6c010000         mov ecx, dword ptr [edi + 0x16c]
// 0089fd82  83f9ff               cmp ecx, -1
// 0089fd85  7506                 jne 0x89fd8d
// 0089fd87  8b8f68010000         mov ecx, dword ptr [edi + 0x168]
// 0089fd8d  8b8760010000         mov eax, dword ptr [edi + 0x160]
// 0089fd93  83f8ff               cmp eax, -1
// 0089fd96  7506                 jne 0x89fd9e
// 0089fd98  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 0089fd9e  6a00                 push 0
// 0089fda0  51                   push ecx
// 0089fda1  50                   push eax
// 0089fda2  56                   push esi
// 0089fda3  55                   push ebp
// 0089fda4  e8f7d4faff           call 0x84d2a0
// 0089fda9  8bc8                 mov ecx, eax
// 0089fdab  e820d5faff           call 0x84d2d0
// 0089fdb0  8b87bc010000         mov eax, dword ptr [edi + 0x1bc]
// 0089fdb6  83f8ff               cmp eax, -1
// 0089fdb9  7508                 jne 0x89fdc3
// 0089fdbb  8b8fb8010000         mov ecx, dword ptr [edi + 0x1b8]
// 0089fdc1  eb02                 jmp 0x89fdc5
// 0089fdc3  8bc8                 mov ecx, eax
// 0089fdc5  8b06                 mov eax, dword ptr [esi]
// 0089fdc7  8b560c               mov edx, dword ptr [esi + 0xc]
// 0089fdca  51                   push ecx
// 0089fdcb  8b4e08               mov ecx, dword ptr [esi + 8]
// 0089fdce  2bc8                 sub ecx, eax
// 0089fdd0  51                   push ecx
// 0089fdd1  4a                   dec edx
// 0089fdd2  52                   push edx
// 0089fdd3  50                   push eax
// 0089fdd4  55                   push ebp
// 0089fdd5  8bcf                 mov ecx, edi
// 0089fdd7  e864a9ffff           call 0x89a740
// 0089fddc  e9a0010000           jmp 0x89ff81
// 0089fde1  83f804               cmp eax, 4
// 0089fde4  0f8587000000         jne 0x89fe71
// 0089fdea  8b8f6c010000         mov ecx, dword ptr [edi + 0x16c]
// 0089fdf0  83f9ff               cmp ecx, -1
// 0089fdf3  7506                 jne 0x89fdfb
// 0089fdf5  8b8f68010000         mov ecx, dword ptr [edi + 0x168]
// 0089fdfb  8b8760010000         mov eax, dword ptr [edi + 0x160]
// 0089fe01  83f8ff               cmp eax, -1
// 0089fe04  7506                 jne 0x89fe0c
// 0089fe06  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 0089fe0c  dd0578219b00         fld qword ptr [0x9b2178]
// 0089fe12  83ec08               sub esp, 8
// 0089fe15  dd1c24               fstp qword ptr [esp]
// 0089fe18  51                   push ecx
// 0089fe19  50                   push eax
// 0089fe1a  8bcf                 mov ecx, edi
// 0089fe1c  e8afa5ffff           call 0x89a3d0
// 0089fe21  50                   push eax
// 0089fe22  56                   push esi
// 0089fe23  8bcd                 mov ecx, ebp
// 0089fe25  e8d447f5ff           call 0x7f45fe
// 0089fe2a  8b06                 mov eax, dword ptr [esi]
// 0089fe2c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0089fe2f  8b5604               mov edx, dword ptr [esi + 4]
// 0089fe32  68ffffff00           push 0xffffff
// 0089fe37  2bc8                 sub ecx, eax
// 0089fe39  51                   push ecx
// 0089fe3a  52                   push edx
// 0089fe3b  50                   push eax
// 0089fe3c  55                   push ebp
// 0089fe3d  8bcf                 mov ecx, edi
// 0089fe3f  e8fca8ffff           call 0x89a740
// 0089fe44  8b87c8010000         mov eax, dword ptr [edi + 0x1c8]
// 0089fe4a  83f8ff               cmp eax, -1
// 0089fe4d  7506                 jne 0x89fe55
// 0089fe4f  8b87c4010000         mov eax, dword ptr [edi + 0x1c4]
// 0089fe55  8b0e                 mov ecx, dword ptr [esi]
// 0089fe57  8b560c               mov edx, dword ptr [esi + 0xc]
// 0089fe5a  50                   push eax
// 0089fe5b  8b4608               mov eax, dword ptr [esi + 8]
// 0089fe5e  2bc1                 sub eax, ecx
// 0089fe60  50                   push eax
// 0089fe61  4a                   dec edx
// 0089fe62  52                   push edx
// 0089fe63  51                   push ecx
// 0089fe64  55                   push ebp
// 0089fe65  8bcf                 mov ecx, edi
// 0089fe67  e8d4a8ffff           call 0x89a740
// 0089fe6c  e910010000           jmp 0x89ff81
// 0089fe71  83f802               cmp eax, 2
// 0089fe74  8b4778               mov eax, dword ptr [edi + 0x78]
// 0089fe77  0f85a5000000         jne 0x89ff22
// 0089fe7d  83f8ff               cmp eax, -1
// 0089fe80  7503                 jne 0x89fe85
// 0089fe82  8b4774               mov eax, dword ptr [edi + 0x74]
// 0089fe85  50                   push eax
// 0089fe86  56                   push esi
// 0089fe87  8bcd                 mov ecx, ebp
// 0089fe89  e87047f5ff           call 0x7f45fe
// 0089fe8e  8b872c010000         mov eax, dword ptr [edi + 0x12c]
// 0089fe94  83f8ff               cmp eax, -1
// 0089fe97  7506                 jne 0x89fe9f
// 0089fe99  8b8728010000         mov eax, dword ptr [edi + 0x128]
// 0089fe9f  8b8fe4000000         mov ecx, dword ptr [edi + 0xe4]
// 0089fea5  83f9ff               cmp ecx, -1
// 0089fea8  7506                 jne 0x89feb0
// 0089feaa  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 0089feb0  50                   push eax
// 0089feb1  51                   push ecx
// 0089feb2  56                   push esi
// 0089feb3  8bcd                 mov ecx, ebp
// 0089feb5  e83e47f5ff           call 0x7f45f8
// 0089feba  8b4e04               mov ecx, dword ptr [esi + 4]
// 0089febd  8b06                 mov eax, dword ptr [esi]
// 0089febf  8b5608               mov edx, dword ptr [esi + 8]
// 0089fec2  6aff                 push -1
// 0089fec4  894c2420             mov dword ptr [esp + 0x20], ecx
// 0089fec8  8944241c             mov dword ptr [esp + 0x1c], eax
// 0089fecc  8b460c               mov eax, dword ptr [esi + 0xc]
// 0089fecf  6aff                 push -1
// 0089fed1  8d4c2420             lea ecx, [esp + 0x20]
// 0089fed5  51                   push ecx
// 0089fed6  8954242c             mov dword ptr [esp + 0x2c], edx
// 0089feda  89442430             mov dword ptr [esp + 0x30], eax
// 0089fede  ff1558ca9800         call dword ptr [0x98ca58]
// 0089fee4  8b87d8000000         mov eax, dword ptr [edi + 0xd8]
// 0089feea  83f8ff               cmp eax, -1
// 0089feed  7506                 jne 0x89fef5
// 0089feef  8b87d4000000         mov eax, dword ptr [edi + 0xd4]
// 0089fef5  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 0089fef8  83f9ff               cmp ecx, -1
// 0089fefb  7513                 jne 0x89ff10
// 0089fefd  8b7f74               mov edi, dword ptr [edi + 0x74]
// 0089ff00  50                   push eax
// 0089ff01  57                   push edi
// 0089ff02  8d542420             lea edx, [esp + 0x20]
// 0089ff06  52                   push edx
// 0089ff07  8bcd                 mov ecx, ebp
// 0089ff09  e8ea46f5ff           call 0x7f45f8
// 0089ff0e  eb71                 jmp 0x89ff81
// 0089ff10  8bf9                 mov edi, ecx
// 0089ff12  50                   push eax
// 0089ff13  57                   push edi
// 0089ff14  8d542420             lea edx, [esp + 0x20]
// 0089ff18  52                   push edx
// 0089ff19  8bcd                 mov ecx, ebp
// 0089ff1b  e8d846f5ff           call 0x7f45f8
// 0089ff20  eb5f                 jmp 0x89ff81
// 0089ff22  83f8ff               cmp eax, -1
// 0089ff25  7503                 jne 0x89ff2a
// 0089ff27  8b4774               mov eax, dword ptr [edi + 0x74]
// 0089ff2a  50                   push eax
// 0089ff2b  56                   push esi
// 0089ff2c  8bcd                 mov ecx, ebp
// 0089ff2e  e8cb46f5ff           call 0x7f45fe
// 0089ff33  8b87d8000000         mov eax, dword ptr [edi + 0xd8]
// 0089ff39  83f8ff               cmp eax, -1
// 0089ff3c  7506                 jne 0x89ff44
// 0089ff3e  8b87d4000000         mov eax, dword ptr [edi + 0xd4]
// 0089ff44  8b8fe4000000         mov ecx, dword ptr [edi + 0xe4]
// 0089ff4a  83f9ff               cmp ecx, -1
// 0089ff4d  7512                 jne 0x89ff61
// 0089ff4f  8bbfe0000000         mov edi, dword ptr [edi + 0xe0]
// 0089ff55  50                   push eax
// 0089ff56  57                   push edi
// 0089ff57  56                   push esi
// 0089ff58  8bcd                 mov ecx, ebp
// 0089ff5a  e89946f5ff           call 0x7f45f8
// 0089ff5f  eb20                 jmp 0x89ff81
// 0089ff61  8bf9                 mov edi, ecx
// 0089ff63  50                   push eax
// 0089ff64  57                   push edi
// 0089ff65  56                   push esi
// 0089ff66  8bcd                 mov ecx, ebp
// 0089ff68  e88b46f5ff           call 0x7f45f8
// 0089ff6d  eb12                 jmp 0x89ff81
// 0089ff6f  f6c203               test dl, 3
// 0089ff72  740d                 je 0x89ff81
// 0089ff74  8b442410             mov eax, dword ptr [esp + 0x10]
// 0089ff78  50                   push eax
// 0089ff79  56                   push esi
// 0089ff7a  8bcd                 mov ecx, ebp
// 0089ff7c  e87d46f5ff           call 0x7f45fe
// 0089ff81  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0089ff85  6a01                 push 1
// 0089ff87  8bcf                 mov ecx, edi
// 0089ff89  e8ba670800           call 0x926748
// 0089ff8e  6a01                 push 1
// 0089ff90  8bcf                 mov ecx, edi
// 0089ff92  8bd8                 mov ebx, eax
// 0089ff94  e8ef660800           call 0x926688
// 0089ff99  6a17                 push 0x17
// 0089ff9b  8d4c242c             lea ecx, [esp + 0x2c]
// 0089ff9f  51                   push ecx
// 0089ffa0  6a01                 push 1
// 0089ffa2  8bcf                 mov ecx, edi
// 0089ffa4  89442458             mov dword ptr [esp + 0x58], eax
// 0089ffa8  e8d5660800           call 0x926682
// 0089ffad  f644241404           test byte ptr [esp + 0x14], 4
// 0089ffb2  0f8488000000         je 0x8a0040
// 0089ffb8  837c245400           cmp dword ptr [esp + 0x54], 0
// 0089ffbd  7434                 je 0x89fff3
// 0089ffbf  85db                 test ebx, ebx
// 0089ffc1  747d                 je 0x8a0040
// 0089ffc3  8b16                 mov edx, dword ptr [esi]
// 0089ffc5  8b4604               mov eax, dword ptr [esi + 4]
// 0089ffc8  8b4e08               mov ecx, dword ptr [esi + 8]
// 0089ffcb  8b760c               mov esi, dword ptr [esi + 0xc]
// 0089ffce  6a00                 push 0
// 0089ffd0  89442420             mov dword ptr [esp + 0x20], eax
// 0089ffd4  8954241c             mov dword ptr [esp + 0x1c], edx
// 0089ffd8  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089ffdc  89742420             mov dword ptr [esp + 0x20], esi
// 0089ffe0  83c604               add esi, 4
// 0089ffe3  68ffffff00           push 0xffffff
// 0089ffe8  894c2428             mov dword ptr [esp + 0x28], ecx
// 0089ffec  8974242c             mov dword ptr [esp + 0x2c], esi
// 0089fff0  52                   push edx
// 0089fff1  eb3b                 jmp 0x8a002e
// 0089fff3  837c245800           cmp dword ptr [esp + 0x58], 0
// 0089fff8  7446                 je 0x8a0040
// 0089fffa  3b5c244c             cmp ebx, dword ptr [esp + 0x4c]
// 0089fffe  7440                 je 0x8a0040
// 008a0000  8b0e                 mov ecx, dword ptr [esi]
// 008a0002  8b5608               mov edx, dword ptr [esi + 8]
// 008a0005  8b4604               mov eax, dword ptr [esi + 4]
// 008a0008  894c2418             mov dword ptr [esp + 0x18], ecx
// 008a000c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008a000f  89542420             mov dword ptr [esp + 0x20], edx
// 008a0013  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a0017  6a00                 push 0
// 008a0019  894c2428             mov dword ptr [esp + 0x28], ecx
// 008a001d  89442428             mov dword ptr [esp + 0x28], eax
// 008a0021  83e804               sub eax, 4
// 008a0024  52                   push edx
// 008a0025  89442424             mov dword ptr [esp + 0x24], eax
// 008a0029  68ffffff00           push 0xffffff
// 008a002e  8d442424             lea eax, [esp + 0x24]
// 008a0032  50                   push eax
// 008a0033  55                   push ebp
// 008a0034  e867d2faff           call 0x84d2a0
// 008a0039  8bc8                 mov ecx, eax
// 008a003b  e890d2faff           call 0x84d2d0
// 008a0040  5e                   pop esi
// 008a0041  5d                   pop ebp
// 008a0042  5b                   pop ebx
// 008a0043  5f                   pop edi
// 008a0044  83c434               add esp, 0x34
// 008a0047  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawFixedRowsDivider@CXTPReportPaintManager@@QAEXPAVCDC@@ABVCRect@@PAVCXTPReportControl@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp