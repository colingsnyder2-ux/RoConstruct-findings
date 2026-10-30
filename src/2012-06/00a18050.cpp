// roc 2012-06 00a18050  unit: CXTPShortcutManager::CKeyHelper  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a18050
//
// 00a18050  6aff                 push -1
// 00a18052  68393cae00           push 0xae3c39
// 00a18057  64a100000000         mov eax, dword ptr fs:[0]
// 00a1805d  50                   push eax
// 00a1805e  56                   push esi
// 00a1805f  57                   push edi
// 00a18060  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a18065  33c4                 xor eax, esp
// 00a18067  50                   push eax
// 00a18068  8d44240c             lea eax, [esp + 0xc]
// 00a1806c  64a300000000         mov dword ptr fs:[0], eax
// 00a18072  8bf1                 mov esi, ecx
// 00a18074  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a18078  8bcf                 mov ecx, edi
// 00a1807a  ff150448b200         call dword ptr [0xb24804]
// 00a18080  8b4604               mov eax, dword ptr [esi + 4]
// 00a18083  85c0                 test eax, eax
// 00a18085  0f842a010000         je 0xa181b5
// 00a1808b  6683780203           cmp word ptr [eax + 2], 3
// 00a18090  7439                 je 0xa180cb
// 00a18092  f60008               test byte ptr [eax], 8
// 00a18095  740c                 je 0xa180a3
// 00a18097  6a00                 push 0
// 00a18099  6a11                 push 0x11
// 00a1809b  57                   push edi
// 00a1809c  8bce                 mov ecx, esi
// 00a1809e  e86dfaffff           call 0xa17b10
// 00a180a3  8b4604               mov eax, dword ptr [esi + 4]
// 00a180a6  f60004               test byte ptr [eax], 4
// 00a180a9  740c                 je 0xa180b7
// 00a180ab  6a00                 push 0
// 00a180ad  6a10                 push 0x10
// 00a180af  57                   push edi
// 00a180b0  8bce                 mov ecx, esi
// 00a180b2  e859faffff           call 0xa17b10
// 00a180b7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a180ba  f60110               test byte ptr [ecx], 0x10
// 00a180bd  740c                 je 0xa180cb
// 00a180bf  6a00                 push 0
// 00a180c1  6a12                 push 0x12
// 00a180c3  57                   push edi
// 00a180c4  8bce                 mov ecx, esi
// 00a180c6  e845faffff           call 0xa17b10
// 00a180cb  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a180ce  0fb74102             movzx eax, word ptr [ecx + 2]
// 00a180d2  6685c0               test ax, ax
// 00a180d5  0f849c000000         je 0xa18177
// 00a180db  8a11                 mov dl, byte ptr [ecx]
// 00a180dd  f6c201               test dl, 1
// 00a180e0  7422                 je 0xa18104
// 00a180e2  0fb7d0               movzx edx, ax
// 00a180e5  6a01                 push 1
// 00a180e7  52                   push edx
// 00a180e8  57                   push edi
// 00a180e9  8bce                 mov ecx, esi
// 00a180eb  e820faffff           call 0xa17b10
// 00a180f0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a180f4  64890d00000000       mov dword ptr fs:[0], ecx
// 00a180fb  59                   pop ecx
// 00a180fc  5f                   pop edi
// 00a180fd  5e                   pop esi
// 00a180fe  83c40c               add esp, 0xc
// 00a18101  c20400               ret 4
// 00a18104  6683f801             cmp ax, 1
// 00a18108  7240                 jb 0xa1814a
// 00a1810a  6683f81a             cmp ax, 0x1a
// 00a1810e  773a                 ja 0xa1814a
// 00a18110  80fa02               cmp dl, 2
// 00a18113  7535                 jne 0xa1814a
// 00a18115  6a00                 push 0
// 00a18117  6a11                 push 0x11
// 00a18119  57                   push edi
// 00a1811a  8bce                 mov ecx, esi
// 00a1811c  e8eff9ffff           call 0xa17b10
// 00a18121  8b4604               mov eax, dword ptr [esi + 4]
// 00a18124  8a4802               mov cl, byte ptr [eax + 2]
// 00a18127  80c140               add cl, 0x40
// 00a1812a  0fb6d1               movzx edx, cl
// 00a1812d  52                   push edx
// 00a1812e  8bcf                 mov ecx, edi
// 00a18130  ff151049b200         call dword ptr [0xb24910]
// 00a18136  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a1813a  64890d00000000       mov dword ptr fs:[0], ecx
// 00a18141  59                   pop ecx
// 00a18142  5f                   pop edi
// 00a18143  5e                   pop esi
// 00a18144  83c40c               add esp, 0xc
// 00a18147  c20400               ret 4
// 00a1814a  6683f81b             cmp ax, 0x1b
// 00a1814e  7465                 je 0xa181b5
// 00a18150  6683f809             cmp ax, 9
// 00a18154  745f                 je 0xa181b5
// 00a18156  0fb64102             movzx eax, byte ptr [ecx + 2]
// 00a1815a  50                   push eax
// 00a1815b  8bcf                 mov ecx, edi
// 00a1815d  ff151049b200         call dword ptr [0xb24910]
// 00a18163  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a18167  64890d00000000       mov dword ptr fs:[0], ecx
// 00a1816e  59                   pop ecx
// 00a1816f  5f                   pop edi
// 00a18170  5e                   pop esi
// 00a18171  83c40c               add esp, 0xc
// 00a18174  c20400               ret 4
// 00a18177  8bcf                 mov ecx, edi
// 00a18179  ff155846b200         call dword ptr [0xb24658]
// 00a1817f  85c0                 test eax, eax
// 00a18181  7e32                 jle 0xa181b5
// 00a18183  8bcf                 mov ecx, edi
// 00a18185  ff155846b200         call dword ptr [0xb24658]
// 00a1818b  48                   dec eax
// 00a1818c  50                   push eax
// 00a1818d  8d4c2420             lea ecx, [esp + 0x20]
// 00a18191  51                   push ecx
// 00a18192  8bcf                 mov ecx, edi
// 00a18194  ff152850b200         call dword ptr [0xb25028]
// 00a1819a  50                   push eax
// 00a1819b  8bcf                 mov ecx, edi
// 00a1819d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00a181a5  ff152045b200         call dword ptr [0xb24520]
// 00a181ab  8d4c241c             lea ecx, [esp + 0x1c]
// 00a181af  ff15d047b200         call dword ptr [0xb247d0]
// 00a181b5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a181b9  64890d00000000       mov dword ptr fs:[0], ecx
// 00a181c0  59                   pop ecx
// 00a181c1  5f                   pop edi
// 00a181c2  5e                   pop esi
// 00a181c3  83c40c               add esp, 0xc
// 00a181c6  c20400               ret 4
// copied from an identical function in another client (function ?Format@CKeyHelper@CXTPShortcutManager@@QBEXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPShortcutManager.cpp