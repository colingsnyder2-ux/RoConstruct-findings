// roc 2008-06 0058d660  unit: RBX::ChangeHistoryService  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058d660
//
// 0058d660  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0058d663  56                   push esi
// 0058d664  8b7004               mov esi, dword ptr [eax + 4]
// 0058d667  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 0058d66b  57                   push edi
// 0058d66c  8bf8                 mov edi, eax
// 0058d66e  7528                 jne 0x58d698
// 0058d670  53                   push ebx
// 0058d671  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0058d675  8d460c               lea eax, [esi + 0xc]
// 0058d678  53                   push ebx
// 0058d679  50                   push eax
// 0058d67a  e8d1e6fcff           call 0x55bd50
// 0058d67f  83c408               add esp, 8
// 0058d682  84c0                 test al, al
// 0058d684  7405                 je 0x58d68b
// 0058d686  8b7608               mov esi, dword ptr [esi + 8]
// 0058d689  eb04                 jmp 0x58d68f
// 0058d68b  8bfe                 mov edi, esi
// 0058d68d  8b36                 mov esi, dword ptr [esi]
// 0058d68f  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 0058d693  74e0                 je 0x58d675
// 0058d695  8bc7                 mov eax, edi
// 0058d697  5b                   pop ebx
// 0058d698  5f                   pop edi
// 0058d699  5e                   pop esi
// 0058d69a  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@2@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
