// roc 2012-06 0056bf00  unit: RBX::Network::IdSerializer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056bf00
//
// 0056bf00  8b4104               mov eax, dword ptr [ecx + 4]
// 0056bf03  56                   push esi
// 0056bf04  8b7004               mov esi, dword ptr [eax + 4]
// 0056bf07  807e2500             cmp byte ptr [esi + 0x25], 0
// 0056bf0b  57                   push edi
// 0056bf0c  8bf8                 mov edi, eax
// 0056bf0e  7524                 jne 0x56bf34
// 0056bf10  53                   push ebx
// 0056bf11  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0056bf15  53                   push ebx
// 0056bf16  8d4e0c               lea ecx, [esi + 0xc]
// 0056bf19  e8c2f41b00           call 0x72b3e0
// 0056bf1e  84c0                 test al, al
// 0056bf20  7405                 je 0x56bf27
// 0056bf22  8b7608               mov esi, dword ptr [esi + 8]
// 0056bf25  eb04                 jmp 0x56bf2b
// 0056bf27  8bfe                 mov edi, esi
// 0056bf29  8b36                 mov esi, dword ptr [esi]
// 0056bf2b  807e2500             cmp byte ptr [esi + 0x25], 0
// 0056bf2f  74e4                 je 0x56bf15
// 0056bf31  8bc7                 mov eax, edi
// 0056bf33  5b                   pop ebx
// 0056bf34  5f                   pop edi
// 0056bf35  5e                   pop esi
// 0056bf36  c20400               ret 4
// library rbxgs-net/Streaming.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@2@ABUData@Guid@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
