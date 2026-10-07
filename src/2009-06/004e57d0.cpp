// roc 2009-06 004e57d0  unit: CRobloxWnd::UserInputJob  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e57d0
//
// 004e57d0  6a1c                 push 0x1c
// 004e57d2  e861322300           call 0x718a38
// 004e57d7  83c404               add esp, 4
// 004e57da  85c0                 test eax, eax
// 004e57dc  7444                 je 0x4e5822
// 004e57de  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e57e2  8b542408             mov edx, dword ptr [esp + 8]
// 004e57e6  8908                 mov dword ptr [eax], ecx
// 004e57e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e57ec  894808               mov dword ptr [eax + 8], ecx
// 004e57ef  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e57f3  895004               mov dword ptr [eax + 4], edx
// 004e57f6  8b11                 mov edx, dword ptr [ecx]
// 004e57f8  89500c               mov dword ptr [eax + 0xc], edx
// 004e57fb  8b5104               mov edx, dword ptr [ecx + 4]
// 004e57fe  895010               mov dword ptr [eax + 0x10], edx
// 004e5801  8b4908               mov ecx, dword ptr [ecx + 8]
// 004e5804  894814               mov dword ptr [eax + 0x14], ecx
// 004e5807  85c9                 test ecx, ecx
// 004e5809  740c                 je 0x4e5817
// 004e580b  83c104               add ecx, 4
// 004e580e  ba01000000           mov edx, 1
// 004e5813  f00fc111             lock xadd dword ptr [ecx], edx
// 004e5817  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 004e581b  884818               mov byte ptr [eax + 0x18], cl
// 004e581e  c6401900             mov byte ptr [eax + 0x19], 0
// 004e5822  c21400               ret 0x14
// library templates-boost-1_34_1/map_int_sp.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_sp.cpp
