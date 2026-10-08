// roc 2007-03 0060a410  unit: seg_00600000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0060a410
//
// 0060a410  83ec08               sub esp, 8
// 0060a413  53                   push ebx
// 0060a414  55                   push ebp
// 0060a415  56                   push esi
// 0060a416  57                   push edi
// 0060a417  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0060a41b  85ff                 test edi, edi
// 0060a41d  8bf1                 mov esi, ecx
// 0060a41f  8b4604               mov eax, dword ptr [esi + 4]
// 0060a422  8b28                 mov ebp, dword ptr [eax]
// 0060a424  7404                 je 0x60a42a
// 0060a426  3bfe                 cmp edi, esi
// 0060a428  7406                 je 0x60a430
// 0060a42a  ff1544e97700         call dword ptr [0x77e944]
// 0060a430  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0060a434  3bdd                 cmp ebx, ebp
// 0060a436  7559                 jne 0x60a491
// 0060a438  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060a43c  85c0                 test eax, eax
// 0060a43e  8b6e04               mov ebp, dword ptr [esi + 4]
// 0060a441  7404                 je 0x60a447
// 0060a443  3bc6                 cmp eax, esi
// 0060a445  7406                 je 0x60a44d
// 0060a447  ff1544e97700         call dword ptr [0x77e944]
// 0060a44d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 0060a451  753e                 jne 0x60a491
// 0060a453  8b4e04               mov ecx, dword ptr [esi + 4]
// 0060a456  8b5104               mov edx, dword ptr [ecx + 4]
// 0060a459  52                   push edx
// 0060a45a  8bce                 mov ecx, esi
// 0060a45c  e86ff3ffff           call 0x6097d0
// 0060a461  8b4604               mov eax, dword ptr [esi + 4]
// 0060a464  894004               mov dword ptr [eax + 4], eax
// 0060a467  8b4604               mov eax, dword ptr [esi + 4]
// 0060a46a  c7460800000000       mov dword ptr [esi + 8], 0
// 0060a471  8900                 mov dword ptr [eax], eax
// 0060a473  8b4604               mov eax, dword ptr [esi + 4]
// 0060a476  894008               mov dword ptr [eax + 8], eax
// 0060a479  8b4604               mov eax, dword ptr [esi + 4]
// 0060a47c  8b08                 mov ecx, dword ptr [eax]
// 0060a47e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060a482  5f                   pop edi
// 0060a483  8930                 mov dword ptr [eax], esi
// 0060a485  5e                   pop esi
// 0060a486  5d                   pop ebp
// 0060a487  894804               mov dword ptr [eax + 4], ecx
// 0060a48a  5b                   pop ebx
// 0060a48b  83c408               add esp, 8
// 0060a48e  c21400               ret 0x14
// 0060a491  85ff                 test edi, edi
// 0060a493  7406                 je 0x60a49b
// 0060a495  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0060a499  7406                 je 0x60a4a1
// 0060a49b  ff1544e97700         call dword ptr [0x77e944]
// 0060a4a1  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 0060a4a5  7421                 je 0x60a4c8
// 0060a4a7  8d4c2420             lea ecx, [esp + 0x20]
// 0060a4ab  e870dde8ff           call 0x498220
// 0060a4b0  53                   push ebx
// 0060a4b1  57                   push edi
// 0060a4b2  8d542418             lea edx, [esp + 0x18]
// 0060a4b6  52                   push edx
// 0060a4b7  8bce                 mov ecx, esi
// 0060a4b9  e8d2eeffff           call 0x609390
// 0060a4be  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0060a4c2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0060a4c6  ebc9                 jmp 0x60a491
// 0060a4c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060a4cc  8938                 mov dword ptr [eax], edi
// 0060a4ce  5f                   pop edi
// 0060a4cf  5e                   pop esi
// 0060a4d0  5d                   pop ebp
// 0060a4d1  895804               mov dword ptr [eax + 4], ebx
// 0060a4d4  5b                   pop ebx
// 0060a4d5  83c408               add esp, 8
// 0060a4d8  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
