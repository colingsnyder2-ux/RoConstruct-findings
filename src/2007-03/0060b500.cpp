// roc 2007-03 0060b500  unit: seg_00600000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0060b500
//
// 0060b500  83ec08               sub esp, 8
// 0060b503  53                   push ebx
// 0060b504  55                   push ebp
// 0060b505  56                   push esi
// 0060b506  57                   push edi
// 0060b507  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0060b50b  85ff                 test edi, edi
// 0060b50d  8bf1                 mov esi, ecx
// 0060b50f  8b4604               mov eax, dword ptr [esi + 4]
// 0060b512  8b28                 mov ebp, dword ptr [eax]
// 0060b514  7404                 je 0x60b51a
// 0060b516  3bfe                 cmp edi, esi
// 0060b518  7406                 je 0x60b520
// 0060b51a  ff1544e97700         call dword ptr [0x77e944]
// 0060b520  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0060b524  3bdd                 cmp ebx, ebp
// 0060b526  7559                 jne 0x60b581
// 0060b528  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060b52c  85c0                 test eax, eax
// 0060b52e  8b6e04               mov ebp, dword ptr [esi + 4]
// 0060b531  7404                 je 0x60b537
// 0060b533  3bc6                 cmp eax, esi
// 0060b535  7406                 je 0x60b53d
// 0060b537  ff1544e97700         call dword ptr [0x77e944]
// 0060b53d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 0060b541  753e                 jne 0x60b581
// 0060b543  8b4e04               mov ecx, dword ptr [esi + 4]
// 0060b546  8b5104               mov edx, dword ptr [ecx + 4]
// 0060b549  52                   push edx
// 0060b54a  8bce                 mov ecx, esi
// 0060b54c  e80ff7ffff           call 0x60ac60
// 0060b551  8b4604               mov eax, dword ptr [esi + 4]
// 0060b554  894004               mov dword ptr [eax + 4], eax
// 0060b557  8b4604               mov eax, dword ptr [esi + 4]
// 0060b55a  c7460800000000       mov dword ptr [esi + 8], 0
// 0060b561  8900                 mov dword ptr [eax], eax
// 0060b563  8b4604               mov eax, dword ptr [esi + 4]
// 0060b566  894008               mov dword ptr [eax + 8], eax
// 0060b569  8b4604               mov eax, dword ptr [esi + 4]
// 0060b56c  8b08                 mov ecx, dword ptr [eax]
// 0060b56e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060b572  5f                   pop edi
// 0060b573  8930                 mov dword ptr [eax], esi
// 0060b575  5e                   pop esi
// 0060b576  5d                   pop ebp
// 0060b577  894804               mov dword ptr [eax + 4], ecx
// 0060b57a  5b                   pop ebx
// 0060b57b  83c408               add esp, 8
// 0060b57e  c21400               ret 0x14
// 0060b581  85ff                 test edi, edi
// 0060b583  7406                 je 0x60b58b
// 0060b585  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0060b589  7406                 je 0x60b591
// 0060b58b  ff1544e97700         call dword ptr [0x77e944]
// 0060b591  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 0060b595  7421                 je 0x60b5b8
// 0060b597  8d4c2420             lea ecx, [esp + 0x20]
// 0060b59b  e8601eecff           call 0x4cd400
// 0060b5a0  53                   push ebx
// 0060b5a1  57                   push edi
// 0060b5a2  8d542418             lea edx, [esp + 0x18]
// 0060b5a6  52                   push edx
// 0060b5a7  8bce                 mov ecx, esi
// 0060b5a9  e8f2f0ffff           call 0x60a6a0
// 0060b5ae  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0060b5b2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0060b5b6  ebc9                 jmp 0x60b581
// 0060b5b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060b5bc  8938                 mov dword ptr [eax], edi
// 0060b5be  5f                   pop edi
// 0060b5bf  5e                   pop esi
// 0060b5c0  5d                   pop ebp
// 0060b5c1  895804               mov dword ptr [eax + 4], ebx
// 0060b5c4  5b                   pop ebx
// 0060b5c5  83c408               add esp, 8
// 0060b5c8  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
