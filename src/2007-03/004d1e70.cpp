// roc 2007-03 004d1e70  unit: seg_004d0000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d1e70
//
// 004d1e70  83ec08               sub esp, 8
// 004d1e73  53                   push ebx
// 004d1e74  55                   push ebp
// 004d1e75  56                   push esi
// 004d1e76  57                   push edi
// 004d1e77  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004d1e7b  85ff                 test edi, edi
// 004d1e7d  8bf1                 mov esi, ecx
// 004d1e7f  8b4604               mov eax, dword ptr [esi + 4]
// 004d1e82  8b28                 mov ebp, dword ptr [eax]
// 004d1e84  7404                 je 0x4d1e8a
// 004d1e86  3bfe                 cmp edi, esi
// 004d1e88  7406                 je 0x4d1e90
// 004d1e8a  ff1544e97700         call dword ptr [0x77e944]
// 004d1e90  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004d1e94  3bdd                 cmp ebx, ebp
// 004d1e96  7559                 jne 0x4d1ef1
// 004d1e98  8b442428             mov eax, dword ptr [esp + 0x28]
// 004d1e9c  85c0                 test eax, eax
// 004d1e9e  8b6e04               mov ebp, dword ptr [esi + 4]
// 004d1ea1  7404                 je 0x4d1ea7
// 004d1ea3  3bc6                 cmp eax, esi
// 004d1ea5  7406                 je 0x4d1ead
// 004d1ea7  ff1544e97700         call dword ptr [0x77e944]
// 004d1ead  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 004d1eb1  753e                 jne 0x4d1ef1
// 004d1eb3  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d1eb6  8b5104               mov edx, dword ptr [ecx + 4]
// 004d1eb9  52                   push edx
// 004d1eba  8bce                 mov ecx, esi
// 004d1ebc  e8effbffff           call 0x4d1ab0
// 004d1ec1  8b4604               mov eax, dword ptr [esi + 4]
// 004d1ec4  894004               mov dword ptr [eax + 4], eax
// 004d1ec7  8b4604               mov eax, dword ptr [esi + 4]
// 004d1eca  c7460800000000       mov dword ptr [esi + 8], 0
// 004d1ed1  8900                 mov dword ptr [eax], eax
// 004d1ed3  8b4604               mov eax, dword ptr [esi + 4]
// 004d1ed6  894008               mov dword ptr [eax + 8], eax
// 004d1ed9  8b4604               mov eax, dword ptr [esi + 4]
// 004d1edc  8b08                 mov ecx, dword ptr [eax]
// 004d1ede  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004d1ee2  5f                   pop edi
// 004d1ee3  8930                 mov dword ptr [eax], esi
// 004d1ee5  5e                   pop esi
// 004d1ee6  5d                   pop ebp
// 004d1ee7  894804               mov dword ptr [eax + 4], ecx
// 004d1eea  5b                   pop ebx
// 004d1eeb  83c408               add esp, 8
// 004d1eee  c21400               ret 0x14
// 004d1ef1  85ff                 test edi, edi
// 004d1ef3  7406                 je 0x4d1efb
// 004d1ef5  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 004d1ef9  7406                 je 0x4d1f01
// 004d1efb  ff1544e97700         call dword ptr [0x77e944]
// 004d1f01  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 004d1f05  7421                 je 0x4d1f28
// 004d1f07  8d4c2420             lea ecx, [esp + 0x20]
// 004d1f0b  e8f0b4ffff           call 0x4cd400
// 004d1f10  53                   push ebx
// 004d1f11  57                   push edi
// 004d1f12  8d542418             lea edx, [esp + 0x18]
// 004d1f16  52                   push edx
// 004d1f17  8bce                 mov ecx, esi
// 004d1f19  e832f1ffff           call 0x4d1050
// 004d1f1e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004d1f22  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004d1f26  ebc9                 jmp 0x4d1ef1
// 004d1f28  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004d1f2c  8938                 mov dword ptr [eax], edi
// 004d1f2e  5f                   pop edi
// 004d1f2f  5e                   pop esi
// 004d1f30  5d                   pop ebp
// 004d1f31  895804               mov dword ptr [eax + 4], ebx
// 004d1f34  5b                   pop ebx
// 004d1f35  83c408               add esp, 8
// 004d1f38  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
