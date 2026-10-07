// roc 2010-06 00622880  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00622880
//
// 00622880  6a1c                 push 0x1c
// 00622882  e819511800           call 0x7a79a0
// 00622887  83c404               add esp, 4
// 0062288a  85c0                 test eax, eax
// 0062288c  7444                 je 0x6228d2
// 0062288e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00622892  8b542408             mov edx, dword ptr [esp + 8]
// 00622896  8908                 mov dword ptr [eax], ecx
// 00622898  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062289c  894808               mov dword ptr [eax + 8], ecx
// 0062289f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006228a3  895004               mov dword ptr [eax + 4], edx
// 006228a6  8b11                 mov edx, dword ptr [ecx]
// 006228a8  89500c               mov dword ptr [eax + 0xc], edx
// 006228ab  8b5104               mov edx, dword ptr [ecx + 4]
// 006228ae  895010               mov dword ptr [eax + 0x10], edx
// 006228b1  8b4908               mov ecx, dword ptr [ecx + 8]
// 006228b4  894814               mov dword ptr [eax + 0x14], ecx
// 006228b7  85c9                 test ecx, ecx
// 006228b9  740c                 je 0x6228c7
// 006228bb  83c104               add ecx, 4
// 006228be  ba01000000           mov edx, 1
// 006228c3  f00fc111             lock xadd dword ptr [ecx], edx
// 006228c7  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 006228cb  884818               mov byte ptr [eax + 0x18], cl
// 006228ce  c6401900             mov byte ptr [eax + 0x19], 0
// 006228d2  c21400               ret 0x14
// library templates-boost-1_34_1/map_int_sp.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_sp.cpp
