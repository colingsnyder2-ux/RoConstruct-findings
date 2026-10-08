// roc 2007-03 00594d10  unit: seg_00590000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00594d10
//
// 00594d10  83ec08               sub esp, 8
// 00594d13  53                   push ebx
// 00594d14  55                   push ebp
// 00594d15  56                   push esi
// 00594d16  57                   push edi
// 00594d17  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00594d1b  85ff                 test edi, edi
// 00594d1d  8bf1                 mov esi, ecx
// 00594d1f  8b4604               mov eax, dword ptr [esi + 4]
// 00594d22  8b28                 mov ebp, dword ptr [eax]
// 00594d24  7404                 je 0x594d2a
// 00594d26  3bfe                 cmp edi, esi
// 00594d28  7406                 je 0x594d30
// 00594d2a  ff1544e97700         call dword ptr [0x77e944]
// 00594d30  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00594d34  3bdd                 cmp ebx, ebp
// 00594d36  7559                 jne 0x594d91
// 00594d38  8b442428             mov eax, dword ptr [esp + 0x28]
// 00594d3c  85c0                 test eax, eax
// 00594d3e  8b6e04               mov ebp, dword ptr [esi + 4]
// 00594d41  7404                 je 0x594d47
// 00594d43  3bc6                 cmp eax, esi
// 00594d45  7406                 je 0x594d4d
// 00594d47  ff1544e97700         call dword ptr [0x77e944]
// 00594d4d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 00594d51  753e                 jne 0x594d91
// 00594d53  8b4e04               mov ecx, dword ptr [esi + 4]
// 00594d56  8b5104               mov edx, dword ptr [ecx + 4]
// 00594d59  52                   push edx
// 00594d5a  8bce                 mov ecx, esi
// 00594d5c  e80ff1ffff           call 0x593e70
// 00594d61  8b4604               mov eax, dword ptr [esi + 4]
// 00594d64  894004               mov dword ptr [eax + 4], eax
// 00594d67  8b4604               mov eax, dword ptr [esi + 4]
// 00594d6a  c7460800000000       mov dword ptr [esi + 8], 0
// 00594d71  8900                 mov dword ptr [eax], eax
// 00594d73  8b4604               mov eax, dword ptr [esi + 4]
// 00594d76  894008               mov dword ptr [eax + 8], eax
// 00594d79  8b4604               mov eax, dword ptr [esi + 4]
// 00594d7c  8b08                 mov ecx, dword ptr [eax]
// 00594d7e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00594d82  5f                   pop edi
// 00594d83  8930                 mov dword ptr [eax], esi
// 00594d85  5e                   pop esi
// 00594d86  5d                   pop ebp
// 00594d87  894804               mov dword ptr [eax + 4], ecx
// 00594d8a  5b                   pop ebx
// 00594d8b  83c408               add esp, 8
// 00594d8e  c21400               ret 0x14
// 00594d91  85ff                 test edi, edi
// 00594d93  7406                 je 0x594d9b
// 00594d95  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00594d99  7406                 je 0x594da1
// 00594d9b  ff1544e97700         call dword ptr [0x77e944]
// 00594da1  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 00594da5  7421                 je 0x594dc8
// 00594da7  8d4c2420             lea ecx, [esp + 0x20]
// 00594dab  e87034f0ff           call 0x498220
// 00594db0  53                   push ebx
// 00594db1  57                   push edi
// 00594db2  8d542418             lea edx, [esp + 0x18]
// 00594db6  52                   push edx
// 00594db7  8bce                 mov ecx, esi
// 00594db9  e8e2edffff           call 0x593ba0
// 00594dbe  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00594dc2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00594dc6  ebc9                 jmp 0x594d91
// 00594dc8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00594dcc  8938                 mov dword ptr [eax], edi
// 00594dce  5f                   pop edi
// 00594dcf  5e                   pop esi
// 00594dd0  5d                   pop ebp
// 00594dd1  895804               mov dword ptr [eax + 4], ebx
// 00594dd4  5b                   pop ebx
// 00594dd5  83c408               add esp, 8
// 00594dd8  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
