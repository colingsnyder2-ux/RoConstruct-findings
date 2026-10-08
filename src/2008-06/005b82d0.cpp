// from server: 100% by auto
// roc 2008-06 005b82d0  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b82d0
//
// 005b82d0  6a1c                 push 0x1c
// 005b82d2  e849860e00           call 0x6a0920
// 005b82d7  83c404               add esp, 4
// 005b82da  85c0                 test eax, eax
// 005b82dc  7444                 je 0x5b8322
// 005b82de  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b82e2  8b542408             mov edx, dword ptr [esp + 8]
// 005b82e6  8908                 mov dword ptr [eax], ecx
// 005b82e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b82ec  894808               mov dword ptr [eax + 8], ecx
// 005b82ef  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b82f3  895004               mov dword ptr [eax + 4], edx
// 005b82f6  8b11                 mov edx, dword ptr [ecx]
// 005b82f8  89500c               mov dword ptr [eax + 0xc], edx
// 005b82fb  8b5104               mov edx, dword ptr [ecx + 4]
// 005b82fe  895010               mov dword ptr [eax + 0x10], edx
// 005b8301  8b4908               mov ecx, dword ptr [ecx + 8]
// 005b8304  894814               mov dword ptr [eax + 0x14], ecx
// 005b8307  85c9                 test ecx, ecx
// 005b8309  740c                 je 0x5b8317
// 005b830b  83c104               add ecx, 4
// 005b830e  ba01000000           mov edx, 1
// 005b8313  f00fc111             lock xadd dword ptr [ecx], edx
// 005b8317  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 005b831b  884818               mov byte ptr [eax + 0x18], cl
// 005b831e  c6401900             mov byte ptr [eax + 0x19], 0
// 005b8322  c21400               ret 0x14
// library templates-boost-1_34_1/map_int_sp.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_sp.cpp
