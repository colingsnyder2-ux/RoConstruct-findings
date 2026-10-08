// roc 2007-03 004c9e70  unit: seg_004c0000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c9e70
//
// 004c9e70  83ec08               sub esp, 8
// 004c9e73  53                   push ebx
// 004c9e74  55                   push ebp
// 004c9e75  56                   push esi
// 004c9e76  57                   push edi
// 004c9e77  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004c9e7b  85ff                 test edi, edi
// 004c9e7d  8bf1                 mov esi, ecx
// 004c9e7f  8b4604               mov eax, dword ptr [esi + 4]
// 004c9e82  8b28                 mov ebp, dword ptr [eax]
// 004c9e84  7404                 je 0x4c9e8a
// 004c9e86  3bfe                 cmp edi, esi
// 004c9e88  7406                 je 0x4c9e90
// 004c9e8a  ff1544e97700         call dword ptr [0x77e944]
// 004c9e90  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004c9e94  3bdd                 cmp ebx, ebp
// 004c9e96  7559                 jne 0x4c9ef1
// 004c9e98  8b442428             mov eax, dword ptr [esp + 0x28]
// 004c9e9c  85c0                 test eax, eax
// 004c9e9e  8b6e04               mov ebp, dword ptr [esi + 4]
// 004c9ea1  7404                 je 0x4c9ea7
// 004c9ea3  3bc6                 cmp eax, esi
// 004c9ea5  7406                 je 0x4c9ead
// 004c9ea7  ff1544e97700         call dword ptr [0x77e944]
// 004c9ead  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 004c9eb1  753e                 jne 0x4c9ef1
// 004c9eb3  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c9eb6  8b5104               mov edx, dword ptr [ecx + 4]
// 004c9eb9  52                   push edx
// 004c9eba  8bce                 mov ecx, esi
// 004c9ebc  e88fdeffff           call 0x4c7d50
// 004c9ec1  8b4604               mov eax, dword ptr [esi + 4]
// 004c9ec4  894004               mov dword ptr [eax + 4], eax
// 004c9ec7  8b4604               mov eax, dword ptr [esi + 4]
// 004c9eca  c7460800000000       mov dword ptr [esi + 8], 0
// 004c9ed1  8900                 mov dword ptr [eax], eax
// 004c9ed3  8b4604               mov eax, dword ptr [esi + 4]
// 004c9ed6  894008               mov dword ptr [eax + 8], eax
// 004c9ed9  8b4604               mov eax, dword ptr [esi + 4]
// 004c9edc  8b08                 mov ecx, dword ptr [eax]
// 004c9ede  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004c9ee2  5f                   pop edi
// 004c9ee3  8930                 mov dword ptr [eax], esi
// 004c9ee5  5e                   pop esi
// 004c9ee6  5d                   pop ebp
// 004c9ee7  894804               mov dword ptr [eax + 4], ecx
// 004c9eea  5b                   pop ebx
// 004c9eeb  83c408               add esp, 8
// 004c9eee  c21400               ret 0x14
// 004c9ef1  85ff                 test edi, edi
// 004c9ef3  7406                 je 0x4c9efb
// 004c9ef5  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 004c9ef9  7406                 je 0x4c9f01
// 004c9efb  ff1544e97700         call dword ptr [0x77e944]
// 004c9f01  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 004c9f05  7421                 je 0x4c9f28
// 004c9f07  8d4c2420             lea ecx, [esp + 0x20]
// 004c9f0b  e810e3fcff           call 0x498220
// 004c9f10  53                   push ebx
// 004c9f11  57                   push edi
// 004c9f12  8d542418             lea edx, [esp + 0x18]
// 004c9f16  52                   push edx
// 004c9f17  8bce                 mov ecx, esi
// 004c9f19  e842d7ffff           call 0x4c7660
// 004c9f1e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004c9f22  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004c9f26  ebc9                 jmp 0x4c9ef1
// 004c9f28  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004c9f2c  8938                 mov dword ptr [eax], edi
// 004c9f2e  5f                   pop edi
// 004c9f2f  5e                   pop esi
// 004c9f30  5d                   pop ebp
// 004c9f31  895804               mov dword ptr [eax + 4], ebx
// 004c9f34  5b                   pop ebx
// 004c9f35  83c408               add esp, 8
// 004c9f38  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
