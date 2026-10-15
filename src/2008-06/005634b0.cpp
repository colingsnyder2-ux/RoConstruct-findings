// roc 2008-06 005634b0  unit: RBX::ContentProvider  size: 1032 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005634b0
//
// 005634b0  6aff                 push -1
// 005634b2  68f8f27c00           push 0x7cf2f8
// 005634b7  64a100000000         mov eax, dword ptr fs:[0]
// 005634bd  50                   push eax
// 005634be  64892500000000       mov dword ptr fs:[0], esp
// 005634c5  81ecd0030000         sub esp, 0x3d0
// 005634cb  55                   push ebp
// 005634cc  56                   push esi
// 005634cd  33ed                 xor ebp, ebp
// 005634cf  68a8010000           push 0x1a8
// 005634d4  8d842434020000       lea eax, [esp + 0x234]
// 005634db  55                   push ebp
// 005634dc  50                   push eax
// 005634dd  896c243c             mov dword ptr [esp + 0x3c], ebp
// 005634e1  e81ee21300           call 0x6a1704
// 005634e6  83c40c               add esp, 0xc
// 005634e9  55                   push ebp
// 005634ea  8d8c2434020000       lea ecx, [esp + 0x234]
// 005634f1  51                   push ecx
// 005634f2  55                   push ebp
// 005634f3  55                   push ebp
// 005634f4  c7842440020000a8010000 mov dword ptr [esp + 0x240], 0x1a8
// 005634ff  ff15982c8000         call dword ptr [0x802c98]
// 00563505  33c0                 xor eax, eax
// 00563507  8d542408             lea edx, [esp + 8]
// 0056350b  52                   push edx
// 0056350c  8944240c             mov dword ptr [esp + 0xc], eax
// 00563510  89442410             mov dword ptr [esp + 0x10], eax
// 00563514  89442414             mov dword ptr [esp + 0x14], eax
// 00563518  ff15e82a8000         call dword ptr [0x802ae8]
// 0056351e  33c0                 xor eax, eax
// 00563520  89442408             mov dword ptr [esp + 8], eax
// 00563524  8944240c             mov dword ptr [esp + 0xc], eax
// 00563528  89442410             mov dword ptr [esp + 0x10], eax
// 0056352c  8d442408             lea eax, [esp + 8]
// 00563530  50                   push eax
// 00563531  c744240c0c000000     mov dword ptr [esp + 0xc], 0xc
// 00563539  ff15ec2a8000         call dword ptr [0x802aec]
// 0056353f  33c0                 xor eax, eax
// 00563541  6a3f                 push 0x3f
// 00563543  8d8c24b1000000       lea ecx, [esp + 0xb1]
// 0056354a  55                   push ebp
// 0056354b  51                   push ecx
// 0056354c  896c2420             mov dword ptr [esp + 0x20], ebp
// 00563550  89442424             mov dword ptr [esp + 0x24], eax
// 00563554  89442428             mov dword ptr [esp + 0x28], eax
// 00563558  8944242c             mov dword ptr [esp + 0x2c], eax
// 0056355c  89442430             mov dword ptr [esp + 0x30], eax
// 00563560  89442434             mov dword ptr [esp + 0x34], eax
// 00563564  89442438             mov dword ptr [esp + 0x38], eax
// 00563568  888424b8000000       mov byte ptr [esp + 0xb8], al
// 0056356f  e890e11300           call 0x6a1704
// 00563574  83c40c               add esp, 0xc
// 00563577  6a0e                 push 0xe
// 00563579  55                   push ebp
// 0056357a  55                   push ebp
// 0056357b  55                   push ebp
// 0056357c  ff15e42a8000         call dword ptr [0x802ae4]
// 00563582  8bf0                 mov esi, eax
// 00563584  83feff               cmp esi, -1
// 00563587  7519                 jne 0x5635a2
// 00563589  8bb424e8030000       mov esi, dword ptr [esp + 0x3e8]
// 00563590  6816b78000           push 0x80b716
// 00563595  8bce                 mov ecx, esi
// 00563597  ff1558248000         call dword ptr [0x802458]
// 0056359d  e9fb020000           jmp 0x56389d
// 005635a2  53                   push ebx
// 005635a3  57                   push edi
// 005635a4  8d54241c             lea edx, [esp + 0x1c]
// 005635a8  52                   push edx
// 005635a9  55                   push ebp
// 005635aa  56                   push esi
// 005635ab  33ff                 xor edi, edi
// 005635ad  c74424281c000000     mov dword ptr [esp + 0x28], 0x1c
// 005635b5  ff15e02a8000         call dword ptr [0x802ae0]
// 005635bb  8b1ddc2a8000         mov ebx, dword ptr [0x802adc]
// 005635c1  85c0                 test eax, eax
// 005635c3  0f8440010000         je 0x563709
// 005635c9  8da42400000000       lea esp, [esp]
// 005635d0  6803010000           push 0x103
// 005635d5  8d842439010000       lea eax, [esp + 0x139]
// 005635dc  55                   push ebp
// 005635dd  50                   push eax
// 005635de  c684244001000000     mov byte ptr [esp + 0x140], 0
// 005635e6  e819e11300           call 0x6a1704
// 005635eb  83c40c               add esp, 0xc
// 005635ee  55                   push ebp
// 005635ef  6803010000           push 0x103
// 005635f4  8d8c243c010000       lea ecx, [esp + 0x13c]
// 005635fb  51                   push ecx
// 005635fc  55                   push ebp
// 005635fd  6a07                 push 7
// 005635ff  8d542430             lea edx, [esp + 0x30]
// 00563603  52                   push edx
// 00563604  56                   push esi
// 00563605  896c2458             mov dword ptr [esp + 0x58], ebp
// 00563609  ffd3                 call ebx
// 0056360b  85c0                 test eax, eax
// 0056360d  0f84dd000000         je 0x5636f0
// 00563613  8d44243c             lea eax, [esp + 0x3c]
// 00563617  50                   push eax
// 00563618  8d4c2424             lea ecx, [esp + 0x24]
// 0056361c  51                   push ecx
// 0056361d  8d542418             lea edx, [esp + 0x18]
// 00563621  52                   push edx
// 00563622  ff15d82a8000         call dword ptr [0x802ad8]
// 00563628  85c0                 test eax, eax
// 0056362a  0f84c0000000         je 0x5636f0
// 00563630  8d442440             lea eax, [esp + 0x40]
// 00563634  50                   push eax
// 00563635  6804010000           push 0x104
// 0056363a  8d8c243c010000       lea ecx, [esp + 0x13c]
// 00563641  51                   push ecx
// 00563642  8d54242c             lea edx, [esp + 0x2c]
// 00563646  52                   push edx
// 00563647  ff15d42a8000         call dword ptr [0x802ad4]
// 0056364d  85c0                 test eax, eax
// 0056364f  0f849b000000         je 0x5636f0
// 00563655  55                   push ebp
// 00563656  6a3f                 push 0x3f
// 00563658  8d8424bc000000       lea eax, [esp + 0xbc]
// 0056365f  50                   push eax
// 00563660  55                   push ebp
// 00563661  6a0c                 push 0xc
// 00563663  8d4c2430             lea ecx, [esp + 0x30]
// 00563667  51                   push ecx
// 00563668  56                   push esi
// 00563669  ffd3                 call ebx
// 0056366b  85c0                 test eax, eax
// 0056366d  7431                 je 0x5636a0
// 0056366f  8d8c245c020000       lea ecx, [esp + 0x25c]
// 00563676  8d8424b4000000       lea eax, [esp + 0xb4]
// 0056367d  8d4900               lea ecx, [ecx]
// 00563680  8a10                 mov dl, byte ptr [eax]
// 00563682  3a11                 cmp dl, byte ptr [ecx]
// 00563684  7561                 jne 0x5636e7
// 00563686  84d2                 test dl, dl
// 00563688  7412                 je 0x56369c
// 0056368a  8a5001               mov dl, byte ptr [eax + 1]
// 0056368d  3a5101               cmp dl, byte ptr [ecx + 1]
// 00563690  7555                 jne 0x5636e7
// 00563692  83c002               add eax, 2
// 00563695  83c102               add ecx, 2
// 00563698  84d2                 test dl, dl
// 0056369a  75e4                 jne 0x563680
// 0056369c  33c0                 xor eax, eax
// 0056369e  eb4c                 jmp 0x5636ec
// 005636a0  55                   push ebp
// 005636a1  6a3f                 push 0x3f
// 005636a3  8d9424bc000000       lea edx, [esp + 0xbc]
// 005636aa  52                   push edx
// 005636ab  55                   push ebp
// 005636ac  55                   push ebp
// 005636ad  8d442430             lea eax, [esp + 0x30]
// 005636b1  50                   push eax
// 005636b2  56                   push esi
// 005636b3  ffd3                 call ebx
// 005636b5  85c0                 test eax, eax
// 005636b7  7437                 je 0x5636f0
// 005636b9  8d8c245c020000       lea ecx, [esp + 0x25c]
// 005636c0  8d8424b4000000       lea eax, [esp + 0xb4]
// 005636c7  8a10                 mov dl, byte ptr [eax]
// 005636c9  3a11                 cmp dl, byte ptr [ecx]
// 005636cb  751a                 jne 0x5636e7
// 005636cd  84d2                 test dl, dl
// 005636cf  7412                 je 0x5636e3
// 005636d1  8a5001               mov dl, byte ptr [eax + 1]
// 005636d4  3a5101               cmp dl, byte ptr [ecx + 1]
// 005636d7  750e                 jne 0x5636e7
// 005636d9  83c002               add eax, 2
// 005636dc  83c102               add ecx, 2
// 005636df  84d2                 test dl, dl
// 005636e1  75e4                 jne 0x5636c7
// 005636e3  33c0                 xor eax, eax
// 005636e5  eb05                 jmp 0x5636ec
// 005636e7  1bc0                 sbb eax, eax
// 005636e9  83d8ff               sbb eax, -1
// 005636ec  3bc5                 cmp eax, ebp
// 005636ee  7419                 je 0x563709
// 005636f0  47                   inc edi
// 005636f1  8d4c241c             lea ecx, [esp + 0x1c]
// 005636f5  0fbfd7               movsx edx, di
// 005636f8  51                   push ecx
// 005636f9  52                   push edx
// 005636fa  56                   push esi
// 005636fb  ff15e02a8000         call dword ptr [0x802ae0]
// 00563701  85c0                 test eax, eax
// 00563703  0f85c7feffff         jne 0x5635d0
// 00563709  6864e08200           push 0x82e064
// 0056370e  8d4c2448             lea ecx, [esp + 0x48]
// 00563712  ff1558248000         call dword ptr [0x802458]
// 00563718  6a3f                 push 0x3f
// 0056371a  8d8424f9000000       lea eax, [esp + 0xf9]
// 00563721  55                   push ebp
// 00563722  bf01000000           mov edi, 1
// 00563727  50                   push eax
// 00563728  89bc24f4030000       mov dword ptr [esp + 0x3f4], edi
// 0056372f  c684240001000000     mov byte ptr [esp + 0x100], 0
// 00563737  e8c8df1300           call 0x6a1704
// 0056373c  83c40c               add esp, 0xc
// 0056373f  55                   push ebp
// 00563740  6a3f                 push 0x3f
// 00563742  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00563749  51                   push ecx
// 0056374a  55                   push ebp
// 0056374b  6a09                 push 9
// 0056374d  8d542430             lea edx, [esp + 0x30]
// 00563751  52                   push edx
// 00563752  56                   push esi
// 00563753  c74424381c000000     mov dword ptr [esp + 0x38], 0x1c
// 0056375b  ffd3                 call ebx
// 0056375d  85c0                 test eax, eax
// 0056375f  7412                 je 0x563773
// 00563761  8d8424f4000000       lea eax, [esp + 0xf4]
// 00563768  50                   push eax
// 00563769  8d4c2448             lea ecx, [esp + 0x48]
// 0056376d  ff154c248000         call dword ptr [0x80244c]
// 00563773  68109e8100           push 0x819e10
// 00563778  8d8c2480000000       lea ecx, [esp + 0x80]
// 0056377f  ff1558248000         call dword ptr [0x802458]
// 00563785  8d4c2444             lea ecx, [esp + 0x44]
// 00563789  51                   push ecx
// 0056378a  8d94249c000000       lea edx, [esp + 0x9c]
// 00563791  6828e08200           push 0x82e028
// 00563796  52                   push edx
// 00563797  c68424f403000002     mov byte ptr [esp + 0x3f4], 2
// 0056379f  ff1568238000         call dword ptr [0x802368]
// 005637a5  8b35e4238000         mov esi, dword ptr [0x8023e4]
// 005637ab  6818e08200           push 0x82e018
// 005637b0  50                   push eax
// 005637b1  8d442474             lea eax, [esp + 0x74]
// 005637b5  b303                 mov bl, 3
// 005637b7  50                   push eax
// 005637b8  889c2400040000       mov byte ptr [esp + 0x400], bl
// 005637bf  ffd6                 call esi
// 005637c1  8d8c2494000000       lea ecx, [esp + 0x94]
// 005637c8  51                   push ecx
// 005637c9  50                   push eax
// 005637ca  c684240804000004     mov byte ptr [esp + 0x408], 4
// 005637d2  e8b909fbff           call 0x514190
// 005637d7  83c420               add esp, 0x20
// 005637da  8d4c2460             lea ecx, [esp + 0x60]
// 005637de  889c24e8030000       mov byte ptr [esp + 0x3e8], bl
// 005637e5  ff1568248000         call dword ptr [0x802468]
// 005637eb  8d8c2498000000       lea ecx, [esp + 0x98]
// 005637f2  c68424e803000002     mov byte ptr [esp + 0x3e8], 2
// 005637fa  ff1568248000         call dword ptr [0x802468]
// 00563800  8d94245c020000       lea edx, [esp + 0x25c]
// 00563807  52                   push edx
// 00563808  8d4c2464             lea ecx, [esp + 0x64]
// 0056380c  ff1558248000         call dword ptr [0x802458]
// 00563812  6810e08200           push 0x82e010
// 00563817  50                   push eax
// 00563818  8d8424a0000000       lea eax, [esp + 0xa0]
// 0056381f  b305                 mov bl, 5
// 00563821  50                   push eax
// 00563822  889c24f4030000       mov byte ptr [esp + 0x3f4], bl
// 00563829  ffd6                 call esi
// 0056382b  8bb424fc030000       mov esi, dword ptr [esp + 0x3fc]
// 00563832  8d8c2488000000       lea ecx, [esp + 0x88]
// 00563839  51                   push ecx
// 0056383a  50                   push eax
// 0056383b  56                   push esi
// 0056383c  c684240004000006     mov byte ptr [esp + 0x400], 6
// 00563844  ff15a8248000         call dword ptr [0x8024a8]
// 0056384a  83c418               add esp, 0x18
// 0056384d  8d8c2498000000       lea ecx, [esp + 0x98]
// 00563854  897c2438             mov dword ptr [esp + 0x38], edi
// 00563858  889c24e8030000       mov byte ptr [esp + 0x3e8], bl
// 0056385f  ff1568248000         call dword ptr [0x802468]
// 00563865  8d4c2460             lea ecx, [esp + 0x60]
// 00563869  c68424e803000002     mov byte ptr [esp + 0x3e8], 2
// 00563871  ff1568248000         call dword ptr [0x802468]
// 00563877  8d4c247c             lea ecx, [esp + 0x7c]
// 0056387b  c68424e803000001     mov byte ptr [esp + 0x3e8], 1
// 00563883  ff1568248000         call dword ptr [0x802468]
// 00563889  8d4c2444             lea ecx, [esp + 0x44]
// 0056388d  c68424e803000000     mov byte ptr [esp + 0x3e8], 0
// 00563895  ff1568248000         call dword ptr [0x802468]
// 0056389b  5f                   pop edi
// 0056389c  5b                   pop ebx
// 0056389d  8b8c24d8030000       mov ecx, dword ptr [esp + 0x3d8]
// 005638a4  8bc6                 mov eax, esi
// 005638a6  5e                   pop esi
// 005638a7  5d                   pop ebp
// 005638a8  64890d00000000       mov dword ptr fs:[0], ecx
// 005638af  81c4dc030000         add esp, 0x3dc
// 005638b5  c20400               ret 4
// library rbxgs/roc_unit_09f8f9973c494ab8.cpp (function ?gfxcard@DebugSettings@RBX@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_09f8f9973c494ab8.cpp
