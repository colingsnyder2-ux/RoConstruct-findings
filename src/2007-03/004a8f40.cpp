// roc 2007-03 004a8f40  unit: seg_004a0000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a8f40
//
// 004a8f40  83ec08               sub esp, 8
// 004a8f43  53                   push ebx
// 004a8f44  55                   push ebp
// 004a8f45  56                   push esi
// 004a8f46  57                   push edi
// 004a8f47  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004a8f4b  85ff                 test edi, edi
// 004a8f4d  8bf1                 mov esi, ecx
// 004a8f4f  8b4604               mov eax, dword ptr [esi + 4]
// 004a8f52  8b28                 mov ebp, dword ptr [eax]
// 004a8f54  7404                 je 0x4a8f5a
// 004a8f56  3bfe                 cmp edi, esi
// 004a8f58  7406                 je 0x4a8f60
// 004a8f5a  ff1544e97700         call dword ptr [0x77e944]
// 004a8f60  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004a8f64  3bdd                 cmp ebx, ebp
// 004a8f66  7559                 jne 0x4a8fc1
// 004a8f68  8b442428             mov eax, dword ptr [esp + 0x28]
// 004a8f6c  85c0                 test eax, eax
// 004a8f6e  8b6e04               mov ebp, dword ptr [esi + 4]
// 004a8f71  7404                 je 0x4a8f77
// 004a8f73  3bc6                 cmp eax, esi
// 004a8f75  7406                 je 0x4a8f7d
// 004a8f77  ff1544e97700         call dword ptr [0x77e944]
// 004a8f7d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 004a8f81  753e                 jne 0x4a8fc1
// 004a8f83  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a8f86  8b5104               mov edx, dword ptr [ecx + 4]
// 004a8f89  52                   push edx
// 004a8f8a  8bce                 mov ecx, esi
// 004a8f8c  e89ff2ffff           call 0x4a8230
// 004a8f91  8b4604               mov eax, dword ptr [esi + 4]
// 004a8f94  894004               mov dword ptr [eax + 4], eax
// 004a8f97  8b4604               mov eax, dword ptr [esi + 4]
// 004a8f9a  c7460800000000       mov dword ptr [esi + 8], 0
// 004a8fa1  8900                 mov dword ptr [eax], eax
// 004a8fa3  8b4604               mov eax, dword ptr [esi + 4]
// 004a8fa6  894008               mov dword ptr [eax + 8], eax
// 004a8fa9  8b4604               mov eax, dword ptr [esi + 4]
// 004a8fac  8b08                 mov ecx, dword ptr [eax]
// 004a8fae  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a8fb2  5f                   pop edi
// 004a8fb3  8930                 mov dword ptr [eax], esi
// 004a8fb5  5e                   pop esi
// 004a8fb6  5d                   pop ebp
// 004a8fb7  894804               mov dword ptr [eax + 4], ecx
// 004a8fba  5b                   pop ebx
// 004a8fbb  83c408               add esp, 8
// 004a8fbe  c21400               ret 0x14
// 004a8fc1  85ff                 test edi, edi
// 004a8fc3  7406                 je 0x4a8fcb
// 004a8fc5  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 004a8fc9  7406                 je 0x4a8fd1
// 004a8fcb  ff1544e97700         call dword ptr [0x77e944]
// 004a8fd1  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 004a8fd5  7421                 je 0x4a8ff8
// 004a8fd7  8d4c2420             lea ecx, [esp + 0x20]
// 004a8fdb  e840f2feff           call 0x498220
// 004a8fe0  53                   push ebx
// 004a8fe1  57                   push edi
// 004a8fe2  8d542418             lea edx, [esp + 0x18]
// 004a8fe6  52                   push edx
// 004a8fe7  8bce                 mov ecx, esi
// 004a8fe9  e8120dffff           call 0x499d00
// 004a8fee  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004a8ff2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004a8ff6  ebc9                 jmp 0x4a8fc1
// 004a8ff8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a8ffc  8938                 mov dword ptr [eax], edi
// 004a8ffe  5f                   pop edi
// 004a8fff  5e                   pop esi
// 004a9000  5d                   pop ebp
// 004a9001  895804               mov dword ptr [eax + 4], ebx
// 004a9004  5b                   pop ebx
// 004a9005  83c408               add esp, 8
// 004a9008  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
