// from server: 100% by auto
// roc 2011-06 00848130  unit: CRobloxTreeCtrl  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848130
//
// 00848130  53                   push ebx
// 00848131  8b1dc019a400         mov ebx, dword ptr [0xa419c0]
// 00848137  56                   push esi
// 00848138  57                   push edi
// 00848139  6a00                 push 0
// 0084813b  8bf9                 mov edi, ecx
// 0084813d  8b4734               mov eax, dword ptr [edi + 0x34]
// 00848140  8b4020               mov eax, dword ptr [eax + 0x20]
// 00848143  6a00                 push 0
// 00848145  680a110000           push 0x110a
// 0084814a  50                   push eax
// 0084814b  ffd3                 call ebx
// 0084814d  8bf0                 mov esi, eax
// 0084814f  85f6                 test esi, esi
// 00848151  0f84db000000         je 0x848232
// 00848157  55                   push ebp
// 00848158  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0084815c  8d642400             lea esp, [esp]
// 00848160  8b442414             mov eax, dword ptr [esp + 0x14]
// 00848164  3bf0                 cmp esi, eax
// 00848166  7442                 je 0x8481aa
// 00848168  3bf5                 cmp esi, ebp
// 0084816a  743e                 je 0x8481aa
// 0084816c  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00848171  741b                 je 0x84818e
// 00848173  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00848176  6a02                 push 2
// 00848178  56                   push esi
// 00848179  e8da461800           call 0x9cc858
// 0084817e  a802                 test al, 2
// 00848180  740c                 je 0x84818e
// 00848182  6a02                 push 2
// 00848184  6a00                 push 0
// 00848186  56                   push esi
// 00848187  8bcf                 mov ecx, edi
// 00848189  e8d2f9ffff           call 0x847b60
// 0084818e  8b4734               mov eax, dword ptr [edi + 0x34]
// 00848191  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00848194  56                   push esi
// 00848195  6a06                 push 6
// 00848197  680a110000           push 0x110a
// 0084819c  51                   push ecx
// 0084819d  ffd3                 call ebx
// 0084819f  8bf0                 mov esi, eax
// 008481a1  85f6                 test esi, esi
// 008481a3  75bb                 jne 0x848160
// 008481a5  e987000000           jmp 0x848231
// 008481aa  3bc5                 cmp eax, ebp
// 008481ac  742e                 je 0x8481dc
// 008481ae  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 008481b1  6a02                 push 2
// 008481b3  56                   push esi
// 008481b4  e89f461800           call 0x9cc858
// 008481b9  a802                 test al, 2
// 008481bb  750c                 jne 0x8481c9
// 008481bd  6a02                 push 2
// 008481bf  6a02                 push 2
// 008481c1  56                   push esi
// 008481c2  8bcf                 mov ecx, edi
// 008481c4  e897f9ffff           call 0x847b60
// 008481c9  8b4734               mov eax, dword ptr [edi + 0x34]
// 008481cc  8b5020               mov edx, dword ptr [eax + 0x20]
// 008481cf  56                   push esi
// 008481d0  6a06                 push 6
// 008481d2  680a110000           push 0x110a
// 008481d7  52                   push edx
// 008481d8  ffd3                 call ebx
// 008481da  8bf0                 mov esi, eax
// 008481dc  85f6                 test esi, esi
// 008481de  7451                 je 0x848231
// 008481e0  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 008481e3  6a02                 push 2
// 008481e5  56                   push esi
// 008481e6  e86d461800           call 0x9cc858
// 008481eb  a802                 test al, 2
// 008481ed  750c                 jne 0x8481fb
// 008481ef  6a02                 push 2
// 008481f1  6a02                 push 2
// 008481f3  56                   push esi
// 008481f4  8bcf                 mov ecx, edi
// 008481f6  e865f9ffff           call 0x847b60
// 008481fb  3b742414             cmp esi, dword ptr [esp + 0x14]
// 008481ff  741d                 je 0x84821e
// 00848201  3bf5                 cmp esi, ebp
// 00848203  7419                 je 0x84821e
// 00848205  8b4734               mov eax, dword ptr [edi + 0x34]
// 00848208  8b4020               mov eax, dword ptr [eax + 0x20]
// 0084820b  56                   push esi
// 0084820c  6a06                 push 6
// 0084820e  680a110000           push 0x110a
// 00848213  50                   push eax
// 00848214  ffd3                 call ebx
// 00848216  8bf0                 mov esi, eax
// 00848218  85f6                 test esi, esi
// 0084821a  75c4                 jne 0x8481e0
// 0084821c  eb13                 jmp 0x848231
// 0084821e  8b4734               mov eax, dword ptr [edi + 0x34]
// 00848221  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00848224  56                   push esi
// 00848225  6a06                 push 6
// 00848227  680a110000           push 0x110a
// 0084822c  51                   push ecx
// 0084822d  ffd3                 call ebx
// 0084822f  8bf0                 mov esi, eax
// 00848231  5d                   pop ebp
// 00848232  837c241800           cmp dword ptr [esp + 0x18], 0
// 00848237  7439                 je 0x848272
// 00848239  85f6                 test esi, esi
// 0084823b  7435                 je 0x848272
// 0084823d  8d4900               lea ecx, [ecx]
// 00848240  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00848243  6a02                 push 2
// 00848245  56                   push esi
// 00848246  e80d461800           call 0x9cc858
// 0084824b  a802                 test al, 2
// 0084824d  740c                 je 0x84825b
// 0084824f  6a02                 push 2
// 00848251  6a00                 push 0
// 00848253  56                   push esi
// 00848254  8bcf                 mov ecx, edi
// 00848256  e805f9ffff           call 0x847b60
// 0084825b  8b4734               mov eax, dword ptr [edi + 0x34]
// 0084825e  8b5020               mov edx, dword ptr [eax + 0x20]
// 00848261  56                   push esi
// 00848262  6a06                 push 6
// 00848264  680a110000           push 0x110a
// 00848269  52                   push edx
// 0084826a  ffd3                 call ebx
// 0084826c  8bf0                 mov esi, eax
// 0084826e  85f6                 test esi, esi
// 00848270  75ce                 jne 0x848240
// 00848272  5f                   pop edi
// 00848273  5e                   pop esi
// 00848274  5b                   pop ebx
// 00848275  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?SelectItems@CXTPTreeBase@@QAEXPAU_TREEITEM@@0H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
