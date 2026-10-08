// roc 2012-06 00541990  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00541990
//
// 00541990  8b4104               mov eax, dword ptr [ecx + 4]
// 00541993  56                   push esi
// 00541994  8b7004               mov esi, dword ptr [eax + 4]
// 00541997  807e1900             cmp byte ptr [esi + 0x19], 0
// 0054199b  57                   push edi
// 0054199c  8bf8                 mov edi, eax
// 0054199e  7524                 jne 0x5419c4
// 005419a0  53                   push ebx
// 005419a1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005419a5  53                   push ebx
// 005419a6  8d4e0c               lea ecx, [esi + 0xc]
// 005419a9  e8329a1e00           call 0x72b3e0
// 005419ae  84c0                 test al, al
// 005419b0  7405                 je 0x5419b7
// 005419b2  8b7608               mov esi, dword ptr [esi + 8]
// 005419b5  eb04                 jmp 0x5419bb
// 005419b7  8bfe                 mov edi, esi
// 005419b9  8b36                 mov esi, dword ptr [esi]
// 005419bb  807e1900             cmp byte ptr [esi + 0x19], 0
// 005419bf  74e4                 je 0x5419a5
// 005419c1  8bc7                 mov eax, edi
// 005419c3  5b                   pop ebx
// 005419c4  5f                   pop edi
// 005419c5  5e                   pop esi
// 005419c6  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@ABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
