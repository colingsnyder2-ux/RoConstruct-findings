// roc 2007-03 005f63c0  unit: seg_005f0000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f63c0
//
// 005f63c0  83ec08               sub esp, 8
// 005f63c3  53                   push ebx
// 005f63c4  55                   push ebp
// 005f63c5  56                   push esi
// 005f63c6  57                   push edi
// 005f63c7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005f63cb  85ff                 test edi, edi
// 005f63cd  8bf1                 mov esi, ecx
// 005f63cf  8b4604               mov eax, dword ptr [esi + 4]
// 005f63d2  8b28                 mov ebp, dword ptr [eax]
// 005f63d4  7404                 je 0x5f63da
// 005f63d6  3bfe                 cmp edi, esi
// 005f63d8  7406                 je 0x5f63e0
// 005f63da  ff1544e97700         call dword ptr [0x77e944]
// 005f63e0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005f63e4  3bdd                 cmp ebx, ebp
// 005f63e6  7559                 jne 0x5f6441
// 005f63e8  8b442428             mov eax, dword ptr [esp + 0x28]
// 005f63ec  85c0                 test eax, eax
// 005f63ee  8b6e04               mov ebp, dword ptr [esi + 4]
// 005f63f1  7404                 je 0x5f63f7
// 005f63f3  3bc6                 cmp eax, esi
// 005f63f5  7406                 je 0x5f63fd
// 005f63f7  ff1544e97700         call dword ptr [0x77e944]
// 005f63fd  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 005f6401  753e                 jne 0x5f6441
// 005f6403  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f6406  8b5104               mov edx, dword ptr [ecx + 4]
// 005f6409  52                   push edx
// 005f640a  8bce                 mov ecx, esi
// 005f640c  e83ff9ffff           call 0x5f5d50
// 005f6411  8b4604               mov eax, dword ptr [esi + 4]
// 005f6414  894004               mov dword ptr [eax + 4], eax
// 005f6417  8b4604               mov eax, dword ptr [esi + 4]
// 005f641a  c7460800000000       mov dword ptr [esi + 8], 0
// 005f6421  8900                 mov dword ptr [eax], eax
// 005f6423  8b4604               mov eax, dword ptr [esi + 4]
// 005f6426  894008               mov dword ptr [eax + 8], eax
// 005f6429  8b4604               mov eax, dword ptr [esi + 4]
// 005f642c  8b08                 mov ecx, dword ptr [eax]
// 005f642e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f6432  5f                   pop edi
// 005f6433  8930                 mov dword ptr [eax], esi
// 005f6435  5e                   pop esi
// 005f6436  5d                   pop ebp
// 005f6437  894804               mov dword ptr [eax + 4], ecx
// 005f643a  5b                   pop ebx
// 005f643b  83c408               add esp, 8
// 005f643e  c21400               ret 0x14
// 005f6441  85ff                 test edi, edi
// 005f6443  7406                 je 0x5f644b
// 005f6445  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 005f6449  7406                 je 0x5f6451
// 005f644b  ff1544e97700         call dword ptr [0x77e944]
// 005f6451  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 005f6455  7421                 je 0x5f6478
// 005f6457  8d4c2420             lea ecx, [esp + 0x20]
// 005f645b  e800cbeeff           call 0x4e2f60
// 005f6460  53                   push ebx
// 005f6461  57                   push edi
// 005f6462  8d542418             lea edx, [esp + 0x18]
// 005f6466  52                   push edx
// 005f6467  8bce                 mov ecx, esi
// 005f6469  e822fbffff           call 0x5f5f90
// 005f646e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005f6472  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005f6476  ebc9                 jmp 0x5f6441
// 005f6478  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f647c  8938                 mov dword ptr [eax], edi
// 005f647e  5f                   pop edi
// 005f647f  5e                   pop esi
// 005f6480  5d                   pop ebp
// 005f6481  895804               mov dword ptr [eax + 4], ebx
// 005f6484  5b                   pop ebx
// 005f6485  83c408               add esp, 8
// 005f6488  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
