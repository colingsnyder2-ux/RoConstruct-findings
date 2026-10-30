// roc 2012-06 00a181d0  unit: CXTPShortcutManager::CKeyHelper  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a181d0
//
// 00a181d0  6aff                 push -1
// 00a181d2  68693cae00           push 0xae3c69
// 00a181d7  64a100000000         mov eax, dword ptr fs:[0]
// 00a181dd  50                   push eax
// 00a181de  83ec40               sub esp, 0x40
// 00a181e1  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a181e6  33c4                 xor eax, esp
// 00a181e8  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a181ec  53                   push ebx
// 00a181ed  55                   push ebp
// 00a181ee  56                   push esi
// 00a181ef  57                   push edi
// 00a181f0  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a181f5  33c4                 xor eax, esp
// 00a181f7  50                   push eax
// 00a181f8  8d442454             lea eax, [esp + 0x54]
// 00a181fc  64a300000000         mov dword ptr fs:[0], eax
// 00a18202  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 00a18206  33f6                 xor esi, esi
// 00a18208  6a32                 push 0x32
// 00a1820a  8d442420             lea eax, [esp + 0x20]
// 00a1820e  56                   push esi
// 00a1820f  50                   push eax
// 00a18210  89742424             mov dword ptr [esp + 0x24], esi
// 00a18214  e85bb1f6ff           call 0x983374
// 00a18219  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 00a1821d  83c40c               add esp, 0xc
// 00a18220  83ff03               cmp edi, 3
// 00a18223  7512                 jne 0xa18237
// 00a18225  68e83bb400           push 0xb43be8
// 00a1822a  8bcd                 mov ecx, ebp
// 00a1822c  ff15c847b200         call dword ptr [0xb247c8]
// 00a18232  e9d3000000           jmp 0xa1830a
// 00a18237  56                   push esi
// 00a18238  ff15943bb200         call dword ptr [0xb23b94]
// 00a1823e  50                   push eax
// 00a1823f  56                   push esi
// 00a18240  57                   push edi
// 00a18241  ff15903bb200         call dword ptr [0xb23b90]
// 00a18247  c1e010               shl eax, 0x10
// 00a1824a  83c7df               add edi, -0x21
// 00a1824d  83c801               or eax, 1
// 00a18250  83ff0e               cmp edi, 0xe
// 00a18253  7705                 ja 0xa1825a
// 00a18255  0d00000001           or eax, 0x1000000
// 00a1825a  6a32                 push 0x32
// 00a1825c  8d4c2420             lea ecx, [esp + 0x20]
// 00a18260  51                   push ecx
// 00a18261  50                   push eax
// 00a18262  ff15483cb200         call dword ptr [0xb23c48]
// 00a18268  8d54241c             lea edx, [esp + 0x1c]
// 00a1826c  52                   push edx
// 00a1826d  8d4c2418             lea ecx, [esp + 0x18]
// 00a18271  ff15c847b200         call dword ptr [0xb247c8]
// 00a18277  8d4c2414             lea ecx, [esp + 0x14]
// 00a1827b  8974245c             mov dword ptr [esp + 0x5c], esi
// 00a1827f  ff156046b200         call dword ptr [0xb24660]
// 00a18285  84c0                 test al, al
// 00a18287  756a                 jne 0xa182f3
// 00a18289  8d4c2414             lea ecx, [esp + 0x14]
// 00a1828d  ff158849b200         call dword ptr [0xb24988]
// 00a18293  8d4c2414             lea ecx, [esp + 0x14]
// 00a18297  ff155846b200         call dword ptr [0xb24658]
// 00a1829d  85c0                 test eax, eax
// 00a1829f  7e52                 jle 0xa182f3
// 00a182a1  8b1d4c3cb200         mov ebx, dword ptr [0xb23c4c]
// 00a182a7  eb07                 jmp 0xa182b0
// 00a182a9  8da42400000000       lea esp, [esp]
// 00a182b0  56                   push esi
// 00a182b1  8d4c2418             lea ecx, [esp + 0x18]
// 00a182b5  ff15e844b200         call dword ptr [0xb244e8]
// 00a182bb  88442418             mov byte ptr [esp + 0x18], al
// 00a182bf  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00a182c3  57                   push edi
// 00a182c4  ffd3                 call ebx
// 00a182c6  85c0                 test eax, eax
// 00a182c8  7511                 jne 0xa182db
// 00a182ca  8d4c2414             lea ecx, [esp + 0x14]
// 00a182ce  46                   inc esi
// 00a182cf  ff155846b200         call dword ptr [0xb24658]
// 00a182d5  3bf0                 cmp esi, eax
// 00a182d7  7cd7                 jl 0xa182b0
// 00a182d9  eb18                 jmp 0xa182f3
// 00a182db  57                   push edi
// 00a182dc  e8bff8ffff           call 0xa17ba0
// 00a182e1  0fb6c0               movzx eax, al
// 00a182e4  83c404               add esp, 4
// 00a182e7  50                   push eax
// 00a182e8  56                   push esi
// 00a182e9  8d4c241c             lea ecx, [esp + 0x1c]
// 00a182ed  ff15f84cb200         call dword ptr [0xb24cf8]
// 00a182f3  8d4c2414             lea ecx, [esp + 0x14]
// 00a182f7  51                   push ecx
// 00a182f8  8bcd                 mov ecx, ebp
// 00a182fa  ff158047b200         call dword ptr [0xb24780]
// 00a18300  8d4c2414             lea ecx, [esp + 0x14]
// 00a18304  ff15d047b200         call dword ptr [0xb247d0]
// 00a1830a  8bc5                 mov eax, ebp
// 00a1830c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a18310  64890d00000000       mov dword ptr fs:[0], ecx
// 00a18317  59                   pop ecx
// 00a18318  5f                   pop edi
// 00a18319  5e                   pop esi
// 00a1831a  5d                   pop ebp
// 00a1831b  5b                   pop ebx
// 00a1831c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a18320  33cc                 xor ecx, esp
// 00a18322  e810b7f6ff           call 0x983a37
// 00a18327  83c44c               add esp, 0x4c
// 00a1832a  c3                   ret 
// copied from an identical function in another client (function ?GetLocalKeyNameText@CKeyHelper@CXTPShortcutManager@@SA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPShortcutManager.cpp