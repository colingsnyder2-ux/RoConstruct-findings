// roc 2007-03 005f1a10  unit: seg_005f0000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f1a10
//
// 005f1a10  83ec08               sub esp, 8
// 005f1a13  53                   push ebx
// 005f1a14  55                   push ebp
// 005f1a15  56                   push esi
// 005f1a16  57                   push edi
// 005f1a17  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005f1a1b  85ff                 test edi, edi
// 005f1a1d  8bf1                 mov esi, ecx
// 005f1a1f  8b4604               mov eax, dword ptr [esi + 4]
// 005f1a22  8b28                 mov ebp, dword ptr [eax]
// 005f1a24  7404                 je 0x5f1a2a
// 005f1a26  3bfe                 cmp edi, esi
// 005f1a28  7406                 je 0x5f1a30
// 005f1a2a  ff1544e97700         call dword ptr [0x77e944]
// 005f1a30  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005f1a34  3bdd                 cmp ebx, ebp
// 005f1a36  7559                 jne 0x5f1a91
// 005f1a38  8b442428             mov eax, dword ptr [esp + 0x28]
// 005f1a3c  85c0                 test eax, eax
// 005f1a3e  8b6e04               mov ebp, dword ptr [esi + 4]
// 005f1a41  7404                 je 0x5f1a47
// 005f1a43  3bc6                 cmp eax, esi
// 005f1a45  7406                 je 0x5f1a4d
// 005f1a47  ff1544e97700         call dword ptr [0x77e944]
// 005f1a4d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 005f1a51  753e                 jne 0x5f1a91
// 005f1a53  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f1a56  8b5104               mov edx, dword ptr [ecx + 4]
// 005f1a59  52                   push edx
// 005f1a5a  8bce                 mov ecx, esi
// 005f1a5c  e8aff9ffff           call 0x5f1410
// 005f1a61  8b4604               mov eax, dword ptr [esi + 4]
// 005f1a64  894004               mov dword ptr [eax + 4], eax
// 005f1a67  8b4604               mov eax, dword ptr [esi + 4]
// 005f1a6a  c7460800000000       mov dword ptr [esi + 8], 0
// 005f1a71  8900                 mov dword ptr [eax], eax
// 005f1a73  8b4604               mov eax, dword ptr [esi + 4]
// 005f1a76  894008               mov dword ptr [eax + 8], eax
// 005f1a79  8b4604               mov eax, dword ptr [esi + 4]
// 005f1a7c  8b08                 mov ecx, dword ptr [eax]
// 005f1a7e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f1a82  5f                   pop edi
// 005f1a83  8930                 mov dword ptr [eax], esi
// 005f1a85  5e                   pop esi
// 005f1a86  5d                   pop ebp
// 005f1a87  894804               mov dword ptr [eax + 4], ecx
// 005f1a8a  5b                   pop ebx
// 005f1a8b  83c408               add esp, 8
// 005f1a8e  c21400               ret 0x14
// 005f1a91  85ff                 test edi, edi
// 005f1a93  7406                 je 0x5f1a9b
// 005f1a95  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 005f1a99  7406                 je 0x5f1aa1
// 005f1a9b  ff1544e97700         call dword ptr [0x77e944]
// 005f1aa1  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 005f1aa5  7421                 je 0x5f1ac8
// 005f1aa7  8d4c2420             lea ecx, [esp + 0x20]
// 005f1aab  e850f7ffff           call 0x5f1200
// 005f1ab0  53                   push ebx
// 005f1ab1  57                   push edi
// 005f1ab2  8d542418             lea edx, [esp + 0x18]
// 005f1ab6  52                   push edx
// 005f1ab7  8bce                 mov ecx, esi
// 005f1ab9  e892faffff           call 0x5f1550
// 005f1abe  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005f1ac2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005f1ac6  ebc9                 jmp 0x5f1a91
// 005f1ac8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f1acc  8938                 mov dword ptr [eax], edi
// 005f1ace  5f                   pop edi
// 005f1acf  5e                   pop esi
// 005f1ad0  5d                   pop ebp
// 005f1ad1  895804               mov dword ptr [eax + 4], ebx
// 005f1ad4  5b                   pop ebx
// 005f1ad5  83c408               add esp, 8
// 005f1ad8  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
