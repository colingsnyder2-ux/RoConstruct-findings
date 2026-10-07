// roc 2008-06 0079cb80  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 1232 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079cb80
//
// 0079cb80  83ec08               sub esp, 8
// 0079cb83  53                   push ebx
// 0079cb84  55                   push ebp
// 0079cb85  56                   push esi
// 0079cb86  57                   push edi
// 0079cb87  8bf1                 mov esi, ecx
// 0079cb89  e842f4ffff           call 0x79bfd0
// 0079cb8e  e8ad31f4ff           call 0x6dfd40
// 0079cb93  6a05                 push 5
// 0079cb95  8bc8                 mov ecx, eax
// 0079cb97  e88429f4ff           call 0x6df520
// 0079cb9c  8bd8                 mov ebx, eax
// 0079cb9e  e89d31f4ff           call 0x6dfd40
// 0079cba3  6a0f                 push 0xf
// 0079cba5  8bc8                 mov ecx, eax
// 0079cba7  e87429f4ff           call 0x6df520
// 0079cbac  8be8                 mov ebp, eax
// 0079cbae  e88d31f4ff           call 0x6dfd40
// 0079cbb3  89442410             mov dword ptr [esp + 0x10], eax
// 0079cbb7  e88431f4ff           call 0x6dfd40
// 0079cbbc  6a0f                 push 0xf
// 0079cbbe  8bc8                 mov ecx, eax
// 0079cbc0  e85b29f4ff           call 0x6df520
// 0079cbc5  d905ac9b8100         fld dword ptr [0x819bac]
// 0079cbcb  51                   push ecx
// 0079cbcc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079cbd0  d91c24               fstp dword ptr [esp]
// 0079cbd3  68cd000000           push 0xcd
// 0079cbd8  53                   push ebx
// 0079cbd9  55                   push ebp
// 0079cbda  89442424             mov dword ptr [esp + 0x24], eax
// 0079cbde  8d7e04               lea edi, [esi + 4]
// 0079cbe1  e88a28f4ff           call 0x6df470
// 0079cbe6  50                   push eax
// 0079cbe7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0079cbeb  50                   push eax
// 0079cbec  8bcf                 mov ecx, edi
// 0079cbee  e88d26f4ff           call 0x6df280
// 0079cbf3  e84831f4ff           call 0x6dfd40
// 0079cbf8  6a24                 push 0x24
// 0079cbfa  8bc8                 mov ecx, eax
// 0079cbfc  8daee0000000         lea ebp, [esi + 0xe0]
// 0079cc02  e81929f4ff           call 0x6df520
// 0079cc07  50                   push eax
// 0079cc08  8bcd                 mov ecx, ebp
// 0079cc0a  e88130f4ff           call 0x6dfc90
// 0079cc0f  e82c31f4ff           call 0x6dfd40
// 0079cc14  6a25                 push 0x25
// 0079cc16  8bc8                 mov ecx, eax
// 0079cc18  8d9e00010000         lea ebx, [esi + 0x100]
// 0079cc1e  e8fd28f4ff           call 0x6df520
// 0079cc23  50                   push eax
// 0079cc24  8bcb                 mov ecx, ebx
// 0079cc26  e86530f4ff           call 0x6dfc90
// 0079cc2b  e81031f4ff           call 0x6dfd40
// 0079cc30  6a24                 push 0x24
// 0079cc32  8bc8                 mov ecx, eax
// 0079cc34  e8e728f4ff           call 0x6df520
// 0079cc39  898684000000         mov dword ptr [esi + 0x84], eax
// 0079cc3f  e8fc30f4ff           call 0x6dfd40
// 0079cc44  6a21                 push 0x21
// 0079cc46  8bc8                 mov ecx, eax
// 0079cc48  e8d328f4ff           call 0x6df520
// 0079cc4d  898690000000         mov dword ptr [esi + 0x90], eax
// 0079cc53  e8e830f4ff           call 0x6dfd40
// 0079cc58  6a12                 push 0x12
// 0079cc5a  8bc8                 mov ecx, eax
// 0079cc5c  e8bf28f4ff           call 0x6df520
// 0079cc61  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0079cc67  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0079cc6a  894e30               mov dword ptr [esi + 0x30], ecx
// 0079cc6d  8b5708               mov edx, dword ptr [edi + 8]
// 0079cc70  8d5e24               lea ebx, [esi + 0x24]
// 0079cc73  895308               mov dword ptr [ebx + 8], edx
// 0079cc76  8b4718               mov eax, dword ptr [edi + 0x18]
// 0079cc79  894318               mov dword ptr [ebx + 0x18], eax
// 0079cc7c  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0079cc7f  894b14               mov dword ptr [ebx + 0x14], ecx
// 0079cc82  d9471c               fld dword ptr [edi + 0x1c]
// 0079cc85  d95b1c               fstp dword ptr [ebx + 0x1c]
// 0079cc88  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0079cc8e  c7861402000000000000 mov dword ptr [esi + 0x214], 0
// 0079cc98  e8b308feff           call 0x77d550
// 0079cc9d  85c0                 test eax, eax
// 0079cc9f  0f856b020000         jne 0x79cf10
// 0079cca5  e89630f4ff           call 0x6dfd40
// 0079ccaa  8bc8                 mov ecx, eax
// 0079ccac  e88f2ef4ff           call 0x6dfb40
// 0079ccb1  48                   dec eax
// 0079ccb2  83f804               cmp eax, 4
// 0079ccb5  0f8744020000         ja 0x79ceff
// 0079ccbb  ff24853cd07900       jmp dword ptr [eax*4 + 0x79d03c]
// 0079ccc2  b83b619c00           mov eax, 0x9c613b
// 0079ccc7  894648               mov dword ptr [esi + 0x48], eax
// 0079ccca  898654010000         mov dword ptr [esi + 0x154], eax
// 0079ccd0  b800359a00           mov eax, 0x9a3500
// 0079ccd5  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0079ccdb  898648010000         mov dword ptr [esi + 0x148], eax
// 0079cce1  b875a6f100           mov eax, 0xf1a675
// 0079cce6  68ffc06f00           push 0x6fc0ff
// 0079cceb  8bcd                 mov ecx, ebp
// 0079cced  898630010000         mov dword ptr [esi + 0x130], eax
// 0079ccf3  898660010000         mov dword ptr [esi + 0x160], eax
// 0079ccf9  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 0079cd03  e8882ff4ff           call 0x6dfc90
// 0079cd08  6800008000           push 0x800000
// 0079cd0d  8d8e00010000         lea ecx, [esi + 0x100]
// 0079cd13  e8782ff4ff           call 0x6dfc90
// 0079cd18  d905ac9b8100         fld dword ptr [0x819bac]
// 0079cd1e  51                   push ecx
// 0079cd1f  d91c24               fstp dword ptr [esp]
// 0079cd22  68fcfdfe00           push 0xfefdfc
// 0079cd27  68c4dafa00           push 0xfadac4
// 0079cd2c  8bcf                 mov ecx, edi
// 0079cd2e  e84d25f4ff           call 0x6df280
// 0079cd33  d905ac9b8100         fld dword ptr [0x819bac]
// 0079cd39  51                   push ecx
// 0079cd3a  d91c24               fstp dword ptr [esp]
// 0079cd3d  68c4dafa00           push 0xfadac4
// 0079cd42  689ebef500           push 0xf5be9e
// 0079cd47  8bcb                 mov ecx, ebx
// 0079cd49  c7869c000000a2c0f600 mov dword ptr [esi + 0x9c], 0xf6c0a2
// 0079cd53  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 0079cd5a  c78684000000fff0c900 mov dword ptr [esi + 0x84], 0xc9f0ff
// 0079cd64  e81725f4ff           call 0x6df280
// 0079cd69  c7860c02000000008000 mov dword ptr [esi + 0x20c], 0x800000
// 0079cd73  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 0079cd7d  e98e010000           jmp 0x79cf10
// 0079cd82  b860805800           mov eax, 0x588060
// 0079cd87  894648               mov dword ptr [esi + 0x48], eax
// 0079cd8a  898654010000         mov dword ptr [esi + 0x154], eax
// 0079cd90  b860776b00           mov eax, 0x6b7760
// 0079cd95  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0079cd9b  898648010000         mov dword ptr [esi + 0x148], eax
// 0079cda1  b8b0c28c00           mov eax, 0x8cc2b0
// 0079cda6  68ffc06f00           push 0x6fc0ff
// 0079cdab  8bcd                 mov ecx, ebp
// 0079cdad  898630010000         mov dword ptr [esi + 0x130], eax
// 0079cdb3  898660010000         mov dword ptr [esi + 0x160], eax
// 0079cdb9  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 0079cdc3  e8c82ef4ff           call 0x6dfc90
// 0079cdc8  683f5d3800           push 0x385d3f
// 0079cdcd  8d8e00010000         lea ecx, [esi + 0x100]
// 0079cdd3  e8b82ef4ff           call 0x6dfc90
// 0079cdd8  d905ac9b8100         fld dword ptr [0x819bac]
// 0079cdde  51                   push ecx
// 0079cddf  d91c24               fstp dword ptr [esp]
// 0079cde2  68fcfefe00           push 0xfefefc
// 0079cde7  68f2f1e400           push 0xe4f1f2
// 0079cdec  8bcf                 mov ecx, edi
// 0079cdee  e88d24f4ff           call 0x6df280
// 0079cdf3  d905ac9b8100         fld dword ptr [0x819bac]
// 0079cdf9  51                   push ecx
// 0079cdfa  d91c24               fstp dword ptr [esp]
// 0079cdfd  68f2f1e400           push 0xe4f1f2
// 0079ce02  68d9d9a700           push 0xa7d9d9
// 0079ce07  8bcb                 mov ecx, ebx
// 0079ce09  c7869c000000d0deaa00 mov dword ptr [esi + 0x9c], 0xaaded0
// 0079ce13  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 0079ce1a  c78684000000fff0c700 mov dword ptr [esi + 0x84], 0xc7f0ff
// 0079ce24  e85724f4ff           call 0x6df280
// 0079ce29  c7860c0200003f5d3800 mov dword ptr [esi + 0x20c], 0x385d3f
// 0079ce33  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 0079ce3d  e9ce000000           jmp 0x79cf10
// 0079ce42  b87c7c9400           mov eax, 0x947c7c
// 0079ce47  894648               mov dword ptr [esi + 0x48], eax
// 0079ce4a  898654010000         mov dword ptr [esi + 0x154], eax
// 0079ce50  b876749200           mov eax, 0x927476
// 0079ce55  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0079ce5b  898648010000         mov dword ptr [esi + 0x148], eax
// 0079ce61  b8bab9ce00           mov eax, 0xceb9ba
// 0079ce66  68ffc06f00           push 0x6fc0ff
// 0079ce6b  8bcd                 mov ecx, ebp
// 0079ce6d  898630010000         mov dword ptr [esi + 0x130], eax
// 0079ce73  898660010000         mov dword ptr [esi + 0x160], eax
// 0079ce79  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 0079ce83  e8082ef4ff           call 0x6dfc90
// 0079ce88  684b4b6f00           push 0x6f4b4b
// 0079ce8d  8d8e00010000         lea ecx, [esi + 0x100]
// 0079ce93  e8f82df4ff           call 0x6dfc90
// 0079ce98  d905ac9b8100         fld dword ptr [0x819bac]
// 0079ce9e  51                   push ecx
// 0079ce9f  d91c24               fstp dword ptr [esp]
// 0079cea2  68fcfefe00           push 0xfefefc
// 0079cea7  68f3f3f700           push 0xf7f3f3
// 0079ceac  8bcf                 mov ecx, edi
// 0079ceae  e8cd23f4ff           call 0x6df280
// 0079ceb3  d905ac9b8100         fld dword ptr [0x819bac]
// 0079ceb9  51                   push ecx
// 0079ceba  d91c24               fstp dword ptr [esp]
// 0079cebd  68f3f3f700           push 0xf7f3f3
// 0079cec2  68d7d7e500           push 0xe5d7d7
// 0079cec7  8bcb                 mov ecx, ebx
// 0079cec9  c7869c000000d9d9e600 mov dword ptr [esi + 0x9c], 0xe6d9d9
// 0079ced3  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 0079ceda  c78684000000ffeec200 mov dword ptr [esi + 0x84], 0xc2eeff
// 0079cee4  e89723f4ff           call 0x6df280
// 0079cee9  c7860c0200004b4b6f00 mov dword ptr [esi + 0x20c], 0x6f4b4b
// 0079cef3  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 0079cefd  eb11                 jmp 0x79cf10
// 0079ceff  e83c2ef4ff           call 0x6dfd40
// 0079cf04  6a24                 push 0x24
// 0079cf06  8bc8                 mov ecx, eax
// 0079cf08  e81326f4ff           call 0x6df520
// 0079cf0d  894678               mov dword ptr [esi + 0x78], eax
// 0079cf10  83be1402000000       cmp dword ptr [esi + 0x214], 0
// 0079cf17  740a                 je 0x79cf23
// 0079cf19  c78690000000fe8e4b00 mov dword ptr [esi + 0x90], 0x4b8efe
// 0079cf23  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0079cf26  83c9ff               or ecx, 0xffffffff
// 0079cf29  3bc1                 cmp eax, ecx
// 0079cf2b  7503                 jne 0x79cf30
// 0079cf2d  8b4648               mov eax, dword ptr [esi + 0x48]
// 0079cf30  898690010000         mov dword ptr [esi + 0x190], eax
// 0079cf36  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0079cf39  3bc1                 cmp eax, ecx
// 0079cf3b  7503                 jne 0x79cf40
// 0079cf3d  8b4648               mov eax, dword ptr [esi + 0x48]
// 0079cf40  898678010000         mov dword ptr [esi + 0x178], eax
// 0079cf46  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0079cf49  3bc1                 cmp eax, ecx
// 0079cf4b  7503                 jne 0x79cf50
// 0079cf4d  8b4648               mov eax, dword ptr [esi + 0x48]
// 0079cf50  898eb4010000         mov dword ptr [esi + 0x1b4], ecx
// 0079cf56  898ea8010000         mov dword ptr [esi + 0x1a8], ecx
// 0079cf5c  898e9c010000         mov dword ptr [esi + 0x19c], ecx
// 0079cf62  898684010000         mov dword ptr [esi + 0x184], eax
// 0079cf68  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 0079cf6e  8996c4010000         mov dword ptr [esi + 0x1c4], edx
// 0079cf74  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0079cf7a  8986c0010000         mov dword ptr [esi + 0x1c0], eax
// 0079cf80  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 0079cf86  898ed0010000         mov dword ptr [esi + 0x1d0], ecx
// 0079cf8c  8b9684010000         mov edx, dword ptr [esi + 0x184]
// 0079cf92  8996cc010000         mov dword ptr [esi + 0x1cc], edx
// 0079cf98  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0079cf9e  8986dc010000         mov dword ptr [esi + 0x1dc], eax
// 0079cfa4  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0079cfaa  898ed8010000         mov dword ptr [esi + 0x1d8], ecx
// 0079cfb0  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 0079cfb6  8996e8010000         mov dword ptr [esi + 0x1e8], edx
// 0079cfbc  8b869c010000         mov eax, dword ptr [esi + 0x19c]
// 0079cfc2  8986e4010000         mov dword ptr [esi + 0x1e4], eax
// 0079cfc8  8b8eac010000         mov ecx, dword ptr [esi + 0x1ac]
// 0079cfce  898ef4010000         mov dword ptr [esi + 0x1f4], ecx
// 0079cfd4  8b96a8010000         mov edx, dword ptr [esi + 0x1a8]
// 0079cfda  8996f0010000         mov dword ptr [esi + 0x1f0], edx
// 0079cfe0  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 0079cfe6  898600020000         mov dword ptr [esi + 0x200], eax
// 0079cfec  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 0079cff2  898efc010000         mov dword ptr [esi + 0x1fc], ecx
// 0079cff8  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0079cffe  e8bd40f7ff           call 0x7110c0
// 0079d003  83f804               cmp eax, 4
// 0079d006  752c                 jne 0x79d034
// 0079d008  e8332df4ff           call 0x6dfd40
// 0079d00d  6a0f                 push 0xf
// 0079d00f  8bc8                 mov ecx, eax
// 0079d011  e80a25f4ff           call 0x6df520
// 0079d016  50                   push eax
// 0079d017  8bcb                 mov ecx, ebx
// 0079d019  e8722cf4ff           call 0x6dfc90
// 0079d01e  e81d2df4ff           call 0x6dfd40
// 0079d023  6a0f                 push 0xf
// 0079d025  8bc8                 mov ecx, eax
// 0079d027  e8f424f4ff           call 0x6df520
// 0079d02c  50                   push eax
// 0079d02d  8bcf                 mov ecx, edi
// 0079d02f  e85c2cf4ff           call 0x6dfc90
// 0079d034  5f                   pop edi
// 0079d035  5e                   pop esi
// 0079d036  5d                   pop ebp
// 0079d037  5b                   pop ebx
// 0079d038  83c408               add esp, 8
// 0079d03b  c3                   ret 
// 0079d03c  c2cc79               ret 0x79cc
// 0079d03f  0082cd790042         add byte ptr [edx + 0x420079cd], al
// 0079d045  ce                   into 
// 0079d046  7900                 jns 0x79d048
// 0079d048  c2cc79               ret 0x79cc
// 0079d04b  00c2                 add dl, al
// 0079d04d  cc                   int3 
// 0079d04e  7900                 jns 0x79d050
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?RefreshMetrics@CColorSetOffice2003@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
