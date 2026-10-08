// roc 2007-03 0060b5d0  unit: seg_00600000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0060b5d0
//
// 0060b5d0  83ec08               sub esp, 8
// 0060b5d3  53                   push ebx
// 0060b5d4  55                   push ebp
// 0060b5d5  56                   push esi
// 0060b5d6  57                   push edi
// 0060b5d7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0060b5db  85ff                 test edi, edi
// 0060b5dd  8bf1                 mov esi, ecx
// 0060b5df  8b4604               mov eax, dword ptr [esi + 4]
// 0060b5e2  8b28                 mov ebp, dword ptr [eax]
// 0060b5e4  7404                 je 0x60b5ea
// 0060b5e6  3bfe                 cmp edi, esi
// 0060b5e8  7406                 je 0x60b5f0
// 0060b5ea  ff1544e97700         call dword ptr [0x77e944]
// 0060b5f0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0060b5f4  3bdd                 cmp ebx, ebp
// 0060b5f6  7559                 jne 0x60b651
// 0060b5f8  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060b5fc  85c0                 test eax, eax
// 0060b5fe  8b6e04               mov ebp, dword ptr [esi + 4]
// 0060b601  7404                 je 0x60b607
// 0060b603  3bc6                 cmp eax, esi
// 0060b605  7406                 je 0x60b60d
// 0060b607  ff1544e97700         call dword ptr [0x77e944]
// 0060b60d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 0060b611  753e                 jne 0x60b651
// 0060b613  8b4e04               mov ecx, dword ptr [esi + 4]
// 0060b616  8b5104               mov edx, dword ptr [ecx + 4]
// 0060b619  52                   push edx
// 0060b61a  8bce                 mov ecx, esi
// 0060b61c  e87ff6ffff           call 0x60aca0
// 0060b621  8b4604               mov eax, dword ptr [esi + 4]
// 0060b624  894004               mov dword ptr [eax + 4], eax
// 0060b627  8b4604               mov eax, dword ptr [esi + 4]
// 0060b62a  c7460800000000       mov dword ptr [esi + 8], 0
// 0060b631  8900                 mov dword ptr [eax], eax
// 0060b633  8b4604               mov eax, dword ptr [esi + 4]
// 0060b636  894008               mov dword ptr [eax + 8], eax
// 0060b639  8b4604               mov eax, dword ptr [esi + 4]
// 0060b63c  8b08                 mov ecx, dword ptr [eax]
// 0060b63e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060b642  5f                   pop edi
// 0060b643  8930                 mov dword ptr [eax], esi
// 0060b645  5e                   pop esi
// 0060b646  5d                   pop ebp
// 0060b647  894804               mov dword ptr [eax + 4], ecx
// 0060b64a  5b                   pop ebx
// 0060b64b  83c408               add esp, 8
// 0060b64e  c21400               ret 0x14
// 0060b651  85ff                 test edi, edi
// 0060b653  7406                 je 0x60b65b
// 0060b655  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0060b659  7406                 je 0x60b661
// 0060b65b  ff1544e97700         call dword ptr [0x77e944]
// 0060b661  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 0060b665  7421                 je 0x60b688
// 0060b667  8d4c2420             lea ecx, [esp + 0x20]
// 0060b66b  e8f078edff           call 0x4e2f60
// 0060b670  53                   push ebx
// 0060b671  57                   push edi
// 0060b672  8d542418             lea edx, [esp + 0x18]
// 0060b676  52                   push edx
// 0060b677  8bce                 mov ecx, esi
// 0060b679  e8f2f2ffff           call 0x60a970
// 0060b67e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0060b682  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0060b686  ebc9                 jmp 0x60b651
// 0060b688  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060b68c  8938                 mov dword ptr [eax], edi
// 0060b68e  5f                   pop edi
// 0060b68f  5e                   pop esi
// 0060b690  5d                   pop ebp
// 0060b691  895804               mov dword ptr [eax + 4], ebx
// 0060b694  5b                   pop ebx
// 0060b695  83c408               add esp, 8
// 0060b698  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
