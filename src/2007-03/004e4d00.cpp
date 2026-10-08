// roc 2007-03 004e4d00  unit: seg_004e0000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e4d00
//
// 004e4d00  83ec08               sub esp, 8
// 004e4d03  53                   push ebx
// 004e4d04  55                   push ebp
// 004e4d05  56                   push esi
// 004e4d06  57                   push edi
// 004e4d07  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004e4d0b  85ff                 test edi, edi
// 004e4d0d  8bf1                 mov esi, ecx
// 004e4d0f  8b4604               mov eax, dword ptr [esi + 4]
// 004e4d12  8b28                 mov ebp, dword ptr [eax]
// 004e4d14  7404                 je 0x4e4d1a
// 004e4d16  3bfe                 cmp edi, esi
// 004e4d18  7406                 je 0x4e4d20
// 004e4d1a  ff1544e97700         call dword ptr [0x77e944]
// 004e4d20  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004e4d24  3bdd                 cmp ebx, ebp
// 004e4d26  7559                 jne 0x4e4d81
// 004e4d28  8b442428             mov eax, dword ptr [esp + 0x28]
// 004e4d2c  85c0                 test eax, eax
// 004e4d2e  8b6e04               mov ebp, dword ptr [esi + 4]
// 004e4d31  7404                 je 0x4e4d37
// 004e4d33  3bc6                 cmp eax, esi
// 004e4d35  7406                 je 0x4e4d3d
// 004e4d37  ff1544e97700         call dword ptr [0x77e944]
// 004e4d3d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 004e4d41  753e                 jne 0x4e4d81
// 004e4d43  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e4d46  8b5104               mov edx, dword ptr [ecx + 4]
// 004e4d49  52                   push edx
// 004e4d4a  8bce                 mov ecx, esi
// 004e4d4c  e8dff3ffff           call 0x4e4130
// 004e4d51  8b4604               mov eax, dword ptr [esi + 4]
// 004e4d54  894004               mov dword ptr [eax + 4], eax
// 004e4d57  8b4604               mov eax, dword ptr [esi + 4]
// 004e4d5a  c7460800000000       mov dword ptr [esi + 8], 0
// 004e4d61  8900                 mov dword ptr [eax], eax
// 004e4d63  8b4604               mov eax, dword ptr [esi + 4]
// 004e4d66  894008               mov dword ptr [eax + 8], eax
// 004e4d69  8b4604               mov eax, dword ptr [esi + 4]
// 004e4d6c  8b08                 mov ecx, dword ptr [eax]
// 004e4d6e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e4d72  5f                   pop edi
// 004e4d73  8930                 mov dword ptr [eax], esi
// 004e4d75  5e                   pop esi
// 004e4d76  5d                   pop ebp
// 004e4d77  894804               mov dword ptr [eax + 4], ecx
// 004e4d7a  5b                   pop ebx
// 004e4d7b  83c408               add esp, 8
// 004e4d7e  c21400               ret 0x14
// 004e4d81  85ff                 test edi, edi
// 004e4d83  7406                 je 0x4e4d8b
// 004e4d85  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 004e4d89  7406                 je 0x4e4d91
// 004e4d8b  ff1544e97700         call dword ptr [0x77e944]
// 004e4d91  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 004e4d95  7421                 je 0x4e4db8
// 004e4d97  8d4c2420             lea ecx, [esp + 0x20]
// 004e4d9b  e830100d00           call 0x5b5dd0
// 004e4da0  53                   push ebx
// 004e4da1  57                   push edi
// 004e4da2  8d542418             lea edx, [esp + 0x18]
// 004e4da6  52                   push edx
// 004e4da7  8bce                 mov ecx, esi
// 004e4da9  e852f5ffff           call 0x4e4300
// 004e4dae  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004e4db2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004e4db6  ebc9                 jmp 0x4e4d81
// 004e4db8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e4dbc  8938                 mov dword ptr [eax], edi
// 004e4dbe  5f                   pop edi
// 004e4dbf  5e                   pop esi
// 004e4dc0  5d                   pop ebp
// 004e4dc1  895804               mov dword ptr [eax + 4], ebx
// 004e4dc4  5b                   pop ebx
// 004e4dc5  83c408               add esp, 8
// 004e4dc8  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
