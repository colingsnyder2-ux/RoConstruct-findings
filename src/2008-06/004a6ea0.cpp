// roc 2008-06 004a6ea0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a6ea0
//
// 004a6ea0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004a6ea3  56                   push esi
// 004a6ea4  8b7004               mov esi, dword ptr [eax + 4]
// 004a6ea7  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 004a6eab  57                   push edi
// 004a6eac  8bf8                 mov edi, eax
// 004a6eae  7524                 jne 0x4a6ed4
// 004a6eb0  53                   push ebx
// 004a6eb1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004a6eb5  53                   push ebx
// 004a6eb6  8d4e0c               lea ecx, [esi + 0xc]
// 004a6eb9  e852131000           call 0x5a8210
// 004a6ebe  84c0                 test al, al
// 004a6ec0  7405                 je 0x4a6ec7
// 004a6ec2  8b7608               mov esi, dword ptr [esi + 8]
// 004a6ec5  eb04                 jmp 0x4a6ecb
// 004a6ec7  8bfe                 mov edi, esi
// 004a6ec9  8b36                 mov esi, dword ptr [esi]
// 004a6ecb  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 004a6ecf  74e4                 je 0x4a6eb5
// 004a6ed1  8bc7                 mov eax, edi
// 004a6ed3  5b                   pop ebx
// 004a6ed4  5f                   pop edi
// 004a6ed5  5e                   pop esi
// 004a6ed6  c20400               ret 4
// library rbxgs-net/Streaming.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@2@ABUData@Guid@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
