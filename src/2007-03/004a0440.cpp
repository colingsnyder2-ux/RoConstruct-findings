// roc 2007-03 004a0440  unit: seg_004a0000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a0440
//
// 004a0440  83ec08               sub esp, 8
// 004a0443  53                   push ebx
// 004a0444  55                   push ebp
// 004a0445  56                   push esi
// 004a0446  57                   push edi
// 004a0447  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004a044b  85ff                 test edi, edi
// 004a044d  8bf1                 mov esi, ecx
// 004a044f  8b4604               mov eax, dword ptr [esi + 4]
// 004a0452  8b28                 mov ebp, dword ptr [eax]
// 004a0454  7404                 je 0x4a045a
// 004a0456  3bfe                 cmp edi, esi
// 004a0458  7406                 je 0x4a0460
// 004a045a  ff1544e97700         call dword ptr [0x77e944]
// 004a0460  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004a0464  3bdd                 cmp ebx, ebp
// 004a0466  7559                 jne 0x4a04c1
// 004a0468  8b442428             mov eax, dword ptr [esp + 0x28]
// 004a046c  85c0                 test eax, eax
// 004a046e  8b6e04               mov ebp, dword ptr [esi + 4]
// 004a0471  7404                 je 0x4a0477
// 004a0473  3bc6                 cmp eax, esi
// 004a0475  7406                 je 0x4a047d
// 004a0477  ff1544e97700         call dword ptr [0x77e944]
// 004a047d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 004a0481  753e                 jne 0x4a04c1
// 004a0483  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a0486  8b5104               mov edx, dword ptr [ecx + 4]
// 004a0489  52                   push edx
// 004a048a  8bce                 mov ecx, esi
// 004a048c  e8afecffff           call 0x49f140
// 004a0491  8b4604               mov eax, dword ptr [esi + 4]
// 004a0494  894004               mov dword ptr [eax + 4], eax
// 004a0497  8b4604               mov eax, dword ptr [esi + 4]
// 004a049a  c7460800000000       mov dword ptr [esi + 8], 0
// 004a04a1  8900                 mov dword ptr [eax], eax
// 004a04a3  8b4604               mov eax, dword ptr [esi + 4]
// 004a04a6  894008               mov dword ptr [eax + 8], eax
// 004a04a9  8b4604               mov eax, dword ptr [esi + 4]
// 004a04ac  8b08                 mov ecx, dword ptr [eax]
// 004a04ae  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a04b2  5f                   pop edi
// 004a04b3  8930                 mov dword ptr [eax], esi
// 004a04b5  5e                   pop esi
// 004a04b6  5d                   pop ebp
// 004a04b7  894804               mov dword ptr [eax + 4], ecx
// 004a04ba  5b                   pop ebx
// 004a04bb  83c408               add esp, 8
// 004a04be  c21400               ret 0x14
// 004a04c1  85ff                 test edi, edi
// 004a04c3  7406                 je 0x4a04cb
// 004a04c5  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 004a04c9  7406                 je 0x4a04d1
// 004a04cb  ff1544e97700         call dword ptr [0x77e944]
// 004a04d1  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 004a04d5  7421                 je 0x4a04f8
// 004a04d7  8d4c2420             lea ecx, [esp + 0x20]
// 004a04db  e8f0581100           call 0x5b5dd0
// 004a04e0  53                   push ebx
// 004a04e1  57                   push edi
// 004a04e2  8d542418             lea edx, [esp + 0x18]
// 004a04e6  52                   push edx
// 004a04e7  8bce                 mov ecx, esi
// 004a04e9  e822edffff           call 0x49f210
// 004a04ee  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004a04f2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004a04f6  ebc9                 jmp 0x4a04c1
// 004a04f8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a04fc  8938                 mov dword ptr [eax], edi
// 004a04fe  5f                   pop edi
// 004a04ff  5e                   pop esi
// 004a0500  5d                   pop ebp
// 004a0501  895804               mov dword ptr [eax + 4], ebx
// 004a0504  5b                   pop ebx
// 004a0505  83c408               add esp, 8
// 004a0508  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
