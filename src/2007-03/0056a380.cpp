// roc 2007-03 0056a380  unit: seg_00560000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056a380
//
// 0056a380  83ec08               sub esp, 8
// 0056a383  53                   push ebx
// 0056a384  55                   push ebp
// 0056a385  56                   push esi
// 0056a386  57                   push edi
// 0056a387  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0056a38b  85ff                 test edi, edi
// 0056a38d  8bf1                 mov esi, ecx
// 0056a38f  8b4604               mov eax, dword ptr [esi + 4]
// 0056a392  8b28                 mov ebp, dword ptr [eax]
// 0056a394  7404                 je 0x56a39a
// 0056a396  3bfe                 cmp edi, esi
// 0056a398  7406                 je 0x56a3a0
// 0056a39a  ff1544e97700         call dword ptr [0x77e944]
// 0056a3a0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0056a3a4  3bdd                 cmp ebx, ebp
// 0056a3a6  7559                 jne 0x56a401
// 0056a3a8  8b442428             mov eax, dword ptr [esp + 0x28]
// 0056a3ac  85c0                 test eax, eax
// 0056a3ae  8b6e04               mov ebp, dword ptr [esi + 4]
// 0056a3b1  7404                 je 0x56a3b7
// 0056a3b3  3bc6                 cmp eax, esi
// 0056a3b5  7406                 je 0x56a3bd
// 0056a3b7  ff1544e97700         call dword ptr [0x77e944]
// 0056a3bd  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 0056a3c1  753e                 jne 0x56a401
// 0056a3c3  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056a3c6  8b5104               mov edx, dword ptr [ecx + 4]
// 0056a3c9  52                   push edx
// 0056a3ca  8bce                 mov ecx, esi
// 0056a3cc  e81ffcffff           call 0x569ff0
// 0056a3d1  8b4604               mov eax, dword ptr [esi + 4]
// 0056a3d4  894004               mov dword ptr [eax + 4], eax
// 0056a3d7  8b4604               mov eax, dword ptr [esi + 4]
// 0056a3da  c7460800000000       mov dword ptr [esi + 8], 0
// 0056a3e1  8900                 mov dword ptr [eax], eax
// 0056a3e3  8b4604               mov eax, dword ptr [esi + 4]
// 0056a3e6  894008               mov dword ptr [eax + 8], eax
// 0056a3e9  8b4604               mov eax, dword ptr [esi + 4]
// 0056a3ec  8b08                 mov ecx, dword ptr [eax]
// 0056a3ee  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056a3f2  5f                   pop edi
// 0056a3f3  8930                 mov dword ptr [eax], esi
// 0056a3f5  5e                   pop esi
// 0056a3f6  5d                   pop ebp
// 0056a3f7  894804               mov dword ptr [eax + 4], ecx
// 0056a3fa  5b                   pop ebx
// 0056a3fb  83c408               add esp, 8
// 0056a3fe  c21400               ret 0x14
// 0056a401  85ff                 test edi, edi
// 0056a403  7406                 je 0x56a40b
// 0056a405  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0056a409  7406                 je 0x56a411
// 0056a40b  ff1544e97700         call dword ptr [0x77e944]
// 0056a411  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 0056a415  7421                 je 0x56a438
// 0056a417  8d4c2420             lea ecx, [esp + 0x20]
// 0056a41b  e85032fcff           call 0x52d670
// 0056a420  53                   push ebx
// 0056a421  57                   push edi
// 0056a422  8d542418             lea edx, [esp + 0x18]
// 0056a426  52                   push edx
// 0056a427  8bce                 mov ecx, esi
// 0056a429  e802f6ffff           call 0x569a30
// 0056a42e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0056a432  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0056a436  ebc9                 jmp 0x56a401
// 0056a438  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056a43c  8938                 mov dword ptr [eax], edi
// 0056a43e  5f                   pop edi
// 0056a43f  5e                   pop esi
// 0056a440  5d                   pop ebp
// 0056a441  895804               mov dword ptr [eax + 4], ebx
// 0056a444  5b                   pop ebx
// 0056a445  83c408               add esp, 8
// 0056a448  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
