// roc 2008-06 00496560  unit: RBX::Network::Players::Plugin  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496560
//
// 00496560  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00496563  56                   push esi
// 00496564  8b7004               mov esi, dword ptr [eax + 4]
// 00496567  807e1900             cmp byte ptr [esi + 0x19], 0
// 0049656b  57                   push edi
// 0049656c  8bf8                 mov edi, eax
// 0049656e  7524                 jne 0x496594
// 00496570  53                   push ebx
// 00496571  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00496575  53                   push ebx
// 00496576  8d4e0c               lea ecx, [esi + 0xc]
// 00496579  e8921c1100           call 0x5a8210
// 0049657e  84c0                 test al, al
// 00496580  7405                 je 0x496587
// 00496582  8b7608               mov esi, dword ptr [esi + 8]
// 00496585  eb04                 jmp 0x49658b
// 00496587  8bfe                 mov edi, esi
// 00496589  8b36                 mov esi, dword ptr [esi]
// 0049658b  807e1900             cmp byte ptr [esi + 0x19], 0
// 0049658f  74e4                 je 0x496575
// 00496591  8bc7                 mov eax, edi
// 00496593  5b                   pop ebx
// 00496594  5f                   pop edi
// 00496595  5e                   pop esi
// 00496596  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@ABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
