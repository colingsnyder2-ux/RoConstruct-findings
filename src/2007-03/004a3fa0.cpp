// roc 2007-03 004a3fa0  unit: seg_004a0000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a3fa0
//
// 004a3fa0  83ec08               sub esp, 8
// 004a3fa3  53                   push ebx
// 004a3fa4  55                   push ebp
// 004a3fa5  56                   push esi
// 004a3fa6  57                   push edi
// 004a3fa7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004a3fab  85ff                 test edi, edi
// 004a3fad  8bf1                 mov esi, ecx
// 004a3faf  8b4604               mov eax, dword ptr [esi + 4]
// 004a3fb2  8b28                 mov ebp, dword ptr [eax]
// 004a3fb4  7404                 je 0x4a3fba
// 004a3fb6  3bfe                 cmp edi, esi
// 004a3fb8  7406                 je 0x4a3fc0
// 004a3fba  ff1544e97700         call dword ptr [0x77e944]
// 004a3fc0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004a3fc4  3bdd                 cmp ebx, ebp
// 004a3fc6  7559                 jne 0x4a4021
// 004a3fc8  8b442428             mov eax, dword ptr [esp + 0x28]
// 004a3fcc  85c0                 test eax, eax
// 004a3fce  8b6e04               mov ebp, dword ptr [esi + 4]
// 004a3fd1  7404                 je 0x4a3fd7
// 004a3fd3  3bc6                 cmp eax, esi
// 004a3fd5  7406                 je 0x4a3fdd
// 004a3fd7  ff1544e97700         call dword ptr [0x77e944]
// 004a3fdd  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 004a3fe1  753e                 jne 0x4a4021
// 004a3fe3  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a3fe6  8b5104               mov edx, dword ptr [ecx + 4]
// 004a3fe9  52                   push edx
// 004a3fea  8bce                 mov ecx, esi
// 004a3fec  e89f0d0e00           call 0x584d90
// 004a3ff1  8b4604               mov eax, dword ptr [esi + 4]
// 004a3ff4  894004               mov dword ptr [eax + 4], eax
// 004a3ff7  8b4604               mov eax, dword ptr [esi + 4]
// 004a3ffa  c7460800000000       mov dword ptr [esi + 8], 0
// 004a4001  8900                 mov dword ptr [eax], eax
// 004a4003  8b4604               mov eax, dword ptr [esi + 4]
// 004a4006  894008               mov dword ptr [eax + 8], eax
// 004a4009  8b4604               mov eax, dword ptr [esi + 4]
// 004a400c  8b08                 mov ecx, dword ptr [eax]
// 004a400e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a4012  5f                   pop edi
// 004a4013  8930                 mov dword ptr [eax], esi
// 004a4015  5e                   pop esi
// 004a4016  5d                   pop ebp
// 004a4017  894804               mov dword ptr [eax + 4], ecx
// 004a401a  5b                   pop ebx
// 004a401b  83c408               add esp, 8
// 004a401e  c21400               ret 0x14
// 004a4021  85ff                 test edi, edi
// 004a4023  7406                 je 0x4a402b
// 004a4025  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 004a4029  7406                 je 0x4a4031
// 004a402b  ff1544e97700         call dword ptr [0x77e944]
// 004a4031  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 004a4035  7421                 je 0x4a4058
// 004a4037  8d4c2420             lea ecx, [esp + 0x20]
// 004a403b  e8c0d11400           call 0x5f1200
// 004a4040  53                   push ebx
// 004a4041  57                   push edi
// 004a4042  8d542418             lea edx, [esp + 0x18]
// 004a4046  52                   push edx
// 004a4047  8bce                 mov ecx, esi
// 004a4049  e8b2d9ffff           call 0x4a1a00
// 004a404e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004a4052  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004a4056  ebc9                 jmp 0x4a4021
// 004a4058  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a405c  8938                 mov dword ptr [eax], edi
// 004a405e  5f                   pop edi
// 004a405f  5e                   pop esi
// 004a4060  5d                   pop ebp
// 004a4061  895804               mov dword ptr [eax + 4], ebx
// 004a4064  5b                   pop ebx
// 004a4065  83c408               add esp, 8
// 004a4068  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
