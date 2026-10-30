// roc 2009-12 0088e860  unit: CXTPShortcutManager::CKeyHelper  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088e860
//
// 0088e860  6aff                 push -1
// 0088e862  6899e39500           push 0x95e399
// 0088e867  64a100000000         mov eax, dword ptr fs:[0]
// 0088e86d  50                   push eax
// 0088e86e  56                   push esi
// 0088e86f  57                   push edi
// 0088e870  a10052b600           mov eax, dword ptr [0xb65200]
// 0088e875  33c4                 xor eax, esp
// 0088e877  50                   push eax
// 0088e878  8d44240c             lea eax, [esp + 0xc]
// 0088e87c  64a300000000         mov dword ptr fs:[0], eax
// 0088e882  8bf1                 mov esi, ecx
// 0088e884  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0088e888  8bcf                 mov ecx, edi
// 0088e88a  ff1590d69800         call dword ptr [0x98d690]
// 0088e890  8b4604               mov eax, dword ptr [esi + 4]
// 0088e893  85c0                 test eax, eax
// 0088e895  0f842a010000         je 0x88e9c5
// 0088e89b  6683780203           cmp word ptr [eax + 2], 3
// 0088e8a0  7439                 je 0x88e8db
// 0088e8a2  f60008               test byte ptr [eax], 8
// 0088e8a5  740c                 je 0x88e8b3
// 0088e8a7  6a00                 push 0
// 0088e8a9  6a11                 push 0x11
// 0088e8ab  57                   push edi
// 0088e8ac  8bce                 mov ecx, esi
// 0088e8ae  e8fdf9ffff           call 0x88e2b0
// 0088e8b3  8b4604               mov eax, dword ptr [esi + 4]
// 0088e8b6  f60004               test byte ptr [eax], 4
// 0088e8b9  740c                 je 0x88e8c7
// 0088e8bb  6a00                 push 0
// 0088e8bd  6a10                 push 0x10
// 0088e8bf  57                   push edi
// 0088e8c0  8bce                 mov ecx, esi
// 0088e8c2  e8e9f9ffff           call 0x88e2b0
// 0088e8c7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0088e8ca  f60110               test byte ptr [ecx], 0x10
// 0088e8cd  740c                 je 0x88e8db
// 0088e8cf  6a00                 push 0
// 0088e8d1  6a12                 push 0x12
// 0088e8d3  57                   push edi
// 0088e8d4  8bce                 mov ecx, esi
// 0088e8d6  e8d5f9ffff           call 0x88e2b0
// 0088e8db  8b4e04               mov ecx, dword ptr [esi + 4]
// 0088e8de  0fb74102             movzx eax, word ptr [ecx + 2]
// 0088e8e2  6685c0               test ax, ax
// 0088e8e5  0f849c000000         je 0x88e987
// 0088e8eb  8a11                 mov dl, byte ptr [ecx]
// 0088e8ed  f6c201               test dl, 1
// 0088e8f0  7422                 je 0x88e914
// 0088e8f2  0fb7d0               movzx edx, ax
// 0088e8f5  6a01                 push 1
// 0088e8f7  52                   push edx
// 0088e8f8  57                   push edi
// 0088e8f9  8bce                 mov ecx, esi
// 0088e8fb  e8b0f9ffff           call 0x88e2b0
// 0088e900  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088e904  64890d00000000       mov dword ptr fs:[0], ecx
// 0088e90b  59                   pop ecx
// 0088e90c  5f                   pop edi
// 0088e90d  5e                   pop esi
// 0088e90e  83c40c               add esp, 0xc
// 0088e911  c20400               ret 4
// 0088e914  6683f801             cmp ax, 1
// 0088e918  7240                 jb 0x88e95a
// 0088e91a  6683f81a             cmp ax, 0x1a
// 0088e91e  773a                 ja 0x88e95a
// 0088e920  80fa02               cmp dl, 2
// 0088e923  7535                 jne 0x88e95a
// 0088e925  6a00                 push 0
// 0088e927  6a11                 push 0x11
// 0088e929  57                   push edi
// 0088e92a  8bce                 mov ecx, esi
// 0088e92c  e87ff9ffff           call 0x88e2b0
// 0088e931  8b4604               mov eax, dword ptr [esi + 4]
// 0088e934  8a4802               mov cl, byte ptr [eax + 2]
// 0088e937  80c140               add cl, 0x40
// 0088e93a  0fb6d1               movzx edx, cl
// 0088e93d  52                   push edx
// 0088e93e  8bcf                 mov ecx, edi
// 0088e940  ff15bcd79800         call dword ptr [0x98d7bc]
// 0088e946  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088e94a  64890d00000000       mov dword ptr fs:[0], ecx
// 0088e951  59                   pop ecx
// 0088e952  5f                   pop edi
// 0088e953  5e                   pop esi
// 0088e954  83c40c               add esp, 0xc
// 0088e957  c20400               ret 4
// 0088e95a  6683f81b             cmp ax, 0x1b
// 0088e95e  7465                 je 0x88e9c5
// 0088e960  6683f809             cmp ax, 9
// 0088e964  745f                 je 0x88e9c5
// 0088e966  0fb64102             movzx eax, byte ptr [ecx + 2]
// 0088e96a  50                   push eax
// 0088e96b  8bcf                 mov ecx, edi
// 0088e96d  ff15bcd79800         call dword ptr [0x98d7bc]
// 0088e973  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088e977  64890d00000000       mov dword ptr fs:[0], ecx
// 0088e97e  59                   pop ecx
// 0088e97f  5f                   pop edi
// 0088e980  5e                   pop esi
// 0088e981  83c40c               add esp, 0xc
// 0088e984  c20400               ret 4
// 0088e987  8bcf                 mov ecx, edi
// 0088e989  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0088e98f  85c0                 test eax, eax
// 0088e991  7e32                 jle 0x88e9c5
// 0088e993  8bcf                 mov ecx, edi
// 0088e995  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0088e99b  48                   dec eax
// 0088e99c  50                   push eax
// 0088e99d  8d4c2420             lea ecx, [esp + 0x20]
// 0088e9a1  51                   push ecx
// 0088e9a2  8bcf                 mov ecx, edi
// 0088e9a4  ff1544cf9800         call dword ptr [0x98cf44]
// 0088e9aa  50                   push eax
// 0088e9ab  8bcf                 mov ecx, edi
// 0088e9ad  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0088e9b5  ff1538d59800         call dword ptr [0x98d538]
// 0088e9bb  8d4c241c             lea ecx, [esp + 0x1c]
// 0088e9bf  ff15c0de9800         call dword ptr [0x98dec0]
// 0088e9c5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088e9c9  64890d00000000       mov dword ptr fs:[0], ecx
// 0088e9d0  59                   pop ecx
// 0088e9d1  5f                   pop edi
// 0088e9d2  5e                   pop esi
// 0088e9d3  83c40c               add esp, 0xc
// 0088e9d6  c20400               ret 4
// copied from an identical function in another client (function ?Format@CKeyHelper@CXTPShortcutManager@@QBEXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPShortcutManager.cpp