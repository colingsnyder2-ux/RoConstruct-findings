// roc 2007-03 005ad8c0  unit: seg_005a0000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ad8c0
//
// 005ad8c0  83ec08               sub esp, 8
// 005ad8c3  53                   push ebx
// 005ad8c4  55                   push ebp
// 005ad8c5  56                   push esi
// 005ad8c6  57                   push edi
// 005ad8c7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005ad8cb  85ff                 test edi, edi
// 005ad8cd  8bf1                 mov esi, ecx
// 005ad8cf  8b4604               mov eax, dword ptr [esi + 4]
// 005ad8d2  8b28                 mov ebp, dword ptr [eax]
// 005ad8d4  7404                 je 0x5ad8da
// 005ad8d6  3bfe                 cmp edi, esi
// 005ad8d8  7406                 je 0x5ad8e0
// 005ad8da  ff1544e97700         call dword ptr [0x77e944]
// 005ad8e0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005ad8e4  3bdd                 cmp ebx, ebp
// 005ad8e6  7559                 jne 0x5ad941
// 005ad8e8  8b442428             mov eax, dword ptr [esp + 0x28]
// 005ad8ec  85c0                 test eax, eax
// 005ad8ee  8b6e04               mov ebp, dword ptr [esi + 4]
// 005ad8f1  7404                 je 0x5ad8f7
// 005ad8f3  3bc6                 cmp eax, esi
// 005ad8f5  7406                 je 0x5ad8fd
// 005ad8f7  ff1544e97700         call dword ptr [0x77e944]
// 005ad8fd  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 005ad901  753e                 jne 0x5ad941
// 005ad903  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ad906  8b5104               mov edx, dword ptr [ecx + 4]
// 005ad909  52                   push edx
// 005ad90a  8bce                 mov ecx, esi
// 005ad90c  e82f63e5ff           call 0x403c40
// 005ad911  8b4604               mov eax, dword ptr [esi + 4]
// 005ad914  894004               mov dword ptr [eax + 4], eax
// 005ad917  8b4604               mov eax, dword ptr [esi + 4]
// 005ad91a  c7460800000000       mov dword ptr [esi + 8], 0
// 005ad921  8900                 mov dword ptr [eax], eax
// 005ad923  8b4604               mov eax, dword ptr [esi + 4]
// 005ad926  894008               mov dword ptr [eax + 8], eax
// 005ad929  8b4604               mov eax, dword ptr [esi + 4]
// 005ad92c  8b08                 mov ecx, dword ptr [eax]
// 005ad92e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ad932  5f                   pop edi
// 005ad933  8930                 mov dword ptr [eax], esi
// 005ad935  5e                   pop esi
// 005ad936  5d                   pop ebp
// 005ad937  894804               mov dword ptr [eax + 4], ecx
// 005ad93a  5b                   pop ebx
// 005ad93b  83c408               add esp, 8
// 005ad93e  c21400               ret 0x14
// 005ad941  85ff                 test edi, edi
// 005ad943  7406                 je 0x5ad94b
// 005ad945  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 005ad949  7406                 je 0x5ad951
// 005ad94b  ff1544e97700         call dword ptr [0x77e944]
// 005ad951  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 005ad955  7421                 je 0x5ad978
// 005ad957  8d4c2420             lea ecx, [esp + 0x20]
// 005ad95b  e860e5eeff           call 0x49bec0
// 005ad960  53                   push ebx
// 005ad961  57                   push edi
// 005ad962  8d542418             lea edx, [esp + 0x18]
// 005ad966  52                   push edx
// 005ad967  8bce                 mov ecx, esi
// 005ad969  e802f8ffff           call 0x5ad170
// 005ad96e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005ad972  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005ad976  ebc9                 jmp 0x5ad941
// 005ad978  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ad97c  8938                 mov dword ptr [eax], edi
// 005ad97e  5f                   pop edi
// 005ad97f  5e                   pop esi
// 005ad980  5d                   pop ebp
// 005ad981  895804               mov dword ptr [eax + 4], ebx
// 005ad984  5b                   pop ebx
// 005ad985  83c408               add esp, 8
// 005ad988  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
