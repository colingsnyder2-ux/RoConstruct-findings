// roc 2009-12 006888c0  unit: RBX::ChangeHistoryService  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006888c0
//
// 006888c0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006888c3  56                   push esi
// 006888c4  8b7004               mov esi, dword ptr [eax + 4]
// 006888c7  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 006888cb  57                   push edi
// 006888cc  8bf8                 mov edi, eax
// 006888ce  7528                 jne 0x6888f8
// 006888d0  53                   push ebx
// 006888d1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006888d5  8d460c               lea eax, [esi + 0xc]
// 006888d8  53                   push ebx
// 006888d9  50                   push eax
// 006888da  e8f18d0200           call 0x6b16d0
// 006888df  83c408               add esp, 8
// 006888e2  84c0                 test al, al
// 006888e4  7405                 je 0x6888eb
// 006888e6  8b7608               mov esi, dword ptr [esi + 8]
// 006888e9  eb04                 jmp 0x6888ef
// 006888eb  8bfe                 mov edi, esi
// 006888ed  8b36                 mov esi, dword ptr [esi]
// 006888ef  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 006888f3  74e0                 je 0x6888d5
// 006888f5  8bc7                 mov eax, edi
// 006888f7  5b                   pop ebx
// 006888f8  5f                   pop edi
// 006888f9  5e                   pop esi
// 006888fa  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@2@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
