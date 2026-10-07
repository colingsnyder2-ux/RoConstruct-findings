// roc 2007-08 004a8b30  unit: RBX::Network::VClient::?$FactoryProduct  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a8b30
//
// 004a8b30  6a1c                 push 0x1c
// 004a8b32  e8bf731800           call 0x62fef6
// 004a8b37  83c404               add esp, 4
// 004a8b3a  85c0                 test eax, eax
// 004a8b3c  7444                 je 0x4a8b82
// 004a8b3e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a8b42  8b542408             mov edx, dword ptr [esp + 8]
// 004a8b46  8908                 mov dword ptr [eax], ecx
// 004a8b48  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a8b4c  894808               mov dword ptr [eax + 8], ecx
// 004a8b4f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a8b53  895004               mov dword ptr [eax + 4], edx
// 004a8b56  8b11                 mov edx, dword ptr [ecx]
// 004a8b58  89500c               mov dword ptr [eax + 0xc], edx
// 004a8b5b  8b5104               mov edx, dword ptr [ecx + 4]
// 004a8b5e  895010               mov dword ptr [eax + 0x10], edx
// 004a8b61  8b4908               mov ecx, dword ptr [ecx + 8]
// 004a8b64  85c9                 test ecx, ecx
// 004a8b66  894814               mov dword ptr [eax + 0x14], ecx
// 004a8b69  740c                 je 0x4a8b77
// 004a8b6b  83c104               add ecx, 4
// 004a8b6e  ba01000000           mov edx, 1
// 004a8b73  f00fc111             lock xadd dword ptr [ecx], edx
// 004a8b77  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 004a8b7b  884818               mov byte ptr [eax + 0x18], cl
// 004a8b7e  c6401900             mov byte ptr [eax + 0x19], 0
// 004a8b82  c21400               ret 0x14
// library templates-boost-1_34_1/map_int_sp.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_sp.cpp
