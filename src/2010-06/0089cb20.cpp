// roc 2010-06 0089cb20  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 1232 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089cb20
//
// 0089cb20  83ec08               sub esp, 8
// 0089cb23  53                   push ebx
// 0089cb24  55                   push ebp
// 0089cb25  56                   push esi
// 0089cb26  57                   push edi
// 0089cb27  8bf1                 mov esi, ecx
// 0089cb29  e842f4ffff           call 0x89bf70
// 0089cb2e  e8ed6ff4ff           call 0x7e3b20
// 0089cb33  6a05                 push 5
// 0089cb35  8bc8                 mov ecx, eax
// 0089cb37  e87467f4ff           call 0x7e32b0
// 0089cb3c  8bd8                 mov ebx, eax
// 0089cb3e  e8dd6ff4ff           call 0x7e3b20
// 0089cb43  6a0f                 push 0xf
// 0089cb45  8bc8                 mov ecx, eax
// 0089cb47  e86467f4ff           call 0x7e32b0
// 0089cb4c  8be8                 mov ebp, eax
// 0089cb4e  e8cd6ff4ff           call 0x7e3b20
// 0089cb53  89442410             mov dword ptr [esp + 0x10], eax
// 0089cb57  e8c46ff4ff           call 0x7e3b20
// 0089cb5c  6a0f                 push 0xf
// 0089cb5e  8bc8                 mov ecx, eax
// 0089cb60  e84b67f4ff           call 0x7e32b0
// 0089cb65  d905e026a100         fld dword ptr [0xa126e0]
// 0089cb6b  51                   push ecx
// 0089cb6c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089cb70  d91c24               fstp dword ptr [esp]
// 0089cb73  68cd000000           push 0xcd
// 0089cb78  53                   push ebx
// 0089cb79  55                   push ebp
// 0089cb7a  89442424             mov dword ptr [esp + 0x24], eax
// 0089cb7e  8d7e04               lea edi, [esi + 4]
// 0089cb81  e87a66f4ff           call 0x7e3200
// 0089cb86  50                   push eax
// 0089cb87  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0089cb8b  50                   push eax
// 0089cb8c  8bcf                 mov ecx, edi
// 0089cb8e  e87d64f4ff           call 0x7e3010
// 0089cb93  e8886ff4ff           call 0x7e3b20
// 0089cb98  6a24                 push 0x24
// 0089cb9a  8bc8                 mov ecx, eax
// 0089cb9c  8daee0000000         lea ebp, [esi + 0xe0]
// 0089cba2  e80967f4ff           call 0x7e32b0
// 0089cba7  50                   push eax
// 0089cba8  8bcd                 mov ecx, ebp
// 0089cbaa  e8c16ef4ff           call 0x7e3a70
// 0089cbaf  e86c6ff4ff           call 0x7e3b20
// 0089cbb4  6a25                 push 0x25
// 0089cbb6  8bc8                 mov ecx, eax
// 0089cbb8  8d9e00010000         lea ebx, [esi + 0x100]
// 0089cbbe  e8ed66f4ff           call 0x7e32b0
// 0089cbc3  50                   push eax
// 0089cbc4  8bcb                 mov ecx, ebx
// 0089cbc6  e8a56ef4ff           call 0x7e3a70
// 0089cbcb  e8506ff4ff           call 0x7e3b20
// 0089cbd0  6a24                 push 0x24
// 0089cbd2  8bc8                 mov ecx, eax
// 0089cbd4  e8d766f4ff           call 0x7e32b0
// 0089cbd9  898684000000         mov dword ptr [esi + 0x84], eax
// 0089cbdf  e83c6ff4ff           call 0x7e3b20
// 0089cbe4  6a21                 push 0x21
// 0089cbe6  8bc8                 mov ecx, eax
// 0089cbe8  e8c366f4ff           call 0x7e32b0
// 0089cbed  898690000000         mov dword ptr [esi + 0x90], eax
// 0089cbf3  e8286ff4ff           call 0x7e3b20
// 0089cbf8  6a12                 push 0x12
// 0089cbfa  8bc8                 mov ecx, eax
// 0089cbfc  e8af66f4ff           call 0x7e32b0
// 0089cc01  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0089cc07  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0089cc0a  894e30               mov dword ptr [esi + 0x30], ecx
// 0089cc0d  8b5708               mov edx, dword ptr [edi + 8]
// 0089cc10  8d5e24               lea ebx, [esi + 0x24]
// 0089cc13  895308               mov dword ptr [ebx + 8], edx
// 0089cc16  8b4718               mov eax, dword ptr [edi + 0x18]
// 0089cc19  894318               mov dword ptr [ebx + 0x18], eax
// 0089cc1c  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0089cc1f  894b14               mov dword ptr [ebx + 0x14], ecx
// 0089cc22  d9471c               fld dword ptr [edi + 0x1c]
// 0089cc25  d95b1c               fstp dword ptr [ebx + 0x1c]
// 0089cc28  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0089cc2e  c7861402000000000000 mov dword ptr [esi + 0x214], 0
// 0089cc38  e8437dfeff           call 0x884980
// 0089cc3d  85c0                 test eax, eax
// 0089cc3f  0f856b020000         jne 0x89ceb0
// 0089cc45  e8d66ef4ff           call 0x7e3b20
// 0089cc4a  8bc8                 mov ecx, eax
// 0089cc4c  e87f6cf4ff           call 0x7e38d0
// 0089cc51  48                   dec eax
// 0089cc52  83f804               cmp eax, 4
// 0089cc55  0f8744020000         ja 0x89ce9f
// 0089cc5b  ff2485dccf8900       jmp dword ptr [eax*4 + 0x89cfdc]
// 0089cc62  b83b619c00           mov eax, 0x9c613b
// 0089cc67  894648               mov dword ptr [esi + 0x48], eax
// 0089cc6a  898654010000         mov dword ptr [esi + 0x154], eax
// 0089cc70  b800359a00           mov eax, 0x9a3500
// 0089cc75  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0089cc7b  898648010000         mov dword ptr [esi + 0x148], eax
// 0089cc81  b875a6f100           mov eax, 0xf1a675
// 0089cc86  68ffc06f00           push 0x6fc0ff
// 0089cc8b  8bcd                 mov ecx, ebp
// 0089cc8d  898630010000         mov dword ptr [esi + 0x130], eax
// 0089cc93  898660010000         mov dword ptr [esi + 0x160], eax
// 0089cc99  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 0089cca3  e8c86df4ff           call 0x7e3a70
// 0089cca8  6800008000           push 0x800000
// 0089ccad  8d8e00010000         lea ecx, [esi + 0x100]
// 0089ccb3  e8b86df4ff           call 0x7e3a70
// 0089ccb8  d905e026a100         fld dword ptr [0xa126e0]
// 0089ccbe  51                   push ecx
// 0089ccbf  d91c24               fstp dword ptr [esp]
// 0089ccc2  68fcfdfe00           push 0xfefdfc
// 0089ccc7  68c4dafa00           push 0xfadac4
// 0089cccc  8bcf                 mov ecx, edi
// 0089ccce  e83d63f4ff           call 0x7e3010
// 0089ccd3  d905e026a100         fld dword ptr [0xa126e0]
// 0089ccd9  51                   push ecx
// 0089ccda  d91c24               fstp dword ptr [esp]
// 0089ccdd  68c4dafa00           push 0xfadac4
// 0089cce2  689ebef500           push 0xf5be9e
// 0089cce7  8bcb                 mov ecx, ebx
// 0089cce9  c7869c000000a2c0f600 mov dword ptr [esi + 0x9c], 0xf6c0a2
// 0089ccf3  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 0089ccfa  c78684000000fff0c900 mov dword ptr [esi + 0x84], 0xc9f0ff
// 0089cd04  e80763f4ff           call 0x7e3010
// 0089cd09  c7860c02000000008000 mov dword ptr [esi + 0x20c], 0x800000
// 0089cd13  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 0089cd1d  e98e010000           jmp 0x89ceb0
// 0089cd22  b860805800           mov eax, 0x588060
// 0089cd27  894648               mov dword ptr [esi + 0x48], eax
// 0089cd2a  898654010000         mov dword ptr [esi + 0x154], eax
// 0089cd30  b860776b00           mov eax, 0x6b7760
// 0089cd35  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0089cd3b  898648010000         mov dword ptr [esi + 0x148], eax
// 0089cd41  b8b0c28c00           mov eax, 0x8cc2b0
// 0089cd46  68ffc06f00           push 0x6fc0ff
// 0089cd4b  8bcd                 mov ecx, ebp
// 0089cd4d  898630010000         mov dword ptr [esi + 0x130], eax
// 0089cd53  898660010000         mov dword ptr [esi + 0x160], eax
// 0089cd59  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 0089cd63  e8086df4ff           call 0x7e3a70
// 0089cd68  683f5d3800           push 0x385d3f
// 0089cd6d  8d8e00010000         lea ecx, [esi + 0x100]
// 0089cd73  e8f86cf4ff           call 0x7e3a70
// 0089cd78  d905e026a100         fld dword ptr [0xa126e0]
// 0089cd7e  51                   push ecx
// 0089cd7f  d91c24               fstp dword ptr [esp]
// 0089cd82  68fcfefe00           push 0xfefefc
// 0089cd87  68f2f1e400           push 0xe4f1f2
// 0089cd8c  8bcf                 mov ecx, edi
// 0089cd8e  e87d62f4ff           call 0x7e3010
// 0089cd93  d905e026a100         fld dword ptr [0xa126e0]
// 0089cd99  51                   push ecx
// 0089cd9a  d91c24               fstp dword ptr [esp]
// 0089cd9d  68f2f1e400           push 0xe4f1f2
// 0089cda2  68d9d9a700           push 0xa7d9d9
// 0089cda7  8bcb                 mov ecx, ebx
// 0089cda9  c7869c000000d0deaa00 mov dword ptr [esi + 0x9c], 0xaaded0
// 0089cdb3  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 0089cdba  c78684000000fff0c700 mov dword ptr [esi + 0x84], 0xc7f0ff
// 0089cdc4  e84762f4ff           call 0x7e3010
// 0089cdc9  c7860c0200003f5d3800 mov dword ptr [esi + 0x20c], 0x385d3f
// 0089cdd3  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 0089cddd  e9ce000000           jmp 0x89ceb0
// 0089cde2  b87c7c9400           mov eax, 0x947c7c
// 0089cde7  894648               mov dword ptr [esi + 0x48], eax
// 0089cdea  898654010000         mov dword ptr [esi + 0x154], eax
// 0089cdf0  b876749200           mov eax, 0x927476
// 0089cdf5  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0089cdfb  898648010000         mov dword ptr [esi + 0x148], eax
// 0089ce01  b8bab9ce00           mov eax, 0xceb9ba
// 0089ce06  68ffc06f00           push 0x6fc0ff
// 0089ce0b  8bcd                 mov ecx, ebp
// 0089ce0d  898630010000         mov dword ptr [esi + 0x130], eax
// 0089ce13  898660010000         mov dword ptr [esi + 0x160], eax
// 0089ce19  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 0089ce23  e8486cf4ff           call 0x7e3a70
// 0089ce28  684b4b6f00           push 0x6f4b4b
// 0089ce2d  8d8e00010000         lea ecx, [esi + 0x100]
// 0089ce33  e8386cf4ff           call 0x7e3a70
// 0089ce38  d905e026a100         fld dword ptr [0xa126e0]
// 0089ce3e  51                   push ecx
// 0089ce3f  d91c24               fstp dword ptr [esp]
// 0089ce42  68fcfefe00           push 0xfefefc
// 0089ce47  68f3f3f700           push 0xf7f3f3
// 0089ce4c  8bcf                 mov ecx, edi
// 0089ce4e  e8bd61f4ff           call 0x7e3010
// 0089ce53  d905e026a100         fld dword ptr [0xa126e0]
// 0089ce59  51                   push ecx
// 0089ce5a  d91c24               fstp dword ptr [esp]
// 0089ce5d  68f3f3f700           push 0xf7f3f3
// 0089ce62  68d7d7e500           push 0xe5d7d7
// 0089ce67  8bcb                 mov ecx, ebx
// 0089ce69  c7869c000000d9d9e600 mov dword ptr [esi + 0x9c], 0xe6d9d9
// 0089ce73  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 0089ce7a  c78684000000ffeec200 mov dword ptr [esi + 0x84], 0xc2eeff
// 0089ce84  e88761f4ff           call 0x7e3010
// 0089ce89  c7860c0200004b4b6f00 mov dword ptr [esi + 0x20c], 0x6f4b4b
// 0089ce93  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 0089ce9d  eb11                 jmp 0x89ceb0
// 0089ce9f  e87c6cf4ff           call 0x7e3b20
// 0089cea4  6a24                 push 0x24
// 0089cea6  8bc8                 mov ecx, eax
// 0089cea8  e80364f4ff           call 0x7e32b0
// 0089cead  894678               mov dword ptr [esi + 0x78], eax
// 0089ceb0  83be1402000000       cmp dword ptr [esi + 0x214], 0
// 0089ceb7  740a                 je 0x89cec3
// 0089ceb9  c78690000000fe8e4b00 mov dword ptr [esi + 0x90], 0x4b8efe
// 0089cec3  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0089cec6  83c9ff               or ecx, 0xffffffff
// 0089cec9  3bc1                 cmp eax, ecx
// 0089cecb  7503                 jne 0x89ced0
// 0089cecd  8b4648               mov eax, dword ptr [esi + 0x48]
// 0089ced0  898690010000         mov dword ptr [esi + 0x190], eax
// 0089ced6  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0089ced9  3bc1                 cmp eax, ecx
// 0089cedb  7503                 jne 0x89cee0
// 0089cedd  8b4648               mov eax, dword ptr [esi + 0x48]
// 0089cee0  898678010000         mov dword ptr [esi + 0x178], eax
// 0089cee6  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0089cee9  3bc1                 cmp eax, ecx
// 0089ceeb  7503                 jne 0x89cef0
// 0089ceed  8b4648               mov eax, dword ptr [esi + 0x48]
// 0089cef0  898eb4010000         mov dword ptr [esi + 0x1b4], ecx
// 0089cef6  898ea8010000         mov dword ptr [esi + 0x1a8], ecx
// 0089cefc  898e9c010000         mov dword ptr [esi + 0x19c], ecx
// 0089cf02  898684010000         mov dword ptr [esi + 0x184], eax
// 0089cf08  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 0089cf0e  8996c4010000         mov dword ptr [esi + 0x1c4], edx
// 0089cf14  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0089cf1a  8986c0010000         mov dword ptr [esi + 0x1c0], eax
// 0089cf20  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 0089cf26  898ed0010000         mov dword ptr [esi + 0x1d0], ecx
// 0089cf2c  8b9684010000         mov edx, dword ptr [esi + 0x184]
// 0089cf32  8996cc010000         mov dword ptr [esi + 0x1cc], edx
// 0089cf38  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0089cf3e  8986dc010000         mov dword ptr [esi + 0x1dc], eax
// 0089cf44  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0089cf4a  898ed8010000         mov dword ptr [esi + 0x1d8], ecx
// 0089cf50  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 0089cf56  8996e8010000         mov dword ptr [esi + 0x1e8], edx
// 0089cf5c  8b869c010000         mov eax, dword ptr [esi + 0x19c]
// 0089cf62  8986e4010000         mov dword ptr [esi + 0x1e4], eax
// 0089cf68  8b8eac010000         mov ecx, dword ptr [esi + 0x1ac]
// 0089cf6e  898ef4010000         mov dword ptr [esi + 0x1f4], ecx
// 0089cf74  8b96a8010000         mov edx, dword ptr [esi + 0x1a8]
// 0089cf7a  8996f0010000         mov dword ptr [esi + 0x1f0], edx
// 0089cf80  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 0089cf86  898600020000         mov dword ptr [esi + 0x200], eax
// 0089cf8c  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 0089cf92  898efc010000         mov dword ptr [esi + 0x1fc], ecx
// 0089cf98  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0089cf9e  e83d97c3ff           call 0x4d66e0
// 0089cfa3  83f804               cmp eax, 4
// 0089cfa6  752c                 jne 0x89cfd4
// 0089cfa8  e8736bf4ff           call 0x7e3b20
// 0089cfad  6a0f                 push 0xf
// 0089cfaf  8bc8                 mov ecx, eax
// 0089cfb1  e8fa62f4ff           call 0x7e32b0
// 0089cfb6  50                   push eax
// 0089cfb7  8bcb                 mov ecx, ebx
// 0089cfb9  e8b26af4ff           call 0x7e3a70
// 0089cfbe  e85d6bf4ff           call 0x7e3b20
// 0089cfc3  6a0f                 push 0xf
// 0089cfc5  8bc8                 mov ecx, eax
// 0089cfc7  e8e462f4ff           call 0x7e32b0
// 0089cfcc  50                   push eax
// 0089cfcd  8bcf                 mov ecx, edi
// 0089cfcf  e89c6af4ff           call 0x7e3a70
// 0089cfd4  5f                   pop edi
// 0089cfd5  5e                   pop esi
// 0089cfd6  5d                   pop ebp
// 0089cfd7  5b                   pop ebx
// 0089cfd8  83c408               add esp, 8
// 0089cfdb  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetOffice2003@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp