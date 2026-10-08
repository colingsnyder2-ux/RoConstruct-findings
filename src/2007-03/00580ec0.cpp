// roc 2007-03 00580ec0  unit: seg_00580000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00580ec0
//
// 00580ec0  83ec08               sub esp, 8
// 00580ec3  53                   push ebx
// 00580ec4  55                   push ebp
// 00580ec5  56                   push esi
// 00580ec6  57                   push edi
// 00580ec7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00580ecb  85ff                 test edi, edi
// 00580ecd  8bf1                 mov esi, ecx
// 00580ecf  8b4604               mov eax, dword ptr [esi + 4]
// 00580ed2  8b28                 mov ebp, dword ptr [eax]
// 00580ed4  7404                 je 0x580eda
// 00580ed6  3bfe                 cmp edi, esi
// 00580ed8  7406                 je 0x580ee0
// 00580eda  ff1544e97700         call dword ptr [0x77e944]
// 00580ee0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00580ee4  3bdd                 cmp ebx, ebp
// 00580ee6  7559                 jne 0x580f41
// 00580ee8  8b442428             mov eax, dword ptr [esp + 0x28]
// 00580eec  85c0                 test eax, eax
// 00580eee  8b6e04               mov ebp, dword ptr [esi + 4]
// 00580ef1  7404                 je 0x580ef7
// 00580ef3  3bc6                 cmp eax, esi
// 00580ef5  7406                 je 0x580efd
// 00580ef7  ff1544e97700         call dword ptr [0x77e944]
// 00580efd  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 00580f01  753e                 jne 0x580f41
// 00580f03  8b4e04               mov ecx, dword ptr [esi + 4]
// 00580f06  8b5104               mov edx, dword ptr [ecx + 4]
// 00580f09  52                   push edx
// 00580f0a  8bce                 mov ecx, esi
// 00580f0c  e83ff4ffff           call 0x580350
// 00580f11  8b4604               mov eax, dword ptr [esi + 4]
// 00580f14  894004               mov dword ptr [eax + 4], eax
// 00580f17  8b4604               mov eax, dword ptr [esi + 4]
// 00580f1a  c7460800000000       mov dword ptr [esi + 8], 0
// 00580f21  8900                 mov dword ptr [eax], eax
// 00580f23  8b4604               mov eax, dword ptr [esi + 4]
// 00580f26  894008               mov dword ptr [eax + 8], eax
// 00580f29  8b4604               mov eax, dword ptr [esi + 4]
// 00580f2c  8b08                 mov ecx, dword ptr [eax]
// 00580f2e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00580f32  5f                   pop edi
// 00580f33  8930                 mov dword ptr [eax], esi
// 00580f35  5e                   pop esi
// 00580f36  5d                   pop ebp
// 00580f37  894804               mov dword ptr [eax + 4], ecx
// 00580f3a  5b                   pop ebx
// 00580f3b  83c408               add esp, 8
// 00580f3e  c21400               ret 0x14
// 00580f41  85ff                 test edi, edi
// 00580f43  7406                 je 0x580f4b
// 00580f45  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00580f49  7406                 je 0x580f51
// 00580f4b  ff1544e97700         call dword ptr [0x77e944]
// 00580f51  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 00580f55  7421                 je 0x580f78
// 00580f57  8d4c2420             lea ecx, [esp + 0x20]
// 00580f5b  e8c072f1ff           call 0x498220
// 00580f60  53                   push ebx
// 00580f61  57                   push edi
// 00580f62  8d542418             lea edx, [esp + 0x18]
// 00580f66  52                   push edx
// 00580f67  8bce                 mov ecx, esi
// 00580f69  e822f8ffff           call 0x580790
// 00580f6e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00580f72  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00580f76  ebc9                 jmp 0x580f41
// 00580f78  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00580f7c  8938                 mov dword ptr [eax], edi
// 00580f7e  5f                   pop edi
// 00580f7f  5e                   pop esi
// 00580f80  5d                   pop ebp
// 00580f81  895804               mov dword ptr [eax + 4], ebx
// 00580f84  5b                   pop ebx
// 00580f85  83c408               add esp, 8
// 00580f88  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
