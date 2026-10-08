// roc 2007-03 006195c0  unit: seg_00610000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006195c0
//
// 006195c0  83ec08               sub esp, 8
// 006195c3  53                   push ebx
// 006195c4  55                   push ebp
// 006195c5  56                   push esi
// 006195c6  57                   push edi
// 006195c7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006195cb  85ff                 test edi, edi
// 006195cd  8bf1                 mov esi, ecx
// 006195cf  8b4604               mov eax, dword ptr [esi + 4]
// 006195d2  8b28                 mov ebp, dword ptr [eax]
// 006195d4  7404                 je 0x6195da
// 006195d6  3bfe                 cmp edi, esi
// 006195d8  7406                 je 0x6195e0
// 006195da  ff1544e97700         call dword ptr [0x77e944]
// 006195e0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006195e4  3bdd                 cmp ebx, ebp
// 006195e6  7559                 jne 0x619641
// 006195e8  8b442428             mov eax, dword ptr [esp + 0x28]
// 006195ec  85c0                 test eax, eax
// 006195ee  8b6e04               mov ebp, dword ptr [esi + 4]
// 006195f1  7404                 je 0x6195f7
// 006195f3  3bc6                 cmp eax, esi
// 006195f5  7406                 je 0x6195fd
// 006195f7  ff1544e97700         call dword ptr [0x77e944]
// 006195fd  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 00619601  753e                 jne 0x619641
// 00619603  8b4e04               mov ecx, dword ptr [esi + 4]
// 00619606  8b5104               mov edx, dword ptr [ecx + 4]
// 00619609  52                   push edx
// 0061960a  8bce                 mov ecx, esi
// 0061960c  e85ff2ffff           call 0x618870
// 00619611  8b4604               mov eax, dword ptr [esi + 4]
// 00619614  894004               mov dword ptr [eax + 4], eax
// 00619617  8b4604               mov eax, dword ptr [esi + 4]
// 0061961a  c7460800000000       mov dword ptr [esi + 8], 0
// 00619621  8900                 mov dword ptr [eax], eax
// 00619623  8b4604               mov eax, dword ptr [esi + 4]
// 00619626  894008               mov dword ptr [eax + 8], eax
// 00619629  8b4604               mov eax, dword ptr [esi + 4]
// 0061962c  8b08                 mov ecx, dword ptr [eax]
// 0061962e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00619632  5f                   pop edi
// 00619633  8930                 mov dword ptr [eax], esi
// 00619635  5e                   pop esi
// 00619636  5d                   pop ebp
// 00619637  894804               mov dword ptr [eax + 4], ecx
// 0061963a  5b                   pop ebx
// 0061963b  83c408               add esp, 8
// 0061963e  c21400               ret 0x14
// 00619641  85ff                 test edi, edi
// 00619643  7406                 je 0x61964b
// 00619645  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00619649  7406                 je 0x619651
// 0061964b  ff1544e97700         call dword ptr [0x77e944]
// 00619651  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 00619655  7421                 je 0x619678
// 00619657  8d4c2420             lea ecx, [esp + 0x20]
// 0061965b  e8d0efffff           call 0x618630
// 00619660  53                   push ebx
// 00619661  57                   push edi
// 00619662  8d542418             lea edx, [esp + 0x18]
// 00619666  52                   push edx
// 00619667  8bce                 mov ecx, esi
// 00619669  e852f7ffff           call 0x618dc0
// 0061966e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00619672  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00619676  ebc9                 jmp 0x619641
// 00619678  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0061967c  8938                 mov dword ptr [eax], edi
// 0061967e  5f                   pop edi
// 0061967f  5e                   pop esi
// 00619680  5d                   pop ebp
// 00619681  895804               mov dword ptr [eax + 4], ebx
// 00619684  5b                   pop ebx
// 00619685  83c408               add esp, 8
// 00619688  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
