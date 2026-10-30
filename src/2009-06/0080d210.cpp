// roc 2009-06 0080d210  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 1232 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080d210
//
// 0080d210  83ec08               sub esp, 8
// 0080d213  53                   push ebx
// 0080d214  55                   push ebp
// 0080d215  56                   push esi
// 0080d216  57                   push edi
// 0080d217  8bf1                 mov esi, ecx
// 0080d219  e842f4ffff           call 0x80c660
// 0080d21e  e8fd78f4ff           call 0x754b20
// 0080d223  6a05                 push 5
// 0080d225  8bc8                 mov ecx, eax
// 0080d227  e87470f4ff           call 0x7542a0
// 0080d22c  8bd8                 mov ebx, eax
// 0080d22e  e8ed78f4ff           call 0x754b20
// 0080d233  6a0f                 push 0xf
// 0080d235  8bc8                 mov ecx, eax
// 0080d237  e86470f4ff           call 0x7542a0
// 0080d23c  8be8                 mov ebp, eax
// 0080d23e  e8dd78f4ff           call 0x754b20
// 0080d243  89442410             mov dword ptr [esp + 0x10], eax
// 0080d247  e8d478f4ff           call 0x754b20
// 0080d24c  6a0f                 push 0xf
// 0080d24e  8bc8                 mov ecx, eax
// 0080d250  e84b70f4ff           call 0x7542a0
// 0080d255  d9054cad8b00         fld dword ptr [0x8bad4c]
// 0080d25b  51                   push ecx
// 0080d25c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080d260  d91c24               fstp dword ptr [esp]
// 0080d263  68cd000000           push 0xcd
// 0080d268  53                   push ebx
// 0080d269  55                   push ebp
// 0080d26a  89442424             mov dword ptr [esp + 0x24], eax
// 0080d26e  8d7e04               lea edi, [esi + 4]
// 0080d271  e87a6ff4ff           call 0x7541f0
// 0080d276  50                   push eax
// 0080d277  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0080d27b  50                   push eax
// 0080d27c  8bcf                 mov ecx, edi
// 0080d27e  e87d6df4ff           call 0x754000
// 0080d283  e89878f4ff           call 0x754b20
// 0080d288  6a24                 push 0x24
// 0080d28a  8bc8                 mov ecx, eax
// 0080d28c  8daee0000000         lea ebp, [esi + 0xe0]
// 0080d292  e80970f4ff           call 0x7542a0
// 0080d297  50                   push eax
// 0080d298  8bcd                 mov ecx, ebp
// 0080d29a  e8d177f4ff           call 0x754a70
// 0080d29f  e87c78f4ff           call 0x754b20
// 0080d2a4  6a25                 push 0x25
// 0080d2a6  8bc8                 mov ecx, eax
// 0080d2a8  8d9e00010000         lea ebx, [esi + 0x100]
// 0080d2ae  e8ed6ff4ff           call 0x7542a0
// 0080d2b3  50                   push eax
// 0080d2b4  8bcb                 mov ecx, ebx
// 0080d2b6  e8b577f4ff           call 0x754a70
// 0080d2bb  e86078f4ff           call 0x754b20
// 0080d2c0  6a24                 push 0x24
// 0080d2c2  8bc8                 mov ecx, eax
// 0080d2c4  e8d76ff4ff           call 0x7542a0
// 0080d2c9  898684000000         mov dword ptr [esi + 0x84], eax
// 0080d2cf  e84c78f4ff           call 0x754b20
// 0080d2d4  6a21                 push 0x21
// 0080d2d6  8bc8                 mov ecx, eax
// 0080d2d8  e8c36ff4ff           call 0x7542a0
// 0080d2dd  898690000000         mov dword ptr [esi + 0x90], eax
// 0080d2e3  e83878f4ff           call 0x754b20
// 0080d2e8  6a12                 push 0x12
// 0080d2ea  8bc8                 mov ecx, eax
// 0080d2ec  e8af6ff4ff           call 0x7542a0
// 0080d2f1  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0080d2f7  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0080d2fa  894e30               mov dword ptr [esi + 0x30], ecx
// 0080d2fd  8b5708               mov edx, dword ptr [edi + 8]
// 0080d300  8d5e24               lea ebx, [esi + 0x24]
// 0080d303  895308               mov dword ptr [ebx + 8], edx
// 0080d306  8b4718               mov eax, dword ptr [edi + 0x18]
// 0080d309  894318               mov dword ptr [ebx + 0x18], eax
// 0080d30c  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0080d30f  894b14               mov dword ptr [ebx + 0x14], ecx
// 0080d312  d9471c               fld dword ptr [edi + 0x1c]
// 0080d315  d95b1c               fstp dword ptr [ebx + 0x1c]
// 0080d318  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0080d31e  c7861402000000000000 mov dword ptr [esi + 0x214], 0
// 0080d328  e8c388feff           call 0x7f5bf0
// 0080d32d  85c0                 test eax, eax
// 0080d32f  0f856b020000         jne 0x80d5a0
// 0080d335  e8e677f4ff           call 0x754b20
// 0080d33a  8bc8                 mov ecx, eax
// 0080d33c  e88f75f4ff           call 0x7548d0
// 0080d341  48                   dec eax
// 0080d342  83f804               cmp eax, 4
// 0080d345  0f8744020000         ja 0x80d58f
// 0080d34b  ff2485ccd68000       jmp dword ptr [eax*4 + 0x80d6cc]
// 0080d352  b83b619c00           mov eax, 0x9c613b
// 0080d357  894648               mov dword ptr [esi + 0x48], eax
// 0080d35a  898654010000         mov dword ptr [esi + 0x154], eax
// 0080d360  b800359a00           mov eax, 0x9a3500
// 0080d365  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0080d36b  898648010000         mov dword ptr [esi + 0x148], eax
// 0080d371  b875a6f100           mov eax, 0xf1a675
// 0080d376  68ffc06f00           push 0x6fc0ff
// 0080d37b  8bcd                 mov ecx, ebp
// 0080d37d  898630010000         mov dword ptr [esi + 0x130], eax
// 0080d383  898660010000         mov dword ptr [esi + 0x160], eax
// 0080d389  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 0080d393  e8d876f4ff           call 0x754a70
// 0080d398  6800008000           push 0x800000
// 0080d39d  8d8e00010000         lea ecx, [esi + 0x100]
// 0080d3a3  e8c876f4ff           call 0x754a70
// 0080d3a8  d9054cad8b00         fld dword ptr [0x8bad4c]
// 0080d3ae  51                   push ecx
// 0080d3af  d91c24               fstp dword ptr [esp]
// 0080d3b2  68fcfdfe00           push 0xfefdfc
// 0080d3b7  68c4dafa00           push 0xfadac4
// 0080d3bc  8bcf                 mov ecx, edi
// 0080d3be  e83d6cf4ff           call 0x754000
// 0080d3c3  d9054cad8b00         fld dword ptr [0x8bad4c]
// 0080d3c9  51                   push ecx
// 0080d3ca  d91c24               fstp dword ptr [esp]
// 0080d3cd  68c4dafa00           push 0xfadac4
// 0080d3d2  689ebef500           push 0xf5be9e
// 0080d3d7  8bcb                 mov ecx, ebx
// 0080d3d9  c7869c000000a2c0f600 mov dword ptr [esi + 0x9c], 0xf6c0a2
// 0080d3e3  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 0080d3ea  c78684000000fff0c900 mov dword ptr [esi + 0x84], 0xc9f0ff
// 0080d3f4  e8076cf4ff           call 0x754000
// 0080d3f9  c7860c02000000008000 mov dword ptr [esi + 0x20c], 0x800000
// 0080d403  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 0080d40d  e98e010000           jmp 0x80d5a0
// 0080d412  b860805800           mov eax, 0x588060
// 0080d417  894648               mov dword ptr [esi + 0x48], eax
// 0080d41a  898654010000         mov dword ptr [esi + 0x154], eax
// 0080d420  b860776b00           mov eax, 0x6b7760
// 0080d425  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0080d42b  898648010000         mov dword ptr [esi + 0x148], eax
// 0080d431  b8b0c28c00           mov eax, 0x8cc2b0
// 0080d436  68ffc06f00           push 0x6fc0ff
// 0080d43b  8bcd                 mov ecx, ebp
// 0080d43d  898630010000         mov dword ptr [esi + 0x130], eax
// 0080d443  898660010000         mov dword ptr [esi + 0x160], eax
// 0080d449  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 0080d453  e81876f4ff           call 0x754a70
// 0080d458  683f5d3800           push 0x385d3f
// 0080d45d  8d8e00010000         lea ecx, [esi + 0x100]
// 0080d463  e80876f4ff           call 0x754a70
// 0080d468  d9054cad8b00         fld dword ptr [0x8bad4c]
// 0080d46e  51                   push ecx
// 0080d46f  d91c24               fstp dword ptr [esp]
// 0080d472  68fcfefe00           push 0xfefefc
// 0080d477  68f2f1e400           push 0xe4f1f2
// 0080d47c  8bcf                 mov ecx, edi
// 0080d47e  e87d6bf4ff           call 0x754000
// 0080d483  d9054cad8b00         fld dword ptr [0x8bad4c]
// 0080d489  51                   push ecx
// 0080d48a  d91c24               fstp dword ptr [esp]
// 0080d48d  68f2f1e400           push 0xe4f1f2
// 0080d492  68d9d9a700           push 0xa7d9d9
// 0080d497  8bcb                 mov ecx, ebx
// 0080d499  c7869c000000d0deaa00 mov dword ptr [esi + 0x9c], 0xaaded0
// 0080d4a3  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 0080d4aa  c78684000000fff0c700 mov dword ptr [esi + 0x84], 0xc7f0ff
// 0080d4b4  e8476bf4ff           call 0x754000
// 0080d4b9  c7860c0200003f5d3800 mov dword ptr [esi + 0x20c], 0x385d3f
// 0080d4c3  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 0080d4cd  e9ce000000           jmp 0x80d5a0
// 0080d4d2  b87c7c9400           mov eax, 0x947c7c
// 0080d4d7  894648               mov dword ptr [esi + 0x48], eax
// 0080d4da  898654010000         mov dword ptr [esi + 0x154], eax
// 0080d4e0  b876749200           mov eax, 0x927476
// 0080d4e5  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0080d4eb  898648010000         mov dword ptr [esi + 0x148], eax
// 0080d4f1  b8bab9ce00           mov eax, 0xceb9ba
// 0080d4f6  68ffc06f00           push 0x6fc0ff
// 0080d4fb  8bcd                 mov ecx, ebp
// 0080d4fd  898630010000         mov dword ptr [esi + 0x130], eax
// 0080d503  898660010000         mov dword ptr [esi + 0x160], eax
// 0080d509  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 0080d513  e85875f4ff           call 0x754a70
// 0080d518  684b4b6f00           push 0x6f4b4b
// 0080d51d  8d8e00010000         lea ecx, [esi + 0x100]
// 0080d523  e84875f4ff           call 0x754a70
// 0080d528  d9054cad8b00         fld dword ptr [0x8bad4c]
// 0080d52e  51                   push ecx
// 0080d52f  d91c24               fstp dword ptr [esp]
// 0080d532  68fcfefe00           push 0xfefefc
// 0080d537  68f3f3f700           push 0xf7f3f3
// 0080d53c  8bcf                 mov ecx, edi
// 0080d53e  e8bd6af4ff           call 0x754000
// 0080d543  d9054cad8b00         fld dword ptr [0x8bad4c]
// 0080d549  51                   push ecx
// 0080d54a  d91c24               fstp dword ptr [esp]
// 0080d54d  68f3f3f700           push 0xf7f3f3
// 0080d552  68d7d7e500           push 0xe5d7d7
// 0080d557  8bcb                 mov ecx, ebx
// 0080d559  c7869c000000d9d9e600 mov dword ptr [esi + 0x9c], 0xe6d9d9
// 0080d563  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 0080d56a  c78684000000ffeec200 mov dword ptr [esi + 0x84], 0xc2eeff
// 0080d574  e8876af4ff           call 0x754000
// 0080d579  c7860c0200004b4b6f00 mov dword ptr [esi + 0x20c], 0x6f4b4b
// 0080d583  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 0080d58d  eb11                 jmp 0x80d5a0
// 0080d58f  e88c75f4ff           call 0x754b20
// 0080d594  6a24                 push 0x24
// 0080d596  8bc8                 mov ecx, eax
// 0080d598  e8036df4ff           call 0x7542a0
// 0080d59d  894678               mov dword ptr [esi + 0x78], eax
// 0080d5a0  83be1402000000       cmp dword ptr [esi + 0x214], 0
// 0080d5a7  740a                 je 0x80d5b3
// 0080d5a9  c78690000000fe8e4b00 mov dword ptr [esi + 0x90], 0x4b8efe
// 0080d5b3  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0080d5b6  83c9ff               or ecx, 0xffffffff
// 0080d5b9  3bc1                 cmp eax, ecx
// 0080d5bb  7503                 jne 0x80d5c0
// 0080d5bd  8b4648               mov eax, dword ptr [esi + 0x48]
// 0080d5c0  898690010000         mov dword ptr [esi + 0x190], eax
// 0080d5c6  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0080d5c9  3bc1                 cmp eax, ecx
// 0080d5cb  7503                 jne 0x80d5d0
// 0080d5cd  8b4648               mov eax, dword ptr [esi + 0x48]
// 0080d5d0  898678010000         mov dword ptr [esi + 0x178], eax
// 0080d5d6  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0080d5d9  3bc1                 cmp eax, ecx
// 0080d5db  7503                 jne 0x80d5e0
// 0080d5dd  8b4648               mov eax, dword ptr [esi + 0x48]
// 0080d5e0  898eb4010000         mov dword ptr [esi + 0x1b4], ecx
// 0080d5e6  898ea8010000         mov dword ptr [esi + 0x1a8], ecx
// 0080d5ec  898e9c010000         mov dword ptr [esi + 0x19c], ecx
// 0080d5f2  898684010000         mov dword ptr [esi + 0x184], eax
// 0080d5f8  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 0080d5fe  8996c4010000         mov dword ptr [esi + 0x1c4], edx
// 0080d604  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0080d60a  8986c0010000         mov dword ptr [esi + 0x1c0], eax
// 0080d610  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 0080d616  898ed0010000         mov dword ptr [esi + 0x1d0], ecx
// 0080d61c  8b9684010000         mov edx, dword ptr [esi + 0x184]
// 0080d622  8996cc010000         mov dword ptr [esi + 0x1cc], edx
// 0080d628  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0080d62e  8986dc010000         mov dword ptr [esi + 0x1dc], eax
// 0080d634  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0080d63a  898ed8010000         mov dword ptr [esi + 0x1d8], ecx
// 0080d640  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 0080d646  8996e8010000         mov dword ptr [esi + 0x1e8], edx
// 0080d64c  8b869c010000         mov eax, dword ptr [esi + 0x19c]
// 0080d652  8986e4010000         mov dword ptr [esi + 0x1e4], eax
// 0080d658  8b8eac010000         mov ecx, dword ptr [esi + 0x1ac]
// 0080d65e  898ef4010000         mov dword ptr [esi + 0x1f4], ecx
// 0080d664  8b96a8010000         mov edx, dword ptr [esi + 0x1a8]
// 0080d66a  8996f0010000         mov dword ptr [esi + 0x1f0], edx
// 0080d670  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 0080d676  898600020000         mov dword ptr [esi + 0x200], eax
// 0080d67c  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 0080d682  898efc010000         mov dword ptr [esi + 0x1fc], ecx
// 0080d688  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0080d68e  e88d86feff           call 0x7f5d20
// 0080d693  83f804               cmp eax, 4
// 0080d696  752c                 jne 0x80d6c4
// 0080d698  e88374f4ff           call 0x754b20
// 0080d69d  6a0f                 push 0xf
// 0080d69f  8bc8                 mov ecx, eax
// 0080d6a1  e8fa6bf4ff           call 0x7542a0
// 0080d6a6  50                   push eax
// 0080d6a7  8bcb                 mov ecx, ebx
// 0080d6a9  e8c273f4ff           call 0x754a70
// 0080d6ae  e86d74f4ff           call 0x754b20
// 0080d6b3  6a0f                 push 0xf
// 0080d6b5  8bc8                 mov ecx, eax
// 0080d6b7  e8e46bf4ff           call 0x7542a0
// 0080d6bc  50                   push eax
// 0080d6bd  8bcf                 mov ecx, edi
// 0080d6bf  e8ac73f4ff           call 0x754a70
// 0080d6c4  5f                   pop edi
// 0080d6c5  5e                   pop esi
// 0080d6c6  5d                   pop ebp
// 0080d6c7  5b                   pop ebx
// 0080d6c8  83c408               add esp, 8
// 0080d6cb  c3                   ret 
// 0080d6cc  52                   push edx
// 0080d6cd  d3800012d480         rol dword ptr [eax - 0x7f2bee00], cl
// 0080d6d3  00d2                 add dl, dl
// 0080d6d5  d480                 aam 0x80
// 0080d6d7  0052d3               add byte ptr [edx - 0x2d], dl
// 0080d6da  800052               add byte ptr [eax], 0x52
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetOffice2003@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp