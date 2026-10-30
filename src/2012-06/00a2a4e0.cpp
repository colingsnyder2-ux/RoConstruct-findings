// roc 2012-06 00a2a4e0  unit: CXTPReportPaintManager  size: 1251 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2a4e0
//
// 00a2a4e0  6aff                 push -1
// 00a2a4e2  68844dae00           push 0xae4d84
// 00a2a4e7  64a100000000         mov eax, dword ptr fs:[0]
// 00a2a4ed  50                   push eax
// 00a2a4ee  83ec50               sub esp, 0x50
// 00a2a4f1  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a2a4f6  33c4                 xor eax, esp
// 00a2a4f8  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a2a4fc  53                   push ebx
// 00a2a4fd  55                   push ebp
// 00a2a4fe  56                   push esi
// 00a2a4ff  57                   push edi
// 00a2a500  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a2a505  33c4                 xor eax, esp
// 00a2a507  50                   push eax
// 00a2a508  8d442464             lea eax, [esp + 0x64]
// 00a2a50c  64a300000000         mov dword ptr fs:[0], eax
// 00a2a512  8bf1                 mov esi, ecx
// 00a2a514  89742420             mov dword ptr [esp + 0x20], esi
// 00a2a518  e867f00600           call 0xa99584
// 00a2a51d  33ff                 xor edi, edi
// 00a2a51f  c70634f6c100         mov dword ptr [esi], 0xc1f634
// 00a2a525  b85007b600           mov eax, 0xb60750
// 00a2a52a  897c246c             mov dword ptr [esp + 0x6c], edi
// 00a2a52e  897e24               mov dword ptr [esi + 0x24], edi
// 00a2a531  894620               mov dword ptr [esi + 0x20], eax
// 00a2a534  897e2c               mov dword ptr [esi + 0x2c], edi
// 00a2a537  894628               mov dword ptr [esi + 0x28], eax
// 00a2a53a  897e34               mov dword ptr [esi + 0x34], edi
// 00a2a53d  894630               mov dword ptr [esi + 0x30], eax
// 00a2a540  897e3c               mov dword ptr [esi + 0x3c], edi
// 00a2a543  894638               mov dword ptr [esi + 0x38], eax
// 00a2a546  8d4e40               lea ecx, [esi + 0x40]
// 00a2a549  c644246c04           mov byte ptr [esp + 0x6c], 4
// 00a2a54e  e89d27f9ff           call 0x9bccf0
// 00a2a553  8d4e4c               lea ecx, [esi + 0x4c]
// 00a2a556  e89527f9ff           call 0x9bccf0
// 00a2a55b  8d4e58               lea ecx, [esi + 0x58]
// 00a2a55e  e88d27f9ff           call 0x9bccf0
// 00a2a563  8d4e64               lea ecx, [esi + 0x64]
// 00a2a566  e88527f9ff           call 0x9bccf0
// 00a2a56b  8d4e70               lea ecx, [esi + 0x70]
// 00a2a56e  e87d27f9ff           call 0x9bccf0
// 00a2a573  8d4e7c               lea ecx, [esi + 0x7c]
// 00a2a576  e87527f9ff           call 0x9bccf0
// 00a2a57b  8d8e88000000         lea ecx, [esi + 0x88]
// 00a2a581  e86a27f9ff           call 0x9bccf0
// 00a2a586  8d8e94000000         lea ecx, [esi + 0x94]
// 00a2a58c  e85f27f9ff           call 0x9bccf0
// 00a2a591  8d8ea0000000         lea ecx, [esi + 0xa0]
// 00a2a597  e85427f9ff           call 0x9bccf0
// 00a2a59c  8d8eac000000         lea ecx, [esi + 0xac]
// 00a2a5a2  e84927f9ff           call 0x9bccf0
// 00a2a5a7  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00a2a5ad  e83e27f9ff           call 0x9bccf0
// 00a2a5b2  8d8ec4000000         lea ecx, [esi + 0xc4]
// 00a2a5b8  e83327f9ff           call 0x9bccf0
// 00a2a5bd  8d8ed0000000         lea ecx, [esi + 0xd0]
// 00a2a5c3  e82827f9ff           call 0x9bccf0
// 00a2a5c8  8d8edc000000         lea ecx, [esi + 0xdc]
// 00a2a5ce  e81d27f9ff           call 0x9bccf0
// 00a2a5d3  8d8ee8000000         lea ecx, [esi + 0xe8]
// 00a2a5d9  e81227f9ff           call 0x9bccf0
// 00a2a5de  8d8ef4000000         lea ecx, [esi + 0xf4]
// 00a2a5e4  e80727f9ff           call 0x9bccf0
// 00a2a5e9  8d8e00010000         lea ecx, [esi + 0x100]
// 00a2a5ef  e8fc26f9ff           call 0x9bccf0
// 00a2a5f4  8d8e0c010000         lea ecx, [esi + 0x10c]
// 00a2a5fa  e8f126f9ff           call 0x9bccf0
// 00a2a5ff  8d8e18010000         lea ecx, [esi + 0x118]
// 00a2a605  e8e626f9ff           call 0x9bccf0
// 00a2a60a  8d8e24010000         lea ecx, [esi + 0x124]
// 00a2a610  e8db26f9ff           call 0x9bccf0
// 00a2a615  8d8e30010000         lea ecx, [esi + 0x130]
// 00a2a61b  e8d026f9ff           call 0x9bccf0
// 00a2a620  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00a2a626  e8c526f9ff           call 0x9bccf0
// 00a2a62b  8d8e48010000         lea ecx, [esi + 0x148]
// 00a2a631  e8ba26f9ff           call 0x9bccf0
// 00a2a636  8d8e54010000         lea ecx, [esi + 0x154]
// 00a2a63c  e8cf26f9ff           call 0x9bcd10
// 00a2a641  8d8e74010000         lea ecx, [esi + 0x174]
// 00a2a647  e8c426f9ff           call 0x9bcd10
// 00a2a64c  8d8e94010000         lea ecx, [esi + 0x194]
// 00a2a652  e8b926f9ff           call 0x9bcd10
// 00a2a657  8d8eb4010000         lea ecx, [esi + 0x1b4]
// 00a2a65d  e88e26f9ff           call 0x9bccf0
// 00a2a662  8d8ec0010000         lea ecx, [esi + 0x1c0]
// 00a2a668  e88326f9ff           call 0x9bccf0
// 00a2a66d  8d8ecc010000         lea ecx, [esi + 0x1cc]
// 00a2a673  e87826f9ff           call 0x9bccf0
// 00a2a678  8d8ed8010000         lea ecx, [esi + 0x1d8]
// 00a2a67e  e86d26f9ff           call 0x9bccf0
// 00a2a683  8d8ee4010000         lea ecx, [esi + 0x1e4]
// 00a2a689  e86226f9ff           call 0x9bccf0
// 00a2a68e  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 00a2a694  e85726f9ff           call 0x9bccf0
// 00a2a699  8d8e14020000         lea ecx, [esi + 0x214]
// 00a2a69f  ff158447b200         call dword ptr [0xb24784]
// 00a2a6a5  8d9e18020000         lea ebx, [esi + 0x218]
// 00a2a6ab  8bcb                 mov ecx, ebx
// 00a2a6ad  ff158447b200         call dword ptr [0xb24784]
// 00a2a6b3  8d8e1c020000         lea ecx, [esi + 0x21c]
// 00a2a6b9  ff158447b200         call dword ptr [0xb24784]
// 00a2a6bf  8d8e20020000         lea ecx, [esi + 0x220]
// 00a2a6c5  ff158447b200         call dword ptr [0xb24784]
// 00a2a6cb  8d8e70020000         lea ecx, [esi + 0x270]
// 00a2a6d1  c644246c08           mov byte ptr [esp + 0x6c], 8
// 00a2a6d6  e8b381f5ff           call 0x98288e
// 00a2a6db  b8b05fb400           mov eax, 0xb45fb0
// 00a2a6e0  89be90020000         mov dword ptr [esi + 0x290], edi
// 00a2a6e6  89868c020000         mov dword ptr [esi + 0x28c], eax
// 00a2a6ec  89be98020000         mov dword ptr [esi + 0x298], edi
// 00a2a6f2  898694020000         mov dword ptr [esi + 0x294], eax
// 00a2a6f8  89bea0020000         mov dword ptr [esi + 0x2a0], edi
// 00a2a6fe  89869c020000         mov dword ptr [esi + 0x29c], eax
// 00a2a704  bd01000000           mov ebp, 1
// 00a2a709  55                   push ebp
// 00a2a70a  8d8ec0020000         lea ecx, [esi + 0x2c0]
// 00a2a710  c64424700c           mov byte ptr [esp + 0x70], 0xc
// 00a2a715  e886adfcff           call 0x9f54a0
// 00a2a71a  55                   push ebp
// 00a2a71b  8d8ecc020000         lea ecx, [esi + 0x2cc]
// 00a2a721  c64424700d           mov byte ptr [esp + 0x70], 0xd
// 00a2a726  e875adfcff           call 0x9f54a0
// 00a2a72b  55                   push ebp
// 00a2a72c  8d8ed8020000         lea ecx, [esi + 0x2d8]
// 00a2a732  c64424700e           mov byte ptr [esp + 0x70], 0xe
// 00a2a737  e864adfcff           call 0x9f54a0
// 00a2a73c  6a2c                 push 0x2c
// 00a2a73e  c64424700f           mov byte ptr [esp + 0x70], 0xf
// 00a2a743  e8d279f5ff           call 0x98211a
// 00a2a748  83c404               add esp, 4
// 00a2a74b  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a2a74f  c644246c10           mov byte ptr [esp + 0x6c], 0x10
// 00a2a754  3bc7                 cmp eax, edi
// 00a2a756  7409                 je 0xa2a761
// 00a2a758  8bc8                 mov ecx, eax
// 00a2a75a  e85195ffff           call 0xa23cb0
// 00a2a75f  eb02                 jmp 0xa2a763
// 00a2a761  33c0                 xor eax, eax
// 00a2a763  6a08                 push 8
// 00a2a765  8986e4020000         mov dword ptr [esi + 0x2e4], eax
// 00a2a76b  8b10                 mov edx, dword ptr [eax]
// 00a2a76d  6a0a                 push 0xa
// 00a2a76f  8bc8                 mov ecx, eax
// 00a2a771  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00a2a774  6a0b                 push 0xb
// 00a2a776  c64424780f           mov byte ptr [esp + 0x78], 0xf
// 00a2a77b  ffd0                 call eax
// 00a2a77d  b80c000000           mov eax, 0xc
// 00a2a782  8bc8                 mov ecx, eax
// 00a2a784  c786340100000000ff00 mov dword ptr [esi + 0x134], 0xff0000
// 00a2a78e  c786fc010000ffffffff mov dword ptr [esi + 0x1fc], 0xffffffff
// 00a2a798  c7868002000003000000 mov dword ptr [esi + 0x280], 3
// 00a2a7a2  898684020000         mov dword ptr [esi + 0x284], eax
// 00a2a7a8  898e88020000         mov dword ptr [esi + 0x288], ecx
// 00a2a7ae  89ae5c020000         mov dword ptr [esi + 0x25c], ebp
// 00a2a7b4  c7866c02000002000000 mov dword ptr [esi + 0x26c], 2
// 00a2a7be  89ae7c020000         mov dword ptr [esi + 0x27c], ebp
// 00a2a7c4  89be78020000         mov dword ptr [esi + 0x278], edi
// 00a2a7ca  89be04020000         mov dword ptr [esi + 0x204], edi
// 00a2a7d0  89be00020000         mov dword ptr [esi + 0x200], edi
// 00a2a7d6  89ae08020000         mov dword ptr [esi + 0x208], ebp
// 00a2a7dc  89bebc020000         mov dword ptr [esi + 0x2bc], edi
// 00a2a7e2  89ae3c020000         mov dword ptr [esi + 0x23c], ebp
// 00a2a7e8  89ae40020000         mov dword ptr [esi + 0x240], ebp
// 00a2a7ee  89ae44020000         mov dword ptr [esi + 0x244], ebp
// 00a2a7f4  89beb4020000         mov dword ptr [esi + 0x2b4], edi
// 00a2a7fa  c786b802000004000000 mov dword ptr [esi + 0x2b8], 4
// 00a2a804  89be30020000         mov dword ptr [esi + 0x230], edi
// 00a2a80a  89ae34020000         mov dword ptr [esi + 0x234], ebp
// 00a2a810  89be2c020000         mov dword ptr [esi + 0x22c], edi
// 00a2a816  89ae0c020000         mov dword ptr [esi + 0x20c], ebp
// 00a2a81c  89ae10020000         mov dword ptr [esi + 0x210], ebp
// 00a2a822  e8c9dcfcff           call 0x9f84f0
// 00a2a827  8b10                 mov edx, dword ptr [eax]
// 00a2a829  6851250000           push 0x2551
// 00a2a82e  8d8e14020000         lea ecx, [esi + 0x214]
// 00a2a834  51                   push ecx
// 00a2a835  8bc8                 mov ecx, eax
// 00a2a837  8b4208               mov eax, dword ptr [edx + 8]
// 00a2a83a  ffd0                 call eax
// 00a2a83c  e8afdcfcff           call 0x9f84f0
// 00a2a841  8b10                 mov edx, dword ptr [eax]
// 00a2a843  6850250000           push 0x2550
// 00a2a848  8d8e1c020000         lea ecx, [esi + 0x21c]
// 00a2a84e  51                   push ecx
// 00a2a84f  8bc8                 mov ecx, eax
// 00a2a851  8b4208               mov eax, dword ptr [edx + 8]
// 00a2a854  ffd0                 call eax
// 00a2a856  e895dcfcff           call 0x9f84f0
// 00a2a85b  8b10                 mov edx, dword ptr [eax]
// 00a2a85d  6852250000           push 0x2552
// 00a2a862  8d8e20020000         lea ecx, [esi + 0x220]
// 00a2a868  51                   push ecx
// 00a2a869  8bc8                 mov ecx, eax
// 00a2a86b  8b4208               mov eax, dword ptr [edx + 8]
// 00a2a86e  ffd0                 call eax
// 00a2a870  e87bdcfcff           call 0x9f84f0
// 00a2a875  8b10                 mov edx, dword ptr [eax]
// 00a2a877  6853250000           push 0x2553
// 00a2a87c  8bc8                 mov ecx, eax
// 00a2a87e  8b4208               mov eax, dword ptr [edx + 8]
// 00a2a881  53                   push ebx
// 00a2a882  ffd0                 call eax
// 00a2a884  85c0                 test eax, eax
// 00a2a886  740d                 je 0xa2a895
// 00a2a888  68ecf3b400           push 0xb4f3ec
// 00a2a88d  8bcb                 mov ecx, ebx
// 00a2a88f  ff157442b200         call dword ptr [0xb24274]
// 00a2a895  6a02                 push 2
// 00a2a897  6a0a                 push 0xa
// 00a2a899  57                   push edi
// 00a2a89a  6a0a                 push 0xa
// 00a2a89c  8d8e48020000         lea ecx, [esi + 0x248]
// 00a2a8a2  51                   push ecx
// 00a2a8a3  89be24020000         mov dword ptr [esi + 0x224], edi
// 00a2a8a9  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a2a8af  57                   push edi
// 00a2a8b0  8d542428             lea edx, [esp + 0x28]
// 00a2a8b4  52                   push edx
// 00a2a8b5  6a3c                 push 0x3c
// 00a2a8b7  6a1f                 push 0x1f
// 00a2a8b9  c7865802000014000000 mov dword ptr [esi + 0x258], 0x14
// 00a2a8c3  89ae28020000         mov dword ptr [esi + 0x228], ebp
// 00a2a8c9  ff15543ab200         call dword ptr [0xb23a54]
// 00a2a8cf  8d442424             lea eax, [esp + 0x24]
// 00a2a8d3  50                   push eax
// 00a2a8d4  ff15a820b200         call dword ptr [0xb220a8]
// 00a2a8da  50                   push eax
// 00a2a8db  8d4e38               lea ecx, [esi + 0x38]
// 00a2a8de  e8f57df5ff           call 0x9826d8
// 00a2a8e3  8d4c2424             lea ecx, [esp + 0x24]
// 00a2a8e7  51                   push ecx
// 00a2a8e8  8bce                 mov ecx, esi
// 00a2a8ea  e8a1c9ffff           call 0xa27290
// 00a2a8ef  8d542424             lea edx, [esp + 0x24]
// 00a2a8f3  52                   push edx
// 00a2a8f4  8bce                 mov ecx, esi
// 00a2a8f6  e8a5c8ffff           call 0xa271a0
// 00a2a8fb  55                   push ebp
// 00a2a8fc  57                   push edi
// 00a2a8fd  6a19                 push 0x19
// 00a2a8ff  6a0c                 push 0xc
// 00a2a901  6a0c                 push 0xc
// 00a2a903  8d8e70020000         lea ecx, [esi + 0x270]
// 00a2a909  e87a7ff5ff           call 0x982888
// 00a2a90e  bb506cb400           mov ebx, 0xb46c50
// 00a2a913  897c2418             mov dword ptr [esp + 0x18], edi
// 00a2a917  895c2414             mov dword ptr [esp + 0x14], ebx
// 00a2a91b  c644246c11           mov byte ptr [esp + 0x6c], 0x11
// 00a2a920  e8cbdbfcff           call 0x9f84f0
// 00a2a925  8b10                 mov edx, dword ptr [eax]
// 00a2a927  8b5214               mov edx, dword ptr [edx + 0x14]
// 00a2a92a  684e250000           push 0x254e
// 00a2a92f  8d4c2418             lea ecx, [esp + 0x18]
// 00a2a933  51                   push ecx
// 00a2a934  8bc8                 mov ecx, eax
// 00a2a936  ffd2                 call edx
// 00a2a938  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a2a93c  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 00a2a942  68ff00ff00           push 0xff00ff
// 00a2a947  51                   push ecx
// 00a2a948  50                   push eax
// 00a2a949  e8847af5ff           call 0x9823d2
// 00a2a94e  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00a2a954  8b0a                 mov ecx, dword ptr [edx]
// 00a2a956  e845e29eff           call 0x418ba0
// 00a2a95b  8bce                 mov ecx, esi
// 00a2a95d  89aea8020000         mov dword ptr [esi + 0x2a8], ebp
// 00a2a963  89beac020000         mov dword ptr [esi + 0x2ac], edi
// 00a2a969  89beb0020000         mov dword ptr [esi + 0x2b0], edi
// 00a2a96f  c786a40200000d000000 mov dword ptr [esi + 0x2a4], 0xd
// 00a2a979  89ae40020000         mov dword ptr [esi + 0x240], ebp
// 00a2a97f  89ae44020000         mov dword ptr [esi + 0x244], ebp
// 00a2a985  89be38020000         mov dword ptr [esi + 0x238], edi
// 00a2a98b  e820eeffff           call 0xa297b0
// 00a2a990  8d4c2414             lea ecx, [esp + 0x14]
// 00a2a994  c644246c0f           mov byte ptr [esp + 0x6c], 0xf
// 00a2a999  895c2414             mov dword ptr [esp + 0x14], ebx
// 00a2a99d  e85ec29eff           call 0x416c00
// 00a2a9a2  8bc6                 mov eax, esi
// 00a2a9a4  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a2a9a8  64890d00000000       mov dword ptr fs:[0], ecx
// 00a2a9af  59                   pop ecx
// 00a2a9b0  5f                   pop edi
// 00a2a9b1  5e                   pop esi
// 00a2a9b2  5d                   pop ebp
// 00a2a9b3  5b                   pop ebx
// 00a2a9b4  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a2a9b8  33cc                 xor ecx, esp
// 00a2a9ba  e87890f5ff           call 0x983a37
// 00a2a9bf  83c45c               add esp, 0x5c
// 00a2a9c2  c3                   ret 
// copied from an identical function in another client (function ??0CXTPReportPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp