// roc 2012-06 00a6e0e0  unit: CXTPTabPaintManager::CColorSetOffice2007  size: 1198 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6e0e0
//
// 00a6e0e0  6aff                 push -1
// 00a6e0e2  68268aae00           push 0xae8a26
// 00a6e0e7  64a100000000         mov eax, dword ptr fs:[0]
// 00a6e0ed  50                   push eax
// 00a6e0ee  83ec08               sub esp, 8
// 00a6e0f1  55                   push ebp
// 00a6e0f2  56                   push esi
// 00a6e0f3  57                   push edi
// 00a6e0f4  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a6e0f9  33c4                 xor eax, esp
// 00a6e0fb  50                   push eax
// 00a6e0fc  8d442418             lea eax, [esp + 0x18]
// 00a6e100  64a300000000         mov dword ptr fs:[0], eax
// 00a6e106  8bf1                 mov esi, ecx
// 00a6e108  e8d3f8ffff           call 0xa6d9e0
// 00a6e10d  e81e89ffff           call 0xa66a30
// 00a6e112  8bc8                 mov ecx, eax
// 00a6e114  e8f76fffff           call 0xa65110
// 00a6e119  85c0                 test eax, eax
// 00a6e11b  0f8467030000         je 0xa6e488
// 00a6e121  51                   push ecx
// 00a6e122  8bcc                 mov ecx, esp
// 00a6e124  89642414             mov dword ptr [esp + 0x14], esp
// 00a6e128  33ff                 xor edi, edi
// 00a6e12a  68e860c200           push 0xc260e8
// 00a6e12f  89becc000000         mov dword ptr [esi + 0xcc], edi
// 00a6e135  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e13b  51                   push ecx
// 00a6e13c  8bcc                 mov ecx, esp
// 00a6e13e  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a6e142  68dc60c200           push 0xc260dc
// 00a6e147  897c242c             mov dword ptr [esp + 0x2c], edi
// 00a6e14b  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e151  c644242801           mov byte ptr [esp + 0x28], 1
// 00a6e156  e8d588ffff           call 0xa66a30
// 00a6e15b  83cfff               or edi, 0xffffffff
// 00a6e15e  8bc8                 mov ecx, eax
// 00a6e160  897c2428             mov dword ptr [esp + 0x28], edi
// 00a6e164  e8c781ffff           call 0xa66330
// 00a6e169  894648               mov dword ptr [esi + 0x48], eax
// 00a6e16c  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00a6e16f  3bc7                 cmp eax, edi
// 00a6e171  7503                 jne 0xa6e176
// 00a6e173  8b4648               mov eax, dword ptr [esi + 0x48]
// 00a6e176  51                   push ecx
// 00a6e177  8bcc                 mov ecx, esp
// 00a6e179  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e17d  68d060c200           push 0xc260d0
// 00a6e182  898654010000         mov dword ptr [esi + 0x154], eax
// 00a6e188  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e18e  51                   push ecx
// 00a6e18f  8bcc                 mov ecx, esp
// 00a6e191  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e195  68dc60c200           push 0xc260dc
// 00a6e19a  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 00a6e1a2  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e1a8  c644242803           mov byte ptr [esp + 0x28], 3
// 00a6e1ad  e87e88ffff           call 0xa66a30
// 00a6e1b2  8bc8                 mov ecx, eax
// 00a6e1b4  897c2428             mov dword ptr [esp + 0x28], edi
// 00a6e1b8  e87381ffff           call 0xa66330
// 00a6e1bd  89863c010000         mov dword ptr [esi + 0x13c], eax
// 00a6e1c3  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 00a6e1c9  3bc7                 cmp eax, edi
// 00a6e1cb  7506                 jne 0xa6e1d3
// 00a6e1cd  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00a6e1d3  51                   push ecx
// 00a6e1d4  8bcc                 mov ecx, esp
// 00a6e1d6  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e1da  68c460c200           push 0xc260c4
// 00a6e1df  898648010000         mov dword ptr [esi + 0x148], eax
// 00a6e1e5  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e1eb  51                   push ecx
// 00a6e1ec  8bcc                 mov ecx, esp
// 00a6e1ee  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e1f2  68dc60c200           push 0xc260dc
// 00a6e1f7  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 00a6e1ff  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e205  c644242805           mov byte ptr [esp + 0x28], 5
// 00a6e20a  e82188ffff           call 0xa66a30
// 00a6e20f  8bc8                 mov ecx, eax
// 00a6e211  897c2428             mov dword ptr [esp + 0x28], edi
// 00a6e215  e81681ffff           call 0xa66330
// 00a6e21a  898630010000         mov dword ptr [esi + 0x130], eax
// 00a6e220  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 00a6e226  3bc7                 cmp eax, edi
// 00a6e228  7506                 jne 0xa6e230
// 00a6e22a  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 00a6e230  51                   push ecx
// 00a6e231  8bcc                 mov ecx, esp
// 00a6e233  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e237  6824b9c100           push 0xc1b924
// 00a6e23c  898660010000         mov dword ptr [esi + 0x160], eax
// 00a6e242  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 00a6e24c  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e252  51                   push ecx
// 00a6e253  8bcc                 mov ecx, esp
// 00a6e255  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e259  681cb9c100           push 0xc1b91c
// 00a6e25e  c744242c06000000     mov dword ptr [esp + 0x2c], 6
// 00a6e266  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e26c  c644242807           mov byte ptr [esp + 0x28], 7
// 00a6e271  e8ba87ffff           call 0xa66a30
// 00a6e276  8bc8                 mov ecx, eax
// 00a6e278  897c2428             mov dword ptr [esp + 0x28], edi
// 00a6e27c  e8af80ffff           call 0xa66330
// 00a6e281  8d6e04               lea ebp, [esi + 4]
// 00a6e284  50                   push eax
// 00a6e285  8bcd                 mov ecx, ebp
// 00a6e287  e824f5f4ff           call 0x9bd7b0
// 00a6e28c  55                   push ebp
// 00a6e28d  8d4e24               lea ecx, [esi + 0x24]
// 00a6e290  e8cbeaf4ff           call 0x9bcd60
// 00a6e295  51                   push ecx
// 00a6e296  8bcc                 mov ecx, esp
// 00a6e298  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e29c  68e8c6c100           push 0xc1c6e8
// 00a6e2a1  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e2a7  51                   push ecx
// 00a6e2a8  8bcc                 mov ecx, esp
// 00a6e2aa  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e2ae  684c87c100           push 0xc1874c
// 00a6e2b3  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 00a6e2bb  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e2c1  c644242809           mov byte ptr [esp + 0x28], 9
// 00a6e2c6  e86587ffff           call 0xa66a30
// 00a6e2cb  8bc8                 mov ecx, eax
// 00a6e2cd  897c2428             mov dword ptr [esp + 0x28], edi
// 00a6e2d1  e85a80ffff           call 0xa66330
// 00a6e2d6  51                   push ecx
// 00a6e2d7  8bcc                 mov ecx, esp
// 00a6e2d9  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e2dd  6804c6c100           push 0xc1c604
// 00a6e2e2  89869c000000         mov dword ptr [esi + 0x9c], eax
// 00a6e2e8  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e2ee  51                   push ecx
// 00a6e2ef  8bcc                 mov ecx, esp
// 00a6e2f1  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e2f5  684c87c100           push 0xc1874c
// 00a6e2fa  c744242c0a000000     mov dword ptr [esp + 0x2c], 0xa
// 00a6e302  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e308  c64424280b           mov byte ptr [esp + 0x28], 0xb
// 00a6e30d  e81e87ffff           call 0xa66a30
// 00a6e312  8bc8                 mov ecx, eax
// 00a6e314  897c2428             mov dword ptr [esp + 0x28], edi
// 00a6e318  e81380ffff           call 0xa66330
// 00a6e31d  51                   push ecx
// 00a6e31e  8bcc                 mov ecx, esp
// 00a6e320  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e324  685cc6c100           push 0xc1c65c
// 00a6e329  894678               mov dword ptr [esi + 0x78], eax
// 00a6e32c  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e332  51                   push ecx
// 00a6e333  8bcc                 mov ecx, esp
// 00a6e335  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e339  684c87c100           push 0xc1874c
// 00a6e33e  c744242c0c000000     mov dword ptr [esp + 0x2c], 0xc
// 00a6e346  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e34c  c64424280d           mov byte ptr [esp + 0x28], 0xd
// 00a6e351  e8da86ffff           call 0xa66a30
// 00a6e356  897c2428             mov dword ptr [esp + 0x28], edi
// 00a6e35a  8bc8                 mov ecx, eax
// 00a6e35c  e8cf7fffff           call 0xa66330
// 00a6e361  51                   push ecx
// 00a6e362  8bcc                 mov ecx, esp
// 00a6e364  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e368  6844c7c100           push 0xc1c744
// 00a6e36d  898684000000         mov dword ptr [esi + 0x84], eax
// 00a6e373  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e379  51                   push ecx
// 00a6e37a  8bcc                 mov ecx, esp
// 00a6e37c  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e380  684c87c100           push 0xc1874c
// 00a6e385  c744242c0e000000     mov dword ptr [esp + 0x2c], 0xe
// 00a6e38d  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e393  c64424280f           mov byte ptr [esp + 0x28], 0xf
// 00a6e398  e89386ffff           call 0xa66a30
// 00a6e39d  8bc8                 mov ecx, eax
// 00a6e39f  897c2428             mov dword ptr [esp + 0x28], edi
// 00a6e3a3  e8887fffff           call 0xa66330
// 00a6e3a8  51                   push ecx
// 00a6e3a9  8bcc                 mov ecx, esp
// 00a6e3ab  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e3af  680cb9c100           push 0xc1b90c
// 00a6e3b4  89860c020000         mov dword ptr [esi + 0x20c], eax
// 00a6e3ba  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e3c0  51                   push ecx
// 00a6e3c1  8bcc                 mov ecx, esp
// 00a6e3c3  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e3c7  681cb9c100           push 0xc1b91c
// 00a6e3cc  c744242c10000000     mov dword ptr [esp + 0x2c], 0x10
// 00a6e3d4  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e3da  c644242811           mov byte ptr [esp + 0x28], 0x11
// 00a6e3df  e84c86ffff           call 0xa66a30
// 00a6e3e4  8bc8                 mov ecx, eax
// 00a6e3e6  897c2428             mov dword ptr [esp + 0x28], edi
// 00a6e3ea  e8417fffff           call 0xa66330
// 00a6e3ef  51                   push ecx
// 00a6e3f0  8bcc                 mov ecx, esp
// 00a6e3f2  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e3f6  680cb9c100           push 0xc1b90c
// 00a6e3fb  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 00a6e401  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e407  51                   push ecx
// 00a6e408  8bcc                 mov ecx, esp
// 00a6e40a  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e40e  681cb9c100           push 0xc1b91c
// 00a6e413  c744242c12000000     mov dword ptr [esp + 0x2c], 0x12
// 00a6e41b  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e421  c644242813           mov byte ptr [esp + 0x28], 0x13
// 00a6e426  e80586ffff           call 0xa66a30
// 00a6e42b  8bc8                 mov ecx, eax
// 00a6e42d  897c2428             mov dword ptr [esp + 0x28], edi
// 00a6e431  e8fa7effff           call 0xa66330
// 00a6e436  51                   push ecx
// 00a6e437  8bcc                 mov ecx, esp
// 00a6e439  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e43d  68fcb8c100           push 0xc1b8fc
// 00a6e442  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00a6e448  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e44e  51                   push ecx
// 00a6e44f  8bcc                 mov ecx, esp
// 00a6e451  89642418             mov dword ptr [esp + 0x18], esp
// 00a6e455  681cb9c100           push 0xc1b91c
// 00a6e45a  c744242c14000000     mov dword ptr [esp + 0x2c], 0x14
// 00a6e462  ff15c847b200         call dword ptr [0xb247c8]
// 00a6e468  c644242815           mov byte ptr [esp + 0x28], 0x15
// 00a6e46d  e8be85ffff           call 0xa66a30
// 00a6e472  8bc8                 mov ecx, eax
// 00a6e474  897c2428             mov dword ptr [esp + 0x28], edi
// 00a6e478  e8b37effff           call 0xa66330
// 00a6e47d  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00a6e483  e9e9000000           jmp 0xa6e571
// 00a6e488  e8d3f3f4ff           call 0x9bd860
// 00a6e48d  6a21                 push 0x21
// 00a6e48f  8bc8                 mov ecx, eax
// 00a6e491  e84aebf4ff           call 0x9bcfe0
// 00a6e496  898690000000         mov dword ptr [esi + 0x90], eax
// 00a6e49c  e8bff3f4ff           call 0x9bd860
// 00a6e4a1  6a12                 push 0x12
// 00a6e4a3  8bc8                 mov ecx, eax
// 00a6e4a5  e836ebf4ff           call 0x9bcfe0
// 00a6e4aa  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 00a6e4b0  c746483b619c00       mov dword ptr [esi + 0x48], 0x9c613b
// 00a6e4b7  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00a6e4ba  83f8ff               cmp eax, -1
// 00a6e4bd  7503                 jne 0xa6e4c2
// 00a6e4bf  8b4648               mov eax, dword ptr [esi + 0x48]
// 00a6e4c2  898654010000         mov dword ptr [esi + 0x154], eax
// 00a6e4c8  b800359a00           mov eax, 0x9a3500
// 00a6e4cd  89863c010000         mov dword ptr [esi + 0x13c], eax
// 00a6e4d3  898648010000         mov dword ptr [esi + 0x148], eax
// 00a6e4d9  b875a6f100           mov eax, 0xf1a675
// 00a6e4de  68ffc06f00           push 0x6fc0ff
// 00a6e4e3  8d8ee0000000         lea ecx, [esi + 0xe0]
// 00a6e4e9  898630010000         mov dword ptr [esi + 0x130], eax
// 00a6e4ef  898660010000         mov dword ptr [esi + 0x160], eax
// 00a6e4f5  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 00a6e4ff  e8acf2f4ff           call 0x9bd7b0
// 00a6e504  6800008000           push 0x800000
// 00a6e509  8d8e00010000         lea ecx, [esi + 0x100]
// 00a6e50f  e89cf2f4ff           call 0x9bd7b0
// 00a6e514  d9057027b600         fld dword ptr [0xb62770]
// 00a6e51a  51                   push ecx
// 00a6e51b  d91c24               fstp dword ptr [esp]
// 00a6e51e  68fcfdfe00           push 0xfefdfc
// 00a6e523  68c4dafa00           push 0xfadac4
// 00a6e528  8d4e04               lea ecx, [esi + 4]
// 00a6e52b  e810e8f4ff           call 0x9bcd40
// 00a6e530  d9057027b600         fld dword ptr [0xb62770]
// 00a6e536  51                   push ecx
// 00a6e537  d91c24               fstp dword ptr [esp]
// 00a6e53a  68c4dafa00           push 0xfadac4
// 00a6e53f  689ebef500           push 0xf5be9e
// 00a6e544  8d4e24               lea ecx, [esi + 0x24]
// 00a6e547  c7869c000000a2c0f600 mov dword ptr [esi + 0x9c], 0xf6c0a2
// 00a6e551  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 00a6e558  c78684000000fff0c900 mov dword ptr [esi + 0x84], 0xc9f0ff
// 00a6e562  e8d9e7f4ff           call 0x9bcd40
// 00a6e567  c7860c02000000008000 mov dword ptr [esi + 0x20c], 0x800000
// 00a6e571  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 00a6e57b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a6e57f  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6e586  59                   pop ecx
// 00a6e587  5f                   pop edi
// 00a6e588  5e                   pop esi
// 00a6e589  5d                   pop ebp
// 00a6e58a  83c414               add esp, 0x14
// 00a6e58d  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetOffice2007@CXTPTabPaintManager@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp