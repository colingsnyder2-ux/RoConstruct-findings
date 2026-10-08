// roc 2009-06 004dde60  unit: RBX::Network::IdSerializer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004dde60
//
// 004dde60  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004dde63  56                   push esi
// 004dde64  8b7004               mov esi, dword ptr [eax + 4]
// 004dde67  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 004dde6b  57                   push edi
// 004dde6c  8bf8                 mov edi, eax
// 004dde6e  7524                 jne 0x4dde94
// 004dde70  53                   push ebx
// 004dde71  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004dde75  53                   push ebx
// 004dde76  8d4e0c               lea ecx, [esi + 0xc]
// 004dde79  e8b24d1500           call 0x632c30
// 004dde7e  84c0                 test al, al
// 004dde80  7405                 je 0x4dde87
// 004dde82  8b7608               mov esi, dword ptr [esi + 8]
// 004dde85  eb04                 jmp 0x4dde8b
// 004dde87  8bfe                 mov edi, esi
// 004dde89  8b36                 mov esi, dword ptr [esi]
// 004dde8b  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 004dde8f  74e4                 je 0x4dde75
// 004dde91  8bc7                 mov eax, edi
// 004dde93  5b                   pop ebx
// 004dde94  5f                   pop edi
// 004dde95  5e                   pop esi
// 004dde96  c20400               ret 4
// library rbxgs-net/Streaming.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@2@ABUData@Guid@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
