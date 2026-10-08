// roc 2011-06 00506cf0  unit: RBX::Network::Replicator::EventInvocationItem  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00506cf0
//
// 00506cf0  53                   push ebx
// 00506cf1  55                   push ebp
// 00506cf2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00506cf6  807d2500             cmp byte ptr [ebp + 0x25], 0
// 00506cfa  57                   push edi
// 00506cfb  8bd9                 mov ebx, ecx
// 00506cfd  8bfd                 mov edi, ebp
// 00506cff  7553                 jne 0x506d54
// 00506d01  56                   push esi
// 00506d02  8b4708               mov eax, dword ptr [edi + 8]
// 00506d05  50                   push eax
// 00506d06  8bcb                 mov ecx, ebx
// 00506d08  e8e3ffffff           call 0x506cf0
// 00506d0d  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00506d10  8b3f                 mov edi, dword ptr [edi]
// 00506d12  8d7514               lea esi, [ebp + 0x14]
// 00506d15  33c9                 xor ecx, ecx
// 00506d17  3bc1                 cmp eax, ecx
// 00506d19  741e                 je 0x506d39
// 00506d1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00506d1f  8b5608               mov edx, dword ptr [esi + 8]
// 00506d22  51                   push ecx
// 00506d23  56                   push esi
// 00506d24  52                   push edx
// 00506d25  50                   push eax
// 00506d26  e855bafeff           call 0x4f2780
// 00506d2b  8b4604               mov eax, dword ptr [esi + 4]
// 00506d2e  50                   push eax
// 00506d2f  e824333000           call 0x80a058
// 00506d34  83c414               add esp, 0x14
// 00506d37  33c9                 xor ecx, ecx
// 00506d39  55                   push ebp
// 00506d3a  894e04               mov dword ptr [esi + 4], ecx
// 00506d3d  894e08               mov dword ptr [esi + 8], ecx
// 00506d40  894e0c               mov dword ptr [esi + 0xc], ecx
// 00506d43  e810333000           call 0x80a058
// 00506d48  83c404               add esp, 4
// 00506d4b  807f2500             cmp byte ptr [edi + 0x25], 0
// 00506d4f  8bef                 mov ebp, edi
// 00506d51  74af                 je 0x506d02
// 00506d53  5e                   pop esi
// 00506d54  5f                   pop edi
// 00506d55  5d                   pop ebp
// 00506d56  5b                   pop ebx
// 00506d57  c20400               ret 4
// library rbxgs-net/Replicator.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
