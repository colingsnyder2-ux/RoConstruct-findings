// roc 2011-06 006df4b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006df4b0
//
// 006df4b0  6a1c                 push 0x1c
// 006df4b2  e8a7ab1200           call 0x80a05e
// 006df4b7  83c404               add esp, 4
// 006df4ba  85c0                 test eax, eax
// 006df4bc  7444                 je 0x6df502
// 006df4be  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006df4c2  8b542408             mov edx, dword ptr [esp + 8]
// 006df4c6  8908                 mov dword ptr [eax], ecx
// 006df4c8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006df4cc  894808               mov dword ptr [eax + 8], ecx
// 006df4cf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006df4d3  895004               mov dword ptr [eax + 4], edx
// 006df4d6  8b11                 mov edx, dword ptr [ecx]
// 006df4d8  89500c               mov dword ptr [eax + 0xc], edx
// 006df4db  8b5104               mov edx, dword ptr [ecx + 4]
// 006df4de  895010               mov dword ptr [eax + 0x10], edx
// 006df4e1  8b4908               mov ecx, dword ptr [ecx + 8]
// 006df4e4  894814               mov dword ptr [eax + 0x14], ecx
// 006df4e7  85c9                 test ecx, ecx
// 006df4e9  740c                 je 0x6df4f7
// 006df4eb  83c104               add ecx, 4
// 006df4ee  ba01000000           mov edx, 1
// 006df4f3  f00fc111             lock xadd dword ptr [ecx], edx
// 006df4f7  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 006df4fb  884818               mov byte ptr [eax + 0x18], cl
// 006df4fe  c6401900             mov byte ptr [eax + 0x19], 0
// 006df502  c21400               ret 0x14
// library templates-boost-1_34_1/map_int_sp.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_sp.cpp
