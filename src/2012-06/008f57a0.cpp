// roc 2012-06 008f57a0  unit: RBX::VStudioTool::?$EventDesc  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f57a0
//
// 008f57a0  53                   push ebx
// 008f57a1  56                   push esi
// 008f57a2  57                   push edi
// 008f57a3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008f57a7  807f1500             cmp byte ptr [edi + 0x15], 0
// 008f57ab  8bd9                 mov ebx, ecx
// 008f57ad  8bf7                 mov esi, edi
// 008f57af  7538                 jne 0x8f57e9
// 008f57b1  8b4608               mov eax, dword ptr [esi + 8]
// 008f57b4  50                   push eax
// 008f57b5  8bcb                 mov ecx, ebx
// 008f57b7  e8e4ffffff           call 0x8f57a0
// 008f57bc  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 008f57bf  8b36                 mov esi, dword ptr [esi]
// 008f57c1  85c9                 test ecx, ecx
// 008f57c3  7413                 je 0x8f57d8
// 008f57c5  8d5108               lea edx, [ecx + 8]
// 008f57c8  83c8ff               or eax, 0xffffffff
// 008f57cb  f00fc102             lock xadd dword ptr [edx], eax
// 008f57cf  7507                 jne 0x8f57d8
// 008f57d1  8b11                 mov edx, dword ptr [ecx]
// 008f57d3  8b4208               mov eax, dword ptr [edx + 8]
// 008f57d6  ffd0                 call eax
// 008f57d8  57                   push edi
// 008f57d9  e836c90800           call 0x982114
// 008f57de  83c404               add esp, 4
// 008f57e1  807e1500             cmp byte ptr [esi + 0x15], 0
// 008f57e5  8bfe                 mov edi, esi
// 008f57e7  74c8                 je 0x8f57b1
// 008f57e9  5f                   pop edi
// 008f57ea  5e                   pop esi
// 008f57eb  5b                   pop ebx
// 008f57ec  c20400               ret 4
// library templates-boost-1_34_1/set_wp.cpp (function ?_Erase@?$_Tree@V?$_Tset_traits@V?$weak_ptr@UT@@@boost@@U?$less@V?$weak_ptr@UT@@@boost@@@std@@V?$allocator@V?$weak_ptr@UT@@@boost@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$weak_ptr@UT@@@boost@@U?$less@V?$weak_ptr@UT@@@boost@@@std@@V?$allocator@V?$weak_ptr@UT@@@boost@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_wp.cpp
