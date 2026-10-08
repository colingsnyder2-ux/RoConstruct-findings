// roc 2009-06 0061e560  unit: RBX::ChangeHistoryService  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061e560
//
// 0061e560  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0061e563  56                   push esi
// 0061e564  8b7004               mov esi, dword ptr [eax + 4]
// 0061e567  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 0061e56b  57                   push edi
// 0061e56c  8bf8                 mov edi, eax
// 0061e56e  7528                 jne 0x61e598
// 0061e570  53                   push ebx
// 0061e571  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0061e575  8d460c               lea eax, [esi + 0xc]
// 0061e578  53                   push ebx
// 0061e579  50                   push eax
// 0061e57a  e8e1a6fbff           call 0x5d8c60
// 0061e57f  83c408               add esp, 8
// 0061e582  84c0                 test al, al
// 0061e584  7405                 je 0x61e58b
// 0061e586  8b7608               mov esi, dword ptr [esi + 8]
// 0061e589  eb04                 jmp 0x61e58f
// 0061e58b  8bfe                 mov edi, esi
// 0061e58d  8b36                 mov esi, dword ptr [esi]
// 0061e58f  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 0061e593  74e0                 je 0x61e575
// 0061e595  8bc7                 mov eax, edi
// 0061e597  5b                   pop ebx
// 0061e598  5f                   pop edi
// 0061e599  5e                   pop esi
// 0061e59a  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@2@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
