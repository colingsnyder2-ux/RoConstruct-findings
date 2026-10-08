// roc 2007-03 00423e30  unit: seg_00420000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00423e30
//
// 00423e30  83ec08               sub esp, 8
// 00423e33  53                   push ebx
// 00423e34  55                   push ebp
// 00423e35  56                   push esi
// 00423e36  57                   push edi
// 00423e37  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00423e3b  85ff                 test edi, edi
// 00423e3d  8bf1                 mov esi, ecx
// 00423e3f  8b4604               mov eax, dword ptr [esi + 4]
// 00423e42  8b28                 mov ebp, dword ptr [eax]
// 00423e44  7404                 je 0x423e4a
// 00423e46  3bfe                 cmp edi, esi
// 00423e48  7406                 je 0x423e50
// 00423e4a  ff1544e97700         call dword ptr [0x77e944]
// 00423e50  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00423e54  3bdd                 cmp ebx, ebp
// 00423e56  7559                 jne 0x423eb1
// 00423e58  8b442428             mov eax, dword ptr [esp + 0x28]
// 00423e5c  85c0                 test eax, eax
// 00423e5e  8b6e04               mov ebp, dword ptr [esi + 4]
// 00423e61  7404                 je 0x423e67
// 00423e63  3bc6                 cmp eax, esi
// 00423e65  7406                 je 0x423e6d
// 00423e67  ff1544e97700         call dword ptr [0x77e944]
// 00423e6d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 00423e71  753e                 jne 0x423eb1
// 00423e73  8b4e04               mov ecx, dword ptr [esi + 4]
// 00423e76  8b5104               mov edx, dword ptr [ecx + 4]
// 00423e79  52                   push edx
// 00423e7a  8bce                 mov ecx, esi
// 00423e7c  e8fff0ffff           call 0x422f80
// 00423e81  8b4604               mov eax, dword ptr [esi + 4]
// 00423e84  894004               mov dword ptr [eax + 4], eax
// 00423e87  8b4604               mov eax, dword ptr [esi + 4]
// 00423e8a  c7460800000000       mov dword ptr [esi + 8], 0
// 00423e91  8900                 mov dword ptr [eax], eax
// 00423e93  8b4604               mov eax, dword ptr [esi + 4]
// 00423e96  894008               mov dword ptr [eax + 8], eax
// 00423e99  8b4604               mov eax, dword ptr [esi + 4]
// 00423e9c  8b08                 mov ecx, dword ptr [eax]
// 00423e9e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00423ea2  5f                   pop edi
// 00423ea3  8930                 mov dword ptr [eax], esi
// 00423ea5  5e                   pop esi
// 00423ea6  5d                   pop ebp
// 00423ea7  894804               mov dword ptr [eax + 4], ecx
// 00423eaa  5b                   pop ebx
// 00423eab  83c408               add esp, 8
// 00423eae  c21400               ret 0x14
// 00423eb1  85ff                 test edi, edi
// 00423eb3  7406                 je 0x423ebb
// 00423eb5  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00423eb9  7406                 je 0x423ec1
// 00423ebb  ff1544e97700         call dword ptr [0x77e944]
// 00423ec1  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 00423ec5  7421                 je 0x423ee8
// 00423ec7  8d4c2420             lea ecx, [esp + 0x20]
// 00423ecb  e8001f1900           call 0x5b5dd0
// 00423ed0  53                   push ebx
// 00423ed1  57                   push edi
// 00423ed2  8d542418             lea edx, [esp + 0x18]
// 00423ed6  52                   push edx
// 00423ed7  8bce                 mov ecx, esi
// 00423ed9  e842f4ffff           call 0x423320
// 00423ede  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00423ee2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00423ee6  ebc9                 jmp 0x423eb1
// 00423ee8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00423eec  8938                 mov dword ptr [eax], edi
// 00423eee  5f                   pop edi
// 00423eef  5e                   pop esi
// 00423ef0  5d                   pop ebp
// 00423ef1  895804               mov dword ptr [eax + 4], ebx
// 00423ef4  5b                   pop ebx
// 00423ef5  83c408               add esp, 8
// 00423ef8  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
