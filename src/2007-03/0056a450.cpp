// roc 2007-03 0056a450  unit: seg_00560000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056a450
//
// 0056a450  83ec08               sub esp, 8
// 0056a453  53                   push ebx
// 0056a454  55                   push ebp
// 0056a455  56                   push esi
// 0056a456  57                   push edi
// 0056a457  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0056a45b  85ff                 test edi, edi
// 0056a45d  8bf1                 mov esi, ecx
// 0056a45f  8b4604               mov eax, dword ptr [esi + 4]
// 0056a462  8b28                 mov ebp, dword ptr [eax]
// 0056a464  7404                 je 0x56a46a
// 0056a466  3bfe                 cmp edi, esi
// 0056a468  7406                 je 0x56a470
// 0056a46a  ff1544e97700         call dword ptr [0x77e944]
// 0056a470  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0056a474  3bdd                 cmp ebx, ebp
// 0056a476  7559                 jne 0x56a4d1
// 0056a478  8b442428             mov eax, dword ptr [esp + 0x28]
// 0056a47c  85c0                 test eax, eax
// 0056a47e  8b6e04               mov ebp, dword ptr [esi + 4]
// 0056a481  7404                 je 0x56a487
// 0056a483  3bc6                 cmp eax, esi
// 0056a485  7406                 je 0x56a48d
// 0056a487  ff1544e97700         call dword ptr [0x77e944]
// 0056a48d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 0056a491  753e                 jne 0x56a4d1
// 0056a493  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056a496  8b5104               mov edx, dword ptr [ecx + 4]
// 0056a499  52                   push edx
// 0056a49a  8bce                 mov ecx, esi
// 0056a49c  e8dffbffff           call 0x56a080
// 0056a4a1  8b4604               mov eax, dword ptr [esi + 4]
// 0056a4a4  894004               mov dword ptr [eax + 4], eax
// 0056a4a7  8b4604               mov eax, dword ptr [esi + 4]
// 0056a4aa  c7460800000000       mov dword ptr [esi + 8], 0
// 0056a4b1  8900                 mov dword ptr [eax], eax
// 0056a4b3  8b4604               mov eax, dword ptr [esi + 4]
// 0056a4b6  894008               mov dword ptr [eax + 8], eax
// 0056a4b9  8b4604               mov eax, dword ptr [esi + 4]
// 0056a4bc  8b08                 mov ecx, dword ptr [eax]
// 0056a4be  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056a4c2  5f                   pop edi
// 0056a4c3  8930                 mov dword ptr [eax], esi
// 0056a4c5  5e                   pop esi
// 0056a4c6  5d                   pop ebp
// 0056a4c7  894804               mov dword ptr [eax + 4], ecx
// 0056a4ca  5b                   pop ebx
// 0056a4cb  83c408               add esp, 8
// 0056a4ce  c21400               ret 0x14
// 0056a4d1  85ff                 test edi, edi
// 0056a4d3  7406                 je 0x56a4db
// 0056a4d5  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0056a4d9  7406                 je 0x56a4e1
// 0056a4db  ff1544e97700         call dword ptr [0x77e944]
// 0056a4e1  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 0056a4e5  7421                 je 0x56a508
// 0056a4e7  8d4c2420             lea ecx, [esp + 0x20]
// 0056a4eb  e8e0b80400           call 0x5b5dd0
// 0056a4f0  53                   push ebx
// 0056a4f1  57                   push edi
// 0056a4f2  8d542418             lea edx, [esp + 0x18]
// 0056a4f6  52                   push edx
// 0056a4f7  8bce                 mov ecx, esi
// 0056a4f9  e822f8ffff           call 0x569d20
// 0056a4fe  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0056a502  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0056a506  ebc9                 jmp 0x56a4d1
// 0056a508  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056a50c  8938                 mov dword ptr [eax], edi
// 0056a50e  5f                   pop edi
// 0056a50f  5e                   pop esi
// 0056a510  5d                   pop ebp
// 0056a511  895804               mov dword ptr [eax + 4], ebx
// 0056a514  5b                   pop ebx
// 0056a515  83c408               add esp, 8
// 0056a518  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
