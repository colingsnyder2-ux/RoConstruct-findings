// roc 2009-12 00513960  unit: RBX::Network::Players  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00513960
//
// 00513960  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00513963  56                   push esi
// 00513964  8b7004               mov esi, dword ptr [eax + 4]
// 00513967  807e1900             cmp byte ptr [esi + 0x19], 0
// 0051396b  57                   push edi
// 0051396c  8bf8                 mov edi, eax
// 0051396e  7524                 jne 0x513994
// 00513970  53                   push ebx
// 00513971  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00513975  53                   push ebx
// 00513976  8d4e0c               lea ecx, [esi + 0xc]
// 00513979  e862b11800           call 0x69eae0
// 0051397e  84c0                 test al, al
// 00513980  7405                 je 0x513987
// 00513982  8b7608               mov esi, dword ptr [esi + 8]
// 00513985  eb04                 jmp 0x51398b
// 00513987  8bfe                 mov edi, esi
// 00513989  8b36                 mov esi, dword ptr [esi]
// 0051398b  807e1900             cmp byte ptr [esi + 0x19], 0
// 0051398f  74e4                 je 0x513975
// 00513991  8bc7                 mov eax, edi
// 00513993  5b                   pop ebx
// 00513994  5f                   pop edi
// 00513995  5e                   pop esi
// 00513996  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@ABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
