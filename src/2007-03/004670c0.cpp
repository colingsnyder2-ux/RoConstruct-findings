// roc 2007-03 004670c0  unit: seg_00460000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004670c0
//
// 004670c0  83ec08               sub esp, 8
// 004670c3  53                   push ebx
// 004670c4  55                   push ebp
// 004670c5  56                   push esi
// 004670c6  57                   push edi
// 004670c7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004670cb  85ff                 test edi, edi
// 004670cd  8bf1                 mov esi, ecx
// 004670cf  8b4604               mov eax, dword ptr [esi + 4]
// 004670d2  8b28                 mov ebp, dword ptr [eax]
// 004670d4  7404                 je 0x4670da
// 004670d6  3bfe                 cmp edi, esi
// 004670d8  7406                 je 0x4670e0
// 004670da  ff1544e97700         call dword ptr [0x77e944]
// 004670e0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004670e4  3bdd                 cmp ebx, ebp
// 004670e6  7559                 jne 0x467141
// 004670e8  8b442428             mov eax, dword ptr [esp + 0x28]
// 004670ec  85c0                 test eax, eax
// 004670ee  8b6e04               mov ebp, dword ptr [esi + 4]
// 004670f1  7404                 je 0x4670f7
// 004670f3  3bc6                 cmp eax, esi
// 004670f5  7406                 je 0x4670fd
// 004670f7  ff1544e97700         call dword ptr [0x77e944]
// 004670fd  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 00467101  753e                 jne 0x467141
// 00467103  8b4e04               mov ecx, dword ptr [esi + 4]
// 00467106  8b5104               mov edx, dword ptr [ecx + 4]
// 00467109  52                   push edx
// 0046710a  8bce                 mov ecx, esi
// 0046710c  e86fffffff           call 0x467080
// 00467111  8b4604               mov eax, dword ptr [esi + 4]
// 00467114  894004               mov dword ptr [eax + 4], eax
// 00467117  8b4604               mov eax, dword ptr [esi + 4]
// 0046711a  c7460800000000       mov dword ptr [esi + 8], 0
// 00467121  8900                 mov dword ptr [eax], eax
// 00467123  8b4604               mov eax, dword ptr [esi + 4]
// 00467126  894008               mov dword ptr [eax + 8], eax
// 00467129  8b4604               mov eax, dword ptr [esi + 4]
// 0046712c  8b08                 mov ecx, dword ptr [eax]
// 0046712e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00467132  5f                   pop edi
// 00467133  8930                 mov dword ptr [eax], esi
// 00467135  5e                   pop esi
// 00467136  5d                   pop ebp
// 00467137  894804               mov dword ptr [eax + 4], ecx
// 0046713a  5b                   pop ebx
// 0046713b  83c408               add esp, 8
// 0046713e  c21400               ret 0x14
// 00467141  85ff                 test edi, edi
// 00467143  7406                 je 0x46714b
// 00467145  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00467149  7406                 je 0x467151
// 0046714b  ff1544e97700         call dword ptr [0x77e944]
// 00467151  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 00467155  7421                 je 0x467178
// 00467157  8d4c2420             lea ecx, [esp + 0x20]
// 0046715b  e810650c00           call 0x52d670
// 00467160  53                   push ebx
// 00467161  57                   push edi
// 00467162  8d542418             lea edx, [esp + 0x18]
// 00467166  52                   push edx
// 00467167  8bce                 mov ecx, esi
// 00467169  e852fcffff           call 0x466dc0
// 0046716e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00467172  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00467176  ebc9                 jmp 0x467141
// 00467178  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0046717c  8938                 mov dword ptr [eax], edi
// 0046717e  5f                   pop edi
// 0046717f  5e                   pop esi
// 00467180  5d                   pop ebp
// 00467181  895804               mov dword ptr [eax + 4], ebx
// 00467184  5b                   pop ebx
// 00467185  83c408               add esp, 8
// 00467188  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
