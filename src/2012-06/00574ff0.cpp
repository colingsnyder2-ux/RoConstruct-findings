// roc 2012-06 00574ff0  unit: AsyncResult  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00574ff0
//
// 00574ff0  6a1c                 push 0x1c
// 00574ff2  e823d14000           call 0x98211a
// 00574ff7  83c404               add esp, 4
// 00574ffa  85c0                 test eax, eax
// 00574ffc  7444                 je 0x575042
// 00574ffe  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00575002  8b542408             mov edx, dword ptr [esp + 8]
// 00575006  8908                 mov dword ptr [eax], ecx
// 00575008  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057500c  894808               mov dword ptr [eax + 8], ecx
// 0057500f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00575013  895004               mov dword ptr [eax + 4], edx
// 00575016  8b11                 mov edx, dword ptr [ecx]
// 00575018  89500c               mov dword ptr [eax + 0xc], edx
// 0057501b  8b5104               mov edx, dword ptr [ecx + 4]
// 0057501e  895010               mov dword ptr [eax + 0x10], edx
// 00575021  8b4908               mov ecx, dword ptr [ecx + 8]
// 00575024  894814               mov dword ptr [eax + 0x14], ecx
// 00575027  85c9                 test ecx, ecx
// 00575029  740c                 je 0x575037
// 0057502b  83c104               add ecx, 4
// 0057502e  ba01000000           mov edx, 1
// 00575033  f00fc111             lock xadd dword ptr [ecx], edx
// 00575037  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0057503b  884818               mov byte ptr [eax + 0x18], cl
// 0057503e  c6401900             mov byte ptr [eax + 0x19], 0
// 00575042  c21400               ret 0x14
// library templates-boost-1_34_1/map_int_sp.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_sp.cpp
