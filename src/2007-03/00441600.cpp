// roc 2007-03 00441600  unit: seg_00440000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00441600
//
// 00441600  83ec08               sub esp, 8
// 00441603  53                   push ebx
// 00441604  55                   push ebp
// 00441605  56                   push esi
// 00441606  57                   push edi
// 00441607  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0044160b  85ff                 test edi, edi
// 0044160d  8bf1                 mov esi, ecx
// 0044160f  8b4604               mov eax, dword ptr [esi + 4]
// 00441612  8b28                 mov ebp, dword ptr [eax]
// 00441614  7404                 je 0x44161a
// 00441616  3bfe                 cmp edi, esi
// 00441618  7406                 je 0x441620
// 0044161a  ff1544e97700         call dword ptr [0x77e944]
// 00441620  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00441624  3bdd                 cmp ebx, ebp
// 00441626  7559                 jne 0x441681
// 00441628  8b442428             mov eax, dword ptr [esp + 0x28]
// 0044162c  85c0                 test eax, eax
// 0044162e  8b6e04               mov ebp, dword ptr [esi + 4]
// 00441631  7404                 je 0x441637
// 00441633  3bc6                 cmp eax, esi
// 00441635  7406                 je 0x44163d
// 00441637  ff1544e97700         call dword ptr [0x77e944]
// 0044163d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 00441641  753e                 jne 0x441681
// 00441643  8b4e04               mov ecx, dword ptr [esi + 4]
// 00441646  8b5104               mov edx, dword ptr [ecx + 4]
// 00441649  52                   push edx
// 0044164a  8bce                 mov ecx, esi
// 0044164c  e8bff9ffff           call 0x441010
// 00441651  8b4604               mov eax, dword ptr [esi + 4]
// 00441654  894004               mov dword ptr [eax + 4], eax
// 00441657  8b4604               mov eax, dword ptr [esi + 4]
// 0044165a  c7460800000000       mov dword ptr [esi + 8], 0
// 00441661  8900                 mov dword ptr [eax], eax
// 00441663  8b4604               mov eax, dword ptr [esi + 4]
// 00441666  894008               mov dword ptr [eax + 8], eax
// 00441669  8b4604               mov eax, dword ptr [esi + 4]
// 0044166c  8b08                 mov ecx, dword ptr [eax]
// 0044166e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00441672  5f                   pop edi
// 00441673  8930                 mov dword ptr [eax], esi
// 00441675  5e                   pop esi
// 00441676  5d                   pop ebp
// 00441677  894804               mov dword ptr [eax + 4], ecx
// 0044167a  5b                   pop ebx
// 0044167b  83c408               add esp, 8
// 0044167e  c21400               ret 0x14
// 00441681  85ff                 test edi, edi
// 00441683  7406                 je 0x44168b
// 00441685  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00441689  7406                 je 0x441691
// 0044168b  ff1544e97700         call dword ptr [0x77e944]
// 00441691  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 00441695  7421                 je 0x4416b8
// 00441697  8d4c2420             lea ecx, [esp + 0x20]
// 0044169b  e8806b0500           call 0x498220
// 004416a0  53                   push ebx
// 004416a1  57                   push edi
// 004416a2  8d542418             lea edx, [esp + 0x18]
// 004416a6  52                   push edx
// 004416a7  8bce                 mov ecx, esi
// 004416a9  e8c2efffff           call 0x440670
// 004416ae  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004416b2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004416b6  ebc9                 jmp 0x441681
// 004416b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004416bc  8938                 mov dword ptr [eax], edi
// 004416be  5f                   pop edi
// 004416bf  5e                   pop esi
// 004416c0  5d                   pop ebp
// 004416c1  895804               mov dword ptr [eax + 4], ebx
// 004416c4  5b                   pop ebx
// 004416c5  83c408               add esp, 8
// 004416c8  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
