// roc 2007-03 00608800  unit: seg_00600000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00608800
//
// 00608800  83ec08               sub esp, 8
// 00608803  53                   push ebx
// 00608804  55                   push ebp
// 00608805  56                   push esi
// 00608806  57                   push edi
// 00608807  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0060880b  85ff                 test edi, edi
// 0060880d  8bf1                 mov esi, ecx
// 0060880f  8b4604               mov eax, dword ptr [esi + 4]
// 00608812  8b28                 mov ebp, dword ptr [eax]
// 00608814  7404                 je 0x60881a
// 00608816  3bfe                 cmp edi, esi
// 00608818  7406                 je 0x608820
// 0060881a  ff1544e97700         call dword ptr [0x77e944]
// 00608820  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00608824  3bdd                 cmp ebx, ebp
// 00608826  7559                 jne 0x608881
// 00608828  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060882c  85c0                 test eax, eax
// 0060882e  8b6e04               mov ebp, dword ptr [esi + 4]
// 00608831  7404                 je 0x608837
// 00608833  3bc6                 cmp eax, esi
// 00608835  7406                 je 0x60883d
// 00608837  ff1544e97700         call dword ptr [0x77e944]
// 0060883d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 00608841  753e                 jne 0x608881
// 00608843  8b4e04               mov ecx, dword ptr [esi + 4]
// 00608846  8b5104               mov edx, dword ptr [ecx + 4]
// 00608849  52                   push edx
// 0060884a  8bce                 mov ecx, esi
// 0060884c  e82fe8e5ff           call 0x467080
// 00608851  8b4604               mov eax, dword ptr [esi + 4]
// 00608854  894004               mov dword ptr [eax + 4], eax
// 00608857  8b4604               mov eax, dword ptr [esi + 4]
// 0060885a  c7460800000000       mov dword ptr [esi + 8], 0
// 00608861  8900                 mov dword ptr [eax], eax
// 00608863  8b4604               mov eax, dword ptr [esi + 4]
// 00608866  894008               mov dword ptr [eax + 8], eax
// 00608869  8b4604               mov eax, dword ptr [esi + 4]
// 0060886c  8b08                 mov ecx, dword ptr [eax]
// 0060886e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00608872  5f                   pop edi
// 00608873  8930                 mov dword ptr [eax], esi
// 00608875  5e                   pop esi
// 00608876  5d                   pop ebp
// 00608877  894804               mov dword ptr [eax + 4], ecx
// 0060887a  5b                   pop ebx
// 0060887b  83c408               add esp, 8
// 0060887e  c21400               ret 0x14
// 00608881  85ff                 test edi, edi
// 00608883  7406                 je 0x60888b
// 00608885  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00608889  7406                 je 0x608891
// 0060888b  ff1544e97700         call dword ptr [0x77e944]
// 00608891  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 00608895  7421                 je 0x6088b8
// 00608897  8d4c2420             lea ecx, [esp + 0x20]
// 0060889b  e8d04df2ff           call 0x52d670
// 006088a0  53                   push ebx
// 006088a1  57                   push edi
// 006088a2  8d542418             lea edx, [esp + 0x18]
// 006088a6  52                   push edx
// 006088a7  8bce                 mov ecx, esi
// 006088a9  e8a2fbffff           call 0x608450
// 006088ae  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006088b2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006088b6  ebc9                 jmp 0x608881
// 006088b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006088bc  8938                 mov dword ptr [eax], edi
// 006088be  5f                   pop edi
// 006088bf  5e                   pop esi
// 006088c0  5d                   pop ebp
// 006088c1  895804               mov dword ptr [eax + 4], ebx
// 006088c4  5b                   pop ebx
// 006088c5  83c408               add esp, 8
// 006088c8  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
