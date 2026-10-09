// roc 2009-12 00533e60  unit: RBX::Network::IdSerializer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00533e60
//
// 00533e60  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00533e63  56                   push esi
// 00533e64  8b7004               mov esi, dword ptr [eax + 4]
// 00533e67  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00533e6b  57                   push edi
// 00533e6c  8bf8                 mov edi, eax
// 00533e6e  7524                 jne 0x533e94
// 00533e70  53                   push ebx
// 00533e71  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00533e75  53                   push ebx
// 00533e76  8d4e0c               lea ecx, [esi + 0xc]
// 00533e79  e862ac1600           call 0x69eae0
// 00533e7e  84c0                 test al, al
// 00533e80  7405                 je 0x533e87
// 00533e82  8b7608               mov esi, dword ptr [esi + 8]
// 00533e85  eb04                 jmp 0x533e8b
// 00533e87  8bfe                 mov edi, esi
// 00533e89  8b36                 mov esi, dword ptr [esi]
// 00533e8b  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00533e8f  74e4                 je 0x533e75
// 00533e91  8bc7                 mov eax, edi
// 00533e93  5b                   pop ebx
// 00533e94  5f                   pop edi
// 00533e95  5e                   pop esi
// 00533e96  c20400               ret 4
// library rbxgs-net/Streaming.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@2@ABUData@Guid@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
