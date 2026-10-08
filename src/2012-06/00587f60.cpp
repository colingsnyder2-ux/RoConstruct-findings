// roc 2012-06 00587f60  unit: RBX::Network::VReplicator::?$EventDesc  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00587f60
//
// 00587f60  53                   push ebx
// 00587f61  55                   push ebp
// 00587f62  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00587f66  807d2500             cmp byte ptr [ebp + 0x25], 0
// 00587f6a  57                   push edi
// 00587f6b  8bd9                 mov ebx, ecx
// 00587f6d  8bfd                 mov edi, ebp
// 00587f6f  7553                 jne 0x587fc4
// 00587f71  56                   push esi
// 00587f72  8b4708               mov eax, dword ptr [edi + 8]
// 00587f75  50                   push eax
// 00587f76  8bcb                 mov ecx, ebx
// 00587f78  e8e3ffffff           call 0x587f60
// 00587f7d  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00587f80  8b3f                 mov edi, dword ptr [edi]
// 00587f82  8d7514               lea esi, [ebp + 0x14]
// 00587f85  33c9                 xor ecx, ecx
// 00587f87  3bc1                 cmp eax, ecx
// 00587f89  741e                 je 0x587fa9
// 00587f8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00587f8f  8b5608               mov edx, dword ptr [esi + 8]
// 00587f92  51                   push ecx
// 00587f93  56                   push esi
// 00587f94  52                   push edx
// 00587f95  50                   push eax
// 00587f96  e84563feff           call 0x56e2e0
// 00587f9b  8b4604               mov eax, dword ptr [esi + 4]
// 00587f9e  50                   push eax
// 00587f9f  e870a13f00           call 0x982114
// 00587fa4  83c414               add esp, 0x14
// 00587fa7  33c9                 xor ecx, ecx
// 00587fa9  55                   push ebp
// 00587faa  894e04               mov dword ptr [esi + 4], ecx
// 00587fad  894e08               mov dword ptr [esi + 8], ecx
// 00587fb0  894e0c               mov dword ptr [esi + 0xc], ecx
// 00587fb3  e85ca13f00           call 0x982114
// 00587fb8  83c404               add esp, 4
// 00587fbb  807f2500             cmp byte ptr [edi + 0x25], 0
// 00587fbf  8bef                 mov ebp, edi
// 00587fc1  74af                 je 0x587f72
// 00587fc3  5e                   pop esi
// 00587fc4  5f                   pop edi
// 00587fc5  5d                   pop ebp
// 00587fc6  5b                   pop ebx
// 00587fc7  c20400               ret 4
// library rbxgs-net/Replicator.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
