// roc 2010-06 007e6310  unit: CRobloxTreeCtrl  size: 816 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e6310
//
// 007e6310  83ec78               sub esp, 0x78
// 007e6313  56                   push esi
// 007e6314  57                   push edi
// 007e6315  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 007e631c  8bf1                 mov esi, ecx
// 007e631e  85ff                 test edi, edi
// 007e6320  750a                 jne 0x7e632c
// 007e6322  5f                   pop edi
// 007e6323  33c0                 xor eax, eax
// 007e6325  5e                   pop esi
// 007e6326  83c478               add esp, 0x78
// 007e6329  c20c00               ret 0xc
// 007e632c  837e0400             cmp dword ptr [esi + 4], 0
// 007e6330  752d                 jne 0x7e635f
// 007e6332  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007e6339  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 007e6340  8b7634               mov esi, dword ptr [esi + 0x34]
// 007e6343  6a00                 push 0
// 007e6345  50                   push eax
// 007e6346  51                   push ecx
// 007e6347  6a00                 push 0
// 007e6349  6a00                 push 0
// 007e634b  6a00                 push 0
// 007e634d  6a08                 push 8
// 007e634f  57                   push edi
// 007e6350  8bce                 mov ecx, esi
// 007e6352  e8cd1ffcff           call 0x7a8324
// 007e6357  5f                   pop edi
// 007e6358  5e                   pop esi
// 007e6359  83c478               add esp, 0x78
// 007e635c  c20c00               ret 0xc
// 007e635f  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e6362  8b5020               mov edx, dword ptr [eax + 0x20]
// 007e6365  55                   push ebp
// 007e6366  6a00                 push 0
// 007e6368  6a09                 push 9
// 007e636a  680a110000           push 0x110a
// 007e636f  52                   push edx
// 007e6370  ff1554ba9e00         call dword ptr [0x9eba54]
// 007e6376  8be8                 mov ebp, eax
// 007e6378  33c0                 xor eax, eax
// 007e637a  3bef                 cmp ebp, edi
// 007e637c  0f94c0               sete al
// 007e637f  89442410             mov dword ptr [esp + 0x10], eax
// 007e6383  85ed                 test ebp, ebp
// 007e6385  7417                 je 0x7e639e
// 007e6387  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e638a  6a02                 push 2
// 007e638c  55                   push ebp
// 007e638d  e8b06c1900           call 0x97d042
// 007e6392  c744241401000000     mov dword ptr [esp + 0x14], 1
// 007e639a  a802                 test al, 2
// 007e639c  7508                 jne 0x7e63a6
// 007e639e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007e63a6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e63a9  53                   push ebx
// 007e63aa  6a02                 push 2
// 007e63ac  57                   push edi
// 007e63ad  e8906c1900           call 0x97d042
// 007e63b2  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 007e63b9  8bf8                 mov edi, eax
// 007e63bb  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 007e63c2  83e0fe               and eax, 0xfffffffe
// 007e63c5  d1ef                 shr edi, 1
// 007e63c7  83e701               and edi, 1
// 007e63ca  89442410             mov dword ptr [esp + 0x10], eax
// 007e63ce  83e3fe               and ebx, 0xfffffffe
// 007e63d1  e89a940000           call 0x7ef870
// 007e63d6  8bc8                 mov ecx, eax
// 007e63d8  e8c39d0000           call 0x7f01a0
// 007e63dd  f684249400000001     test byte ptr [esp + 0x94], 1
// 007e63e5  0fb6c0               movzx eax, al
// 007e63e8  8944241c             mov dword ptr [esp + 0x1c], eax
// 007e63ec  0f8456010000         je 0x7e6548
// 007e63f2  f684249000000001     test byte ptr [esp + 0x90], 1
// 007e63fa  0f84e9000000         je 0x7e64e9
// 007e6400  85c0                 test eax, eax
// 007e6402  745e                 je 0x7e6462
// 007e6404  837c241400           cmp dword ptr [esp + 0x14], 0
// 007e6409  751b                 jne 0x7e6426
// 007e640b  85ed                 test ebp, ebp
// 007e640d  7417                 je 0x7e6426
// 007e640f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e6412  6a00                 push 0
// 007e6414  e897f6ffff           call 0x7e5ab0
// 007e6419  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e641c  6a02                 push 2
// 007e641e  6a02                 push 2
// 007e6420  55                   push ebp
// 007e6421  e8aaf6ffff           call 0x7e5ad0
// 007e6426  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007e642d  51                   push ecx
// 007e642e  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e6431  e87af6ffff           call 0x7e5ab0
// 007e6436  85c0                 test eax, eax
// 007e6438  0f8494010000         je 0x7e65d2
// 007e643e  837c241400           cmp dword ptr [esp + 0x14], 0
// 007e6443  7567                 jne 0x7e64ac
// 007e6445  85ed                 test ebp, ebp
// 007e6447  7463                 je 0x7e64ac
// 007e6449  8b542418             mov edx, dword ptr [esp + 0x18]
// 007e644d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e6450  f7da                 neg edx
// 007e6452  1bd2                 sbb edx, edx
// 007e6454  6a02                 push 2
// 007e6456  83e202               and edx, 2
// 007e6459  52                   push edx
// 007e645a  55                   push ebp
// 007e645b  e870f6ffff           call 0x7e5ad0
// 007e6460  eb4a                 jmp 0x7e64ac
// 007e6462  837c241400           cmp dword ptr [esp + 0x14], 0
// 007e6467  752b                 jne 0x7e6494
// 007e6469  837c241800           cmp dword ptr [esp + 0x18], 0
// 007e646e  7424                 je 0x7e6494
// 007e6470  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e6473  6a00                 push 0
// 007e6475  e836f6ffff           call 0x7e5ab0
// 007e647a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e647d  6a02                 push 2
// 007e647f  6a02                 push 2
// 007e6481  55                   push ebp
// 007e6482  e849f6ffff           call 0x7e5ad0
// 007e6487  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e648a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e648d  51                   push ecx
// 007e648e  ff15d8ba9e00         call dword ptr [0x9ebad8]
// 007e6494  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 007e649b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e649e  52                   push edx
// 007e649f  e80cf6ffff           call 0x7e5ab0
// 007e64a4  85c0                 test eax, eax
// 007e64a6  0f8426010000         je 0x7e65d2
// 007e64ac  f684249400000002     test byte ptr [esp + 0x94], 2
// 007e64b4  7425                 je 0x7e64db
// 007e64b6  f684249000000002     test byte ptr [esp + 0x90], 2
// 007e64be  0f8484000000         je 0x7e6548
// 007e64c4  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007e64c9  757d                 jne 0x7e6548
// 007e64cb  837c241400           cmp dword ptr [esp + 0x14], 0
// 007e64d0  746e                 je 0x7e6540
// 007e64d2  837c241800           cmp dword ptr [esp + 0x18], 0
// 007e64d7  746f                 je 0x7e6548
// 007e64d9  eb65                 jmp 0x7e6540
// 007e64db  85ff                 test edi, edi
// 007e64dd  7569                 jne 0x7e6548
// 007e64df  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 007e64e4  83cb02               or ebx, 2
// 007e64e7  eb5f                 jmp 0x7e6548
// 007e64e9  837c241400           cmp dword ptr [esp + 0x14], 0
// 007e64ee  7458                 je 0x7e6548
// 007e64f0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e64f3  6a00                 push 0
// 007e64f5  e8b6f5ffff           call 0x7e5ab0
// 007e64fa  f684249400000002     test byte ptr [esp + 0x94], 2
// 007e6502  751a                 jne 0x7e651e
// 007e6504  85ff                 test edi, edi
// 007e6506  7440                 je 0x7e6548
// 007e6508  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007e650f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e6512  6a02                 push 2
// 007e6514  6a02                 push 2
// 007e6516  50                   push eax
// 007e6517  e8b4f5ffff           call 0x7e5ad0
// 007e651c  eb2a                 jmp 0x7e6548
// 007e651e  f684249000000002     test byte ptr [esp + 0x90], 2
// 007e6526  7420                 je 0x7e6548
// 007e6528  85ff                 test edi, edi
// 007e652a  7414                 je 0x7e6540
// 007e652c  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007e6533  6a02                 push 2
// 007e6535  6a02                 push 2
// 007e6537  51                   push ecx
// 007e6538  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e653b  e890f5ffff           call 0x7e5ad0
// 007e6540  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 007e6545  83e3fd               and ebx, 0xfffffffd
// 007e6548  85db                 test ebx, ebx
// 007e654a  0f84c8000000         je 0x7e6618
// 007e6550  f6c302               test bl, 2
// 007e6553  0f84b4000000         je 0x7e660d
// 007e6559  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e655c  8b5020               mov edx, dword ptr [eax + 0x20]
// 007e655f  89542420             mov dword ptr [esp + 0x20], edx
// 007e6563  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e6566  50                   push eax
// 007e6567  ff15b8ba9e00         call dword ptr [0x9ebab8]
// 007e656d  89442424             mov dword ptr [esp + 0x24], eax
// 007e6571  33c0                 xor eax, eax
// 007e6573  f644241002           test byte ptr [esp + 0x10], 2
// 007e6578  c74424286ffeffff     mov dword ptr [esp + 0x28], 0xfffffe6f
// 007e6580  89442458             mov dword ptr [esp + 0x58], eax
// 007e6584  89442430             mov dword ptr [esp + 0x30], eax
// 007e6588  8944245c             mov dword ptr [esp + 0x5c], eax
// 007e658c  89442434             mov dword ptr [esp + 0x34], eax
// 007e6590  8d7c2458             lea edi, [esp + 0x58]
// 007e6594  7504                 jne 0x7e659a
// 007e6596  8d7c2430             lea edi, [esp + 0x30]
// 007e659a  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 007e65a1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e65a4  55                   push ebp
// 007e65a5  c70714000000         mov dword ptr [edi], 0x14
// 007e65ab  896f04               mov dword ptr [edi + 4], ebp
// 007e65ae  e89b1dfcff           call 0x7a834e
// 007e65b3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007e65b7  8b16                 mov edx, dword ptr [esi]
// 007e65b9  8b524c               mov edx, dword ptr [edx + 0x4c]
// 007e65bc  894724               mov dword ptr [edi + 0x24], eax
// 007e65bf  8d442420             lea eax, [esp + 0x20]
// 007e65c3  894f08               mov dword ptr [edi + 8], ecx
// 007e65c6  50                   push eax
// 007e65c7  8bce                 mov ecx, esi
// 007e65c9  895f0c               mov dword ptr [edi + 0xc], ebx
// 007e65cc  ffd2                 call edx
// 007e65ce  85c0                 test eax, eax
// 007e65d0  740c                 je 0x7e65de
// 007e65d2  5b                   pop ebx
// 007e65d3  5d                   pop ebp
// 007e65d4  5f                   pop edi
// 007e65d5  33c0                 xor eax, eax
// 007e65d7  5e                   pop esi
// 007e65d8  83c478               add esp, 0x78
// 007e65db  c20c00               ret 0xc
// 007e65de  8b442410             mov eax, dword ptr [esp + 0x10]
// 007e65e2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e65e5  53                   push ebx
// 007e65e6  50                   push eax
// 007e65e7  55                   push ebp
// 007e65e8  e8e3f4ffff           call 0x7e5ad0
// 007e65ed  8b16                 mov edx, dword ptr [esi]
// 007e65ef  8b524c               mov edx, dword ptr [edx + 0x4c]
// 007e65f2  8d442420             lea eax, [esp + 0x20]
// 007e65f6  50                   push eax
// 007e65f7  8bce                 mov ecx, esi
// 007e65f9  c744242c6efeffff     mov dword ptr [esp + 0x2c], 0xfffffe6e
// 007e6601  ffd2                 call edx
// 007e6603  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 007e6608  83e3fd               and ebx, 0xfffffffd
// 007e660b  eb07                 jmp 0x7e6614
// 007e660d  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 007e6614  85db                 test ebx, ebx
// 007e6616  750f                 jne 0x7e6627
// 007e6618  5b                   pop ebx
// 007e6619  5d                   pop ebp
// 007e661a  5f                   pop edi
// 007e661b  b801000000           mov eax, 1
// 007e6620  5e                   pop esi
// 007e6621  83c478               add esp, 0x78
// 007e6624  c20c00               ret 0xc
// 007e6627  8b442410             mov eax, dword ptr [esp + 0x10]
// 007e662b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e662e  53                   push ebx
// 007e662f  50                   push eax
// 007e6630  55                   push ebp
// 007e6631  e89af4ffff           call 0x7e5ad0
// 007e6636  5b                   pop ebx
// 007e6637  5d                   pop ebp
// 007e6638  5f                   pop edi
// 007e6639  5e                   pop esi
// 007e663a  83c478               add esp, 0x78
// 007e663d  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?SetItemState@CXTTreeBase@@QAEHPAU_TREEITEM@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
