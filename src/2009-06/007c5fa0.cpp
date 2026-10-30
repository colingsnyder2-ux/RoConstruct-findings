// roc 2009-06 007c5fa0  unit: CXTPReportPaintManager  size: 1251 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c5fa0
//
// 007c5fa0  6aff                 push -1
// 007c5fa2  6864df8700           push 0x87df64
// 007c5fa7  64a100000000         mov eax, dword ptr fs:[0]
// 007c5fad  50                   push eax
// 007c5fae  83ec50               sub esp, 0x50
// 007c5fb1  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007c5fb6  33c4                 xor eax, esp
// 007c5fb8  8944244c             mov dword ptr [esp + 0x4c], eax
// 007c5fbc  53                   push ebx
// 007c5fbd  55                   push ebp
// 007c5fbe  56                   push esi
// 007c5fbf  57                   push edi
// 007c5fc0  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007c5fc5  33c4                 xor eax, esp
// 007c5fc7  50                   push eax
// 007c5fc8  8d442464             lea eax, [esp + 0x64]
// 007c5fcc  64a300000000         mov dword ptr fs:[0], eax
// 007c5fd2  8bf1                 mov esi, ecx
// 007c5fd4  89742420             mov dword ptr [esp + 0x20], esi
// 007c5fd8  e84d5f0800           call 0x84bf2a
// 007c5fdd  33ff                 xor edi, edi
// 007c5fdf  c7061c4e9000         mov dword ptr [esi], 0x904e1c
// 007c5fe5  b8e8bb8b00           mov eax, 0x8bbbe8
// 007c5fea  897c246c             mov dword ptr [esp + 0x6c], edi
// 007c5fee  897e24               mov dword ptr [esi + 0x24], edi
// 007c5ff1  894620               mov dword ptr [esi + 0x20], eax
// 007c5ff4  897e2c               mov dword ptr [esi + 0x2c], edi
// 007c5ff7  894628               mov dword ptr [esi + 0x28], eax
// 007c5ffa  897e34               mov dword ptr [esi + 0x34], edi
// 007c5ffd  894630               mov dword ptr [esi + 0x30], eax
// 007c6000  897e3c               mov dword ptr [esi + 0x3c], edi
// 007c6003  894638               mov dword ptr [esi + 0x38], eax
// 007c6006  8d4e40               lea ecx, [esi + 0x40]
// 007c6009  c644246c04           mov byte ptr [esp + 0x6c], 4
// 007c600e  e89ddff8ff           call 0x753fb0
// 007c6013  8d4e4c               lea ecx, [esi + 0x4c]
// 007c6016  e895dff8ff           call 0x753fb0
// 007c601b  8d4e58               lea ecx, [esi + 0x58]
// 007c601e  e88ddff8ff           call 0x753fb0
// 007c6023  8d4e64               lea ecx, [esi + 0x64]
// 007c6026  e885dff8ff           call 0x753fb0
// 007c602b  8d4e70               lea ecx, [esi + 0x70]
// 007c602e  e87ddff8ff           call 0x753fb0
// 007c6033  8d4e7c               lea ecx, [esi + 0x7c]
// 007c6036  e875dff8ff           call 0x753fb0
// 007c603b  8d8e88000000         lea ecx, [esi + 0x88]
// 007c6041  e86adff8ff           call 0x753fb0
// 007c6046  8d8e94000000         lea ecx, [esi + 0x94]
// 007c604c  e85fdff8ff           call 0x753fb0
// 007c6051  8d8ea0000000         lea ecx, [esi + 0xa0]
// 007c6057  e854dff8ff           call 0x753fb0
// 007c605c  8d8eac000000         lea ecx, [esi + 0xac]
// 007c6062  e849dff8ff           call 0x753fb0
// 007c6067  8d8eb8000000         lea ecx, [esi + 0xb8]
// 007c606d  e83edff8ff           call 0x753fb0
// 007c6072  8d8ec4000000         lea ecx, [esi + 0xc4]
// 007c6078  e833dff8ff           call 0x753fb0
// 007c607d  8d8ed0000000         lea ecx, [esi + 0xd0]
// 007c6083  e828dff8ff           call 0x753fb0
// 007c6088  8d8edc000000         lea ecx, [esi + 0xdc]
// 007c608e  e81ddff8ff           call 0x753fb0
// 007c6093  8d8ee8000000         lea ecx, [esi + 0xe8]
// 007c6099  e812dff8ff           call 0x753fb0
// 007c609e  8d8ef4000000         lea ecx, [esi + 0xf4]
// 007c60a4  e807dff8ff           call 0x753fb0
// 007c60a9  8d8e00010000         lea ecx, [esi + 0x100]
// 007c60af  e8fcdef8ff           call 0x753fb0
// 007c60b4  8d8e0c010000         lea ecx, [esi + 0x10c]
// 007c60ba  e8f1def8ff           call 0x753fb0
// 007c60bf  8d8e18010000         lea ecx, [esi + 0x118]
// 007c60c5  e8e6def8ff           call 0x753fb0
// 007c60ca  8d8e24010000         lea ecx, [esi + 0x124]
// 007c60d0  e8dbdef8ff           call 0x753fb0
// 007c60d5  8d8e30010000         lea ecx, [esi + 0x130]
// 007c60db  e8d0def8ff           call 0x753fb0
// 007c60e0  8d8e3c010000         lea ecx, [esi + 0x13c]
// 007c60e6  e8c5def8ff           call 0x753fb0
// 007c60eb  8d8e48010000         lea ecx, [esi + 0x148]
// 007c60f1  e8badef8ff           call 0x753fb0
// 007c60f6  8d8e54010000         lea ecx, [esi + 0x154]
// 007c60fc  e8cfdef8ff           call 0x753fd0
// 007c6101  8d8e74010000         lea ecx, [esi + 0x174]
// 007c6107  e8c4def8ff           call 0x753fd0
// 007c610c  8d8e94010000         lea ecx, [esi + 0x194]
// 007c6112  e8b9def8ff           call 0x753fd0
// 007c6117  8d8eb4010000         lea ecx, [esi + 0x1b4]
// 007c611d  e88edef8ff           call 0x753fb0
// 007c6122  8d8ec0010000         lea ecx, [esi + 0x1c0]
// 007c6128  e883def8ff           call 0x753fb0
// 007c612d  8d8ecc010000         lea ecx, [esi + 0x1cc]
// 007c6133  e878def8ff           call 0x753fb0
// 007c6138  8d8ed8010000         lea ecx, [esi + 0x1d8]
// 007c613e  e86ddef8ff           call 0x753fb0
// 007c6143  8d8ee4010000         lea ecx, [esi + 0x1e4]
// 007c6149  e862def8ff           call 0x753fb0
// 007c614e  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 007c6154  e857def8ff           call 0x753fb0
// 007c6159  8d8e14020000         lea ecx, [esi + 0x214]
// 007c615f  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007c6165  8d9e18020000         lea ebx, [esi + 0x218]
// 007c616b  8bcb                 mov ecx, ebx
// 007c616d  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007c6173  8d8e1c020000         lea ecx, [esi + 0x21c]
// 007c6179  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007c617f  8d8e20020000         lea ecx, [esi + 0x220]
// 007c6185  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007c618b  8d8e70020000         lea ecx, [esi + 0x270]
// 007c6191  c644246c08           mov byte ptr [esp + 0x6c], 8
// 007c6196  e84d30f5ff           call 0x7191e8
// 007c619b  b878ec8a00           mov eax, 0x8aec78
// 007c61a0  89be90020000         mov dword ptr [esi + 0x290], edi
// 007c61a6  89868c020000         mov dword ptr [esi + 0x28c], eax
// 007c61ac  89be98020000         mov dword ptr [esi + 0x298], edi
// 007c61b2  898694020000         mov dword ptr [esi + 0x294], eax
// 007c61b8  89bea0020000         mov dword ptr [esi + 0x2a0], edi
// 007c61be  89869c020000         mov dword ptr [esi + 0x29c], eax
// 007c61c4  bd01000000           mov ebp, 1
// 007c61c9  55                   push ebp
// 007c61ca  8d8ec0020000         lea ecx, [esi + 0x2c0]
// 007c61d0  c64424700c           mov byte ptr [esp + 0x70], 0xc
// 007c61d5  e846a5fcff           call 0x790720
// 007c61da  55                   push ebp
// 007c61db  8d8ecc020000         lea ecx, [esi + 0x2cc]
// 007c61e1  c64424700d           mov byte ptr [esp + 0x70], 0xd
// 007c61e6  e835a5fcff           call 0x790720
// 007c61eb  55                   push ebp
// 007c61ec  8d8ed8020000         lea ecx, [esi + 0x2d8]
// 007c61f2  c64424700e           mov byte ptr [esp + 0x70], 0xe
// 007c61f7  e824a5fcff           call 0x790720
// 007c61fc  6a2c                 push 0x2c
// 007c61fe  c64424700f           mov byte ptr [esp + 0x70], 0xf
// 007c6203  e83028f5ff           call 0x718a38
// 007c6208  83c404               add esp, 4
// 007c620b  8944241c             mov dword ptr [esp + 0x1c], eax
// 007c620f  c644246c10           mov byte ptr [esp + 0x6c], 0x10
// 007c6214  3bc7                 cmp eax, edi
// 007c6216  7409                 je 0x7c6221
// 007c6218  8bc8                 mov ecx, eax
// 007c621a  e85195ffff           call 0x7bf770
// 007c621f  eb02                 jmp 0x7c6223
// 007c6221  33c0                 xor eax, eax
// 007c6223  6a08                 push 8
// 007c6225  8986e4020000         mov dword ptr [esi + 0x2e4], eax
// 007c622b  8b10                 mov edx, dword ptr [eax]
// 007c622d  6a0a                 push 0xa
// 007c622f  8bc8                 mov ecx, eax
// 007c6231  8b425c               mov eax, dword ptr [edx + 0x5c]
// 007c6234  6a0b                 push 0xb
// 007c6236  c64424780f           mov byte ptr [esp + 0x78], 0xf
// 007c623b  ffd0                 call eax
// 007c623d  b80c000000           mov eax, 0xc
// 007c6242  8bc8                 mov ecx, eax
// 007c6244  c786340100000000ff00 mov dword ptr [esi + 0x134], 0xff0000
// 007c624e  c786fc010000ffffffff mov dword ptr [esi + 0x1fc], 0xffffffff
// 007c6258  c7868002000003000000 mov dword ptr [esi + 0x280], 3
// 007c6262  898684020000         mov dword ptr [esi + 0x284], eax
// 007c6268  898e88020000         mov dword ptr [esi + 0x288], ecx
// 007c626e  89ae5c020000         mov dword ptr [esi + 0x25c], ebp
// 007c6274  c7866c02000002000000 mov dword ptr [esi + 0x26c], 2
// 007c627e  89ae7c020000         mov dword ptr [esi + 0x27c], ebp
// 007c6284  89be78020000         mov dword ptr [esi + 0x278], edi
// 007c628a  89be04020000         mov dword ptr [esi + 0x204], edi
// 007c6290  89be00020000         mov dword ptr [esi + 0x200], edi
// 007c6296  89ae08020000         mov dword ptr [esi + 0x208], ebp
// 007c629c  89bebc020000         mov dword ptr [esi + 0x2bc], edi
// 007c62a2  89ae3c020000         mov dword ptr [esi + 0x23c], ebp
// 007c62a8  89ae40020000         mov dword ptr [esi + 0x240], ebp
// 007c62ae  89ae44020000         mov dword ptr [esi + 0x244], ebp
// 007c62b4  89beb4020000         mov dword ptr [esi + 0x2b4], edi
// 007c62ba  c786b802000004000000 mov dword ptr [esi + 0x2b8], 4
// 007c62c4  89be30020000         mov dword ptr [esi + 0x230], edi
// 007c62ca  89ae34020000         mov dword ptr [esi + 0x234], ebp
// 007c62d0  89be2c020000         mov dword ptr [esi + 0x22c], edi
// 007c62d6  89ae0c020000         mov dword ptr [esi + 0x20c], ebp
// 007c62dc  89ae10020000         mov dword ptr [esi + 0x210], ebp
// 007c62e2  e8594efdff           call 0x79b140
// 007c62e7  8b10                 mov edx, dword ptr [eax]
// 007c62e9  6851250000           push 0x2551
// 007c62ee  8d8e14020000         lea ecx, [esi + 0x214]
// 007c62f4  51                   push ecx
// 007c62f5  8bc8                 mov ecx, eax
// 007c62f7  8b4208               mov eax, dword ptr [edx + 8]
// 007c62fa  ffd0                 call eax
// 007c62fc  e83f4efdff           call 0x79b140
// 007c6301  8b10                 mov edx, dword ptr [eax]
// 007c6303  6850250000           push 0x2550
// 007c6308  8d8e1c020000         lea ecx, [esi + 0x21c]
// 007c630e  51                   push ecx
// 007c630f  8bc8                 mov ecx, eax
// 007c6311  8b4208               mov eax, dword ptr [edx + 8]
// 007c6314  ffd0                 call eax
// 007c6316  e8254efdff           call 0x79b140
// 007c631b  8b10                 mov edx, dword ptr [eax]
// 007c631d  6852250000           push 0x2552
// 007c6322  8d8e20020000         lea ecx, [esi + 0x220]
// 007c6328  51                   push ecx
// 007c6329  8bc8                 mov ecx, eax
// 007c632b  8b4208               mov eax, dword ptr [edx + 8]
// 007c632e  ffd0                 call eax
// 007c6330  e80b4efdff           call 0x79b140
// 007c6335  8b10                 mov edx, dword ptr [eax]
// 007c6337  6853250000           push 0x2553
// 007c633c  8bc8                 mov ecx, eax
// 007c633e  8b4208               mov eax, dword ptr [edx + 8]
// 007c6341  53                   push ebx
// 007c6342  ffd0                 call eax
// 007c6344  85c0                 test eax, eax
// 007c6346  740d                 je 0x7c6355
// 007c6348  68f8338b00           push 0x8b33f8
// 007c634d  8bcb                 mov ecx, ebx
// 007c634f  ff15f0f08900         call dword ptr [0x89f0f0]
// 007c6355  6a02                 push 2
// 007c6357  6a0a                 push 0xa
// 007c6359  57                   push edi
// 007c635a  6a0a                 push 0xa
// 007c635c  8d8e48020000         lea ecx, [esi + 0x248]
// 007c6362  51                   push ecx
// 007c6363  89be24020000         mov dword ptr [esi + 0x224], edi
// 007c6369  ff15a4ed8900         call dword ptr [0x89eda4]
// 007c636f  57                   push edi
// 007c6370  8d542428             lea edx, [esp + 0x28]
// 007c6374  52                   push edx
// 007c6375  6a3c                 push 0x3c
// 007c6377  6a1f                 push 0x1f
// 007c6379  c7865802000014000000 mov dword ptr [esi + 0x258], 0x14
// 007c6383  89ae28020000         mov dword ptr [esi + 0x228], ebp
// 007c6389  ff1564ee8900         call dword ptr [0x89ee64]
// 007c638f  8d442424             lea eax, [esp + 0x24]
// 007c6393  50                   push eax
// 007c6394  ff15ece08900         call dword ptr [0x89e0ec]
// 007c639a  50                   push eax
// 007c639b  8d4e38               lea ecx, [esi + 0x38]
// 007c639e  e85f2cf5ff           call 0x719002
// 007c63a3  8d4c2424             lea ecx, [esp + 0x24]
// 007c63a7  51                   push ecx
// 007c63a8  8bce                 mov ecx, esi
// 007c63aa  e8a1c9ffff           call 0x7c2d50
// 007c63af  8d542424             lea edx, [esp + 0x24]
// 007c63b3  52                   push edx
// 007c63b4  8bce                 mov ecx, esi
// 007c63b6  e8a5c8ffff           call 0x7c2c60
// 007c63bb  55                   push ebp
// 007c63bc  57                   push edi
// 007c63bd  6a19                 push 0x19
// 007c63bf  6a0c                 push 0xc
// 007c63c1  6a0c                 push 0xc
// 007c63c3  8d8e70020000         lea ecx, [esi + 0x270]
// 007c63c9  e8142ef5ff           call 0x7191e2
// 007c63ce  bb64f68a00           mov ebx, 0x8af664
// 007c63d3  897c2418             mov dword ptr [esp + 0x18], edi
// 007c63d7  895c2414             mov dword ptr [esp + 0x14], ebx
// 007c63db  c644246c11           mov byte ptr [esp + 0x6c], 0x11
// 007c63e0  e85b4dfdff           call 0x79b140
// 007c63e5  8b10                 mov edx, dword ptr [eax]
// 007c63e7  8b5214               mov edx, dword ptr [edx + 0x14]
// 007c63ea  684e250000           push 0x254e
// 007c63ef  8d4c2418             lea ecx, [esp + 0x18]
// 007c63f3  51                   push ecx
// 007c63f4  8bc8                 mov ecx, eax
// 007c63f6  ffd2                 call edx
// 007c63f8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007c63fc  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 007c6402  68ff00ff00           push 0xff00ff
// 007c6407  51                   push ecx
// 007c6408  50                   push eax
// 007c6409  e8e828f5ff           call 0x718cf6
// 007c640e  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 007c6414  8b0a                 mov ecx, dword ptr [edx]
// 007c6416  e855d2c4ff           call 0x413670
// 007c641b  8bce                 mov ecx, esi
// 007c641d  89aea8020000         mov dword ptr [esi + 0x2a8], ebp
// 007c6423  89beac020000         mov dword ptr [esi + 0x2ac], edi
// 007c6429  89beb0020000         mov dword ptr [esi + 0x2b0], edi
// 007c642f  c786a40200000d000000 mov dword ptr [esi + 0x2a4], 0xd
// 007c6439  89ae40020000         mov dword ptr [esi + 0x240], ebp
// 007c643f  89ae44020000         mov dword ptr [esi + 0x244], ebp
// 007c6445  89be38020000         mov dword ptr [esi + 0x238], edi
// 007c644b  e820eeffff           call 0x7c5270
// 007c6450  8d4c2414             lea ecx, [esp + 0x14]
// 007c6454  c644246c0f           mov byte ptr [esp + 0x6c], 0xf
// 007c6459  895c2414             mov dword ptr [esp + 0x14], ebx
// 007c645d  e86e90c4ff           call 0x40f4d0
// 007c6462  8bc6                 mov eax, esi
// 007c6464  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007c6468  64890d00000000       mov dword ptr fs:[0], ecx
// 007c646f  59                   pop ecx
// 007c6470  5f                   pop edi
// 007c6471  5e                   pop esi
// 007c6472  5d                   pop ebp
// 007c6473  5b                   pop ebx
// 007c6474  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007c6478  33cc                 xor ecx, esp
// 007c647a  e8fb40f5ff           call 0x71a57a
// 007c647f  83c45c               add esp, 0x5c
// 007c6482  c3                   ret 
// copied from an identical function in another client (function ??0CXTPReportPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp