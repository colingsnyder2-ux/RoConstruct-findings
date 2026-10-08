// roc 2007-03 004c36b0  unit: seg_004c0000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c36b0
//
// 004c36b0  83ec08               sub esp, 8
// 004c36b3  53                   push ebx
// 004c36b4  55                   push ebp
// 004c36b5  56                   push esi
// 004c36b6  57                   push edi
// 004c36b7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004c36bb  85ff                 test edi, edi
// 004c36bd  8bf1                 mov esi, ecx
// 004c36bf  8b4604               mov eax, dword ptr [esi + 4]
// 004c36c2  8b28                 mov ebp, dword ptr [eax]
// 004c36c4  7404                 je 0x4c36ca
// 004c36c6  3bfe                 cmp edi, esi
// 004c36c8  7406                 je 0x4c36d0
// 004c36ca  ff1544e97700         call dword ptr [0x77e944]
// 004c36d0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004c36d4  3bdd                 cmp ebx, ebp
// 004c36d6  7559                 jne 0x4c3731
// 004c36d8  8b442428             mov eax, dword ptr [esp + 0x28]
// 004c36dc  85c0                 test eax, eax
// 004c36de  8b6e04               mov ebp, dword ptr [esi + 4]
// 004c36e1  7404                 je 0x4c36e7
// 004c36e3  3bc6                 cmp eax, esi
// 004c36e5  7406                 je 0x4c36ed
// 004c36e7  ff1544e97700         call dword ptr [0x77e944]
// 004c36ed  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 004c36f1  753e                 jne 0x4c3731
// 004c36f3  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c36f6  8b5104               mov edx, dword ptr [ecx + 4]
// 004c36f9  52                   push edx
// 004c36fa  8bce                 mov ecx, esi
// 004c36fc  e88ffaffff           call 0x4c3190
// 004c3701  8b4604               mov eax, dword ptr [esi + 4]
// 004c3704  894004               mov dword ptr [eax + 4], eax
// 004c3707  8b4604               mov eax, dword ptr [esi + 4]
// 004c370a  c7460800000000       mov dword ptr [esi + 8], 0
// 004c3711  8900                 mov dword ptr [eax], eax
// 004c3713  8b4604               mov eax, dword ptr [esi + 4]
// 004c3716  894008               mov dword ptr [eax + 8], eax
// 004c3719  8b4604               mov eax, dword ptr [esi + 4]
// 004c371c  8b08                 mov ecx, dword ptr [eax]
// 004c371e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004c3722  5f                   pop edi
// 004c3723  8930                 mov dword ptr [eax], esi
// 004c3725  5e                   pop esi
// 004c3726  5d                   pop ebp
// 004c3727  894804               mov dword ptr [eax + 4], ecx
// 004c372a  5b                   pop ebx
// 004c372b  83c408               add esp, 8
// 004c372e  c21400               ret 0x14
// 004c3731  85ff                 test edi, edi
// 004c3733  7406                 je 0x4c373b
// 004c3735  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 004c3739  7406                 je 0x4c3741
// 004c373b  ff1544e97700         call dword ptr [0x77e944]
// 004c3741  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 004c3745  7421                 je 0x4c3768
// 004c3747  8d4c2420             lea ecx, [esp + 0x20]
// 004c374b  e8d04afdff           call 0x498220
// 004c3750  53                   push ebx
// 004c3751  57                   push edi
// 004c3752  8d542418             lea edx, [esp + 0x18]
// 004c3756  52                   push edx
// 004c3757  8bce                 mov ecx, esi
// 004c3759  e852f7ffff           call 0x4c2eb0
// 004c375e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004c3762  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004c3766  ebc9                 jmp 0x4c3731
// 004c3768  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004c376c  8938                 mov dword ptr [eax], edi
// 004c376e  5f                   pop edi
// 004c376f  5e                   pop esi
// 004c3770  5d                   pop ebp
// 004c3771  895804               mov dword ptr [eax + 4], ebx
// 004c3774  5b                   pop ebx
// 004c3775  83c408               add esp, 8
// 004c3778  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
