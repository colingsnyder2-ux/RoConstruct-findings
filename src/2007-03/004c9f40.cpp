// roc 2007-03 004c9f40  unit: seg_004c0000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c9f40
//
// 004c9f40  83ec08               sub esp, 8
// 004c9f43  53                   push ebx
// 004c9f44  55                   push ebp
// 004c9f45  56                   push esi
// 004c9f46  57                   push edi
// 004c9f47  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004c9f4b  85ff                 test edi, edi
// 004c9f4d  8bf1                 mov esi, ecx
// 004c9f4f  8b4604               mov eax, dword ptr [esi + 4]
// 004c9f52  8b28                 mov ebp, dword ptr [eax]
// 004c9f54  7404                 je 0x4c9f5a
// 004c9f56  3bfe                 cmp edi, esi
// 004c9f58  7406                 je 0x4c9f60
// 004c9f5a  ff1544e97700         call dword ptr [0x77e944]
// 004c9f60  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004c9f64  3bdd                 cmp ebx, ebp
// 004c9f66  7559                 jne 0x4c9fc1
// 004c9f68  8b442428             mov eax, dword ptr [esp + 0x28]
// 004c9f6c  85c0                 test eax, eax
// 004c9f6e  8b6e04               mov ebp, dword ptr [esi + 4]
// 004c9f71  7404                 je 0x4c9f77
// 004c9f73  3bc6                 cmp eax, esi
// 004c9f75  7406                 je 0x4c9f7d
// 004c9f77  ff1544e97700         call dword ptr [0x77e944]
// 004c9f7d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 004c9f81  753e                 jne 0x4c9fc1
// 004c9f83  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c9f86  8b5104               mov edx, dword ptr [ecx + 4]
// 004c9f89  52                   push edx
// 004c9f8a  8bce                 mov ecx, esi
// 004c9f8c  e82fddffff           call 0x4c7cc0
// 004c9f91  8b4604               mov eax, dword ptr [esi + 4]
// 004c9f94  894004               mov dword ptr [eax + 4], eax
// 004c9f97  8b4604               mov eax, dword ptr [esi + 4]
// 004c9f9a  c7460800000000       mov dword ptr [esi + 8], 0
// 004c9fa1  8900                 mov dword ptr [eax], eax
// 004c9fa3  8b4604               mov eax, dword ptr [esi + 4]
// 004c9fa6  894008               mov dword ptr [eax + 8], eax
// 004c9fa9  8b4604               mov eax, dword ptr [esi + 4]
// 004c9fac  8b08                 mov ecx, dword ptr [eax]
// 004c9fae  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004c9fb2  5f                   pop edi
// 004c9fb3  8930                 mov dword ptr [eax], esi
// 004c9fb5  5e                   pop esi
// 004c9fb6  5d                   pop ebp
// 004c9fb7  894804               mov dword ptr [eax + 4], ecx
// 004c9fba  5b                   pop ebx
// 004c9fbb  83c408               add esp, 8
// 004c9fbe  c21400               ret 0x14
// 004c9fc1  85ff                 test edi, edi
// 004c9fc3  7406                 je 0x4c9fcb
// 004c9fc5  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 004c9fc9  7406                 je 0x4c9fd1
// 004c9fcb  ff1544e97700         call dword ptr [0x77e944]
// 004c9fd1  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 004c9fd5  7421                 je 0x4c9ff8
// 004c9fd7  8d4c2420             lea ecx, [esp + 0x20]
// 004c9fdb  e860acffff           call 0x4c4c40
// 004c9fe0  53                   push ebx
// 004c9fe1  57                   push edi
// 004c9fe2  8d542418             lea edx, [esp + 0x18]
// 004c9fe6  52                   push edx
// 004c9fe7  8bce                 mov ecx, esi
// 004c9fe9  e8a2d9ffff           call 0x4c7990
// 004c9fee  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004c9ff2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004c9ff6  ebc9                 jmp 0x4c9fc1
// 004c9ff8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004c9ffc  8938                 mov dword ptr [eax], edi
// 004c9ffe  5f                   pop edi
// 004c9fff  5e                   pop esi
// 004ca000  5d                   pop ebp
// 004ca001  895804               mov dword ptr [eax + 4], ebx
// 004ca004  5b                   pop ebx
// 004ca005  83c408               add esp, 8
// 004ca008  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
