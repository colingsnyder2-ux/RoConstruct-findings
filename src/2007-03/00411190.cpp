// roc 2007-03 00411190  unit: seg_00410000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00411190
//
// 00411190  83ec08               sub esp, 8
// 00411193  53                   push ebx
// 00411194  55                   push ebp
// 00411195  56                   push esi
// 00411196  57                   push edi
// 00411197  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0041119b  85ff                 test edi, edi
// 0041119d  8bf1                 mov esi, ecx
// 0041119f  8b4604               mov eax, dword ptr [esi + 4]
// 004111a2  8b28                 mov ebp, dword ptr [eax]
// 004111a4  7404                 je 0x4111aa
// 004111a6  3bfe                 cmp edi, esi
// 004111a8  7406                 je 0x4111b0
// 004111aa  ff1544e97700         call dword ptr [0x77e944]
// 004111b0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004111b4  3bdd                 cmp ebx, ebp
// 004111b6  7559                 jne 0x411211
// 004111b8  8b442428             mov eax, dword ptr [esp + 0x28]
// 004111bc  85c0                 test eax, eax
// 004111be  8b6e04               mov ebp, dword ptr [esi + 4]
// 004111c1  7404                 je 0x4111c7
// 004111c3  3bc6                 cmp eax, esi
// 004111c5  7406                 je 0x4111cd
// 004111c7  ff1544e97700         call dword ptr [0x77e944]
// 004111cd  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 004111d1  753e                 jne 0x411211
// 004111d3  8b4e04               mov ecx, dword ptr [esi + 4]
// 004111d6  8b5104               mov edx, dword ptr [ecx + 4]
// 004111d9  52                   push edx
// 004111da  8bce                 mov ecx, esi
// 004111dc  e8affeffff           call 0x411090
// 004111e1  8b4604               mov eax, dword ptr [esi + 4]
// 004111e4  894004               mov dword ptr [eax + 4], eax
// 004111e7  8b4604               mov eax, dword ptr [esi + 4]
// 004111ea  c7460800000000       mov dword ptr [esi + 8], 0
// 004111f1  8900                 mov dword ptr [eax], eax
// 004111f3  8b4604               mov eax, dword ptr [esi + 4]
// 004111f6  894008               mov dword ptr [eax + 8], eax
// 004111f9  8b4604               mov eax, dword ptr [esi + 4]
// 004111fc  8b08                 mov ecx, dword ptr [eax]
// 004111fe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00411202  5f                   pop edi
// 00411203  8930                 mov dword ptr [eax], esi
// 00411205  5e                   pop esi
// 00411206  5d                   pop ebp
// 00411207  894804               mov dword ptr [eax + 4], ecx
// 0041120a  5b                   pop ebx
// 0041120b  83c408               add esp, 8
// 0041120e  c21400               ret 0x14
// 00411211  85ff                 test edi, edi
// 00411213  7406                 je 0x41121b
// 00411215  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00411219  7406                 je 0x411221
// 0041121b  ff1544e97700         call dword ptr [0x77e944]
// 00411221  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 00411225  7421                 je 0x411248
// 00411227  8d4c2420             lea ecx, [esp + 0x20]
// 0041122b  e8a04b1a00           call 0x5b5dd0
// 00411230  53                   push ebx
// 00411231  57                   push edi
// 00411232  8d542418             lea edx, [esp + 0x18]
// 00411236  52                   push edx
// 00411237  8bce                 mov ecx, esi
// 00411239  e892fbffff           call 0x410dd0
// 0041123e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00411242  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00411246  ebc9                 jmp 0x411211
// 00411248  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041124c  8938                 mov dword ptr [eax], edi
// 0041124e  5f                   pop edi
// 0041124f  5e                   pop esi
// 00411250  5d                   pop ebp
// 00411251  895804               mov dword ptr [eax + 4], ebx
// 00411254  5b                   pop ebx
// 00411255  83c408               add esp, 8
// 00411258  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
