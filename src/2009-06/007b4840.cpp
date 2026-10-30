// roc 2009-06 007b4840  unit: CXTPShortcutManager::CKeyHelper  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b4840
//
// 007b4840  6aff                 push -1
// 007b4842  6839a28700           push 0x87a239
// 007b4847  64a100000000         mov eax, dword ptr fs:[0]
// 007b484d  50                   push eax
// 007b484e  56                   push esi
// 007b484f  57                   push edi
// 007b4850  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007b4855  33c4                 xor eax, esp
// 007b4857  50                   push eax
// 007b4858  8d44240c             lea eax, [esp + 0xc]
// 007b485c  64a300000000         mov dword ptr fs:[0], eax
// 007b4862  8bf1                 mov esi, ecx
// 007b4864  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007b4868  8bcf                 mov ecx, edi
// 007b486a  ff15f4ff8900         call dword ptr [0x89fff4]
// 007b4870  8b4604               mov eax, dword ptr [esi + 4]
// 007b4873  85c0                 test eax, eax
// 007b4875  0f842a010000         je 0x7b49a5
// 007b487b  6683780203           cmp word ptr [eax + 2], 3
// 007b4880  7439                 je 0x7b48bb
// 007b4882  f60008               test byte ptr [eax], 8
// 007b4885  740c                 je 0x7b4893
// 007b4887  6a00                 push 0
// 007b4889  6a11                 push 0x11
// 007b488b  57                   push edi
// 007b488c  8bce                 mov ecx, esi
// 007b488e  e8fdf9ffff           call 0x7b4290
// 007b4893  8b4604               mov eax, dword ptr [esi + 4]
// 007b4896  f60004               test byte ptr [eax], 4
// 007b4899  740c                 je 0x7b48a7
// 007b489b  6a00                 push 0
// 007b489d  6a10                 push 0x10
// 007b489f  57                   push edi
// 007b48a0  8bce                 mov ecx, esi
// 007b48a2  e8e9f9ffff           call 0x7b4290
// 007b48a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 007b48aa  f60110               test byte ptr [ecx], 0x10
// 007b48ad  740c                 je 0x7b48bb
// 007b48af  6a00                 push 0
// 007b48b1  6a12                 push 0x12
// 007b48b3  57                   push edi
// 007b48b4  8bce                 mov ecx, esi
// 007b48b6  e8d5f9ffff           call 0x7b4290
// 007b48bb  8b4e04               mov ecx, dword ptr [esi + 4]
// 007b48be  0fb74102             movzx eax, word ptr [ecx + 2]
// 007b48c2  6685c0               test ax, ax
// 007b48c5  0f849c000000         je 0x7b4967
// 007b48cb  8a11                 mov dl, byte ptr [ecx]
// 007b48cd  f6c201               test dl, 1
// 007b48d0  7422                 je 0x7b48f4
// 007b48d2  0fb7d0               movzx edx, ax
// 007b48d5  6a01                 push 1
// 007b48d7  52                   push edx
// 007b48d8  57                   push edi
// 007b48d9  8bce                 mov ecx, esi
// 007b48db  e8b0f9ffff           call 0x7b4290
// 007b48e0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b48e4  64890d00000000       mov dword ptr fs:[0], ecx
// 007b48eb  59                   pop ecx
// 007b48ec  5f                   pop edi
// 007b48ed  5e                   pop esi
// 007b48ee  83c40c               add esp, 0xc
// 007b48f1  c20400               ret 4
// 007b48f4  6683f801             cmp ax, 1
// 007b48f8  7240                 jb 0x7b493a
// 007b48fa  6683f81a             cmp ax, 0x1a
// 007b48fe  773a                 ja 0x7b493a
// 007b4900  80fa02               cmp dl, 2
// 007b4903  7535                 jne 0x7b493a
// 007b4905  6a00                 push 0
// 007b4907  6a11                 push 0x11
// 007b4909  57                   push edi
// 007b490a  8bce                 mov ecx, esi
// 007b490c  e87ff9ffff           call 0x7b4290
// 007b4911  8b4604               mov eax, dword ptr [esi + 4]
// 007b4914  8a4802               mov cl, byte ptr [eax + 2]
// 007b4917  80c140               add cl, 0x40
// 007b491a  0fb6d1               movzx edx, cl
// 007b491d  52                   push edx
// 007b491e  8bcf                 mov ecx, edi
// 007b4920  ff15b4ff8900         call dword ptr [0x89ffb4]
// 007b4926  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b492a  64890d00000000       mov dword ptr fs:[0], ecx
// 007b4931  59                   pop ecx
// 007b4932  5f                   pop edi
// 007b4933  5e                   pop esi
// 007b4934  83c40c               add esp, 0xc
// 007b4937  c20400               ret 4
// 007b493a  6683f81b             cmp ax, 0x1b
// 007b493e  7465                 je 0x7b49a5
// 007b4940  6683f809             cmp ax, 9
// 007b4944  745f                 je 0x7b49a5
// 007b4946  0fb64102             movzx eax, byte ptr [ecx + 2]
// 007b494a  50                   push eax
// 007b494b  8bcf                 mov ecx, edi
// 007b494d  ff15b4ff8900         call dword ptr [0x89ffb4]
// 007b4953  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b4957  64890d00000000       mov dword ptr fs:[0], ecx
// 007b495e  59                   pop ecx
// 007b495f  5f                   pop edi
// 007b4960  5e                   pop esi
// 007b4961  83c40c               add esp, 0xc
// 007b4964  c20400               ret 4
// 007b4967  8bcf                 mov ecx, edi
// 007b4969  ff1554fb8900         call dword ptr [0x89fb54]
// 007b496f  85c0                 test eax, eax
// 007b4971  7e32                 jle 0x7b49a5
// 007b4973  8bcf                 mov ecx, edi
// 007b4975  ff1554fb8900         call dword ptr [0x89fb54]
// 007b497b  48                   dec eax
// 007b497c  50                   push eax
// 007b497d  8d4c2420             lea ecx, [esp + 0x20]
// 007b4981  51                   push ecx
// 007b4982  8bcf                 mov ecx, edi
// 007b4984  ff1510f48900         call dword ptr [0x89f410]
// 007b498a  50                   push eax
// 007b498b  8bcf                 mov ecx, edi
// 007b498d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007b4995  ff1508fa8900         call dword ptr [0x89fa08]
// 007b499b  8d4c241c             lea ecx, [esp + 0x1c]
// 007b499f  ff1510fd8900         call dword ptr [0x89fd10]
// 007b49a5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b49a9  64890d00000000       mov dword ptr fs:[0], ecx
// 007b49b0  59                   pop ecx
// 007b49b1  5f                   pop edi
// 007b49b2  5e                   pop esi
// 007b49b3  83c40c               add esp, 0xc
// 007b49b6  c20400               ret 4
// copied from an identical function in another client (function ?Format@CKeyHelper@CXTPShortcutManager@@QBEXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPShortcutManager.cpp