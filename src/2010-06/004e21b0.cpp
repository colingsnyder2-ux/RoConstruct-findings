// roc 2010-06 004e21b0  unit: RBX::Network::IdSerializer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e21b0
//
// 004e21b0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004e21b3  56                   push esi
// 004e21b4  8b7004               mov esi, dword ptr [eax + 4]
// 004e21b7  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 004e21bb  57                   push edi
// 004e21bc  8bf8                 mov edi, eax
// 004e21be  7524                 jne 0x4e21e4
// 004e21c0  53                   push ebx
// 004e21c1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004e21c5  53                   push ebx
// 004e21c6  8d4e0c               lea ecx, [esi + 0xc]
// 004e21c9  e802821200           call 0x60a3d0
// 004e21ce  84c0                 test al, al
// 004e21d0  7405                 je 0x4e21d7
// 004e21d2  8b7608               mov esi, dword ptr [esi + 8]
// 004e21d5  eb04                 jmp 0x4e21db
// 004e21d7  8bfe                 mov edi, esi
// 004e21d9  8b36                 mov esi, dword ptr [esi]
// 004e21db  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 004e21df  74e4                 je 0x4e21c5
// 004e21e1  8bc7                 mov eax, edi
// 004e21e3  5b                   pop ebx
// 004e21e4  5f                   pop edi
// 004e21e5  5e                   pop esi
// 004e21e6  c20400               ret 4
// library rbxgs-net/Streaming.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@2@ABUData@Guid@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
