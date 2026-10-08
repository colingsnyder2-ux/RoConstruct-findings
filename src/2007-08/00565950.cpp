// roc 2007-08 00565950  unit: RBX::Verb  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00565950
//
// 00565950  8b4104               mov eax, dword ptr [ecx + 4]
// 00565953  56                   push esi
// 00565954  8b7004               mov esi, dword ptr [eax + 4]
// 00565957  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 0056595b  57                   push edi
// 0056595c  8bf8                 mov edi, eax
// 0056595e  7528                 jne 0x565988
// 00565960  53                   push ebx
// 00565961  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00565965  8d460c               lea eax, [esi + 0xc]
// 00565968  53                   push ebx
// 00565969  50                   push eax
// 0056596a  e841f6fdff           call 0x544fb0
// 0056596f  83c408               add esp, 8
// 00565972  84c0                 test al, al
// 00565974  7405                 je 0x56597b
// 00565976  8b7608               mov esi, dword ptr [esi + 8]
// 00565979  eb04                 jmp 0x56597f
// 0056597b  8bfe                 mov edi, esi
// 0056597d  8b36                 mov esi, dword ptr [esi]
// 0056597f  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00565983  74e0                 je 0x565965
// 00565985  8bc7                 mov eax, edi
// 00565987  5b                   pop ebx
// 00565988  5f                   pop edi
// 00565989  5e                   pop esi
// 0056598a  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@2@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
