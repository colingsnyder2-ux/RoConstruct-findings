// roc 2010-06 005efb10  unit: RBX::ChangeHistoryService  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005efb10
//
// 005efb10  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005efb13  56                   push esi
// 005efb14  8b7004               mov esi, dword ptr [eax + 4]
// 005efb17  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 005efb1b  57                   push edi
// 005efb1c  8bf8                 mov edi, eax
// 005efb1e  7528                 jne 0x5efb48
// 005efb20  53                   push ebx
// 005efb21  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005efb25  8d460c               lea eax, [esi + 0xc]
// 005efb28  53                   push ebx
// 005efb29  50                   push eax
// 005efb2a  e8d1b10300           call 0x62ad00
// 005efb2f  83c408               add esp, 8
// 005efb32  84c0                 test al, al
// 005efb34  7405                 je 0x5efb3b
// 005efb36  8b7608               mov esi, dword ptr [esi + 8]
// 005efb39  eb04                 jmp 0x5efb3f
// 005efb3b  8bfe                 mov edi, esi
// 005efb3d  8b36                 mov esi, dword ptr [esi]
// 005efb3f  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 005efb43  74e0                 je 0x5efb25
// 005efb45  8bc7                 mov eax, edi
// 005efb47  5b                   pop ebx
// 005efb48  5f                   pop edi
// 005efb49  5e                   pop esi
// 005efb4a  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@2@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
