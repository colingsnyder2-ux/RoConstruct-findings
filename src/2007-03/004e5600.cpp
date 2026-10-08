// roc 2007-03 004e5600  unit: seg_004e0000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e5600
//
// 004e5600  83ec08               sub esp, 8
// 004e5603  53                   push ebx
// 004e5604  55                   push ebp
// 004e5605  56                   push esi
// 004e5606  57                   push edi
// 004e5607  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004e560b  85ff                 test edi, edi
// 004e560d  8bf1                 mov esi, ecx
// 004e560f  8b4604               mov eax, dword ptr [esi + 4]
// 004e5612  8b28                 mov ebp, dword ptr [eax]
// 004e5614  7404                 je 0x4e561a
// 004e5616  3bfe                 cmp edi, esi
// 004e5618  7406                 je 0x4e5620
// 004e561a  ff1544e97700         call dword ptr [0x77e944]
// 004e5620  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004e5624  3bdd                 cmp ebx, ebp
// 004e5626  7559                 jne 0x4e5681
// 004e5628  8b442428             mov eax, dword ptr [esp + 0x28]
// 004e562c  85c0                 test eax, eax
// 004e562e  8b6e04               mov ebp, dword ptr [esi + 4]
// 004e5631  7404                 je 0x4e5637
// 004e5633  3bc6                 cmp eax, esi
// 004e5635  7406                 je 0x4e563d
// 004e5637  ff1544e97700         call dword ptr [0x77e944]
// 004e563d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 004e5641  753e                 jne 0x4e5681
// 004e5643  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e5646  8b5104               mov edx, dword ptr [ecx + 4]
// 004e5649  52                   push edx
// 004e564a  8bce                 mov ecx, esi
// 004e564c  e83ff2ffff           call 0x4e4890
// 004e5651  8b4604               mov eax, dword ptr [esi + 4]
// 004e5654  894004               mov dword ptr [eax + 4], eax
// 004e5657  8b4604               mov eax, dword ptr [esi + 4]
// 004e565a  c7460800000000       mov dword ptr [esi + 8], 0
// 004e5661  8900                 mov dword ptr [eax], eax
// 004e5663  8b4604               mov eax, dword ptr [esi + 4]
// 004e5666  894008               mov dword ptr [eax + 8], eax
// 004e5669  8b4604               mov eax, dword ptr [esi + 4]
// 004e566c  8b08                 mov ecx, dword ptr [eax]
// 004e566e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e5672  5f                   pop edi
// 004e5673  8930                 mov dword ptr [eax], esi
// 004e5675  5e                   pop esi
// 004e5676  5d                   pop ebp
// 004e5677  894804               mov dword ptr [eax + 4], ecx
// 004e567a  5b                   pop ebx
// 004e567b  83c408               add esp, 8
// 004e567e  c21400               ret 0x14
// 004e5681  85ff                 test edi, edi
// 004e5683  7406                 je 0x4e568b
// 004e5685  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 004e5689  7406                 je 0x4e5691
// 004e568b  ff1544e97700         call dword ptr [0x77e944]
// 004e5691  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 004e5695  7421                 je 0x4e56b8
// 004e5697  8d4c2420             lea ecx, [esp + 0x20]
// 004e569b  e8c0d8ffff           call 0x4e2f60
// 004e56a0  53                   push ebx
// 004e56a1  57                   push edi
// 004e56a2  8d542418             lea edx, [esp + 0x18]
// 004e56a6  52                   push edx
// 004e56a7  8bce                 mov ecx, esi
// 004e56a9  e822efffff           call 0x4e45d0
// 004e56ae  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004e56b2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004e56b6  ebc9                 jmp 0x4e5681
// 004e56b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e56bc  8938                 mov dword ptr [eax], edi
// 004e56be  5f                   pop edi
// 004e56bf  5e                   pop esi
// 004e56c0  5d                   pop ebp
// 004e56c1  895804               mov dword ptr [eax + 4], ebx
// 004e56c4  5b                   pop ebx
// 004e56c5  83c408               add esp, 8
// 004e56c8  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
