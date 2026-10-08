// roc 2011-06 004f0480  unit: RBX::Network::IdSerializer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f0480
//
// 004f0480  8b4104               mov eax, dword ptr [ecx + 4]
// 004f0483  56                   push esi
// 004f0484  8b7004               mov esi, dword ptr [eax + 4]
// 004f0487  807e2500             cmp byte ptr [esi + 0x25], 0
// 004f048b  57                   push edi
// 004f048c  8bf8                 mov edi, eax
// 004f048e  7524                 jne 0x4f04b4
// 004f0490  53                   push ebx
// 004f0491  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004f0495  53                   push ebx
// 004f0496  8d4e0c               lea ecx, [esi + 0xc]
// 004f0499  e802551500           call 0x6459a0
// 004f049e  84c0                 test al, al
// 004f04a0  7405                 je 0x4f04a7
// 004f04a2  8b7608               mov esi, dword ptr [esi + 8]
// 004f04a5  eb04                 jmp 0x4f04ab
// 004f04a7  8bfe                 mov edi, esi
// 004f04a9  8b36                 mov esi, dword ptr [esi]
// 004f04ab  807e2500             cmp byte ptr [esi + 0x25], 0
// 004f04af  74e4                 je 0x4f0495
// 004f04b1  8bc7                 mov eax, edi
// 004f04b3  5b                   pop ebx
// 004f04b4  5f                   pop edi
// 004f04b5  5e                   pop esi
// 004f04b6  c20400               ret 4
// library rbxgs-net/Streaming.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@2@ABUData@Guid@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
