// roc 2007-03 0056d7f0  unit: seg_00560000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056d7f0
//
// 0056d7f0  6a18                 push 0x18
// 0056d7f2  e811090b00           call 0x61e108
// 0056d7f7  83c404               add esp, 4
// 0056d7fa  85c0                 test eax, eax
// 0056d7fc  742e                 je 0x56d82c
// 0056d7fe  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056d802  8b542408             mov edx, dword ptr [esp + 8]
// 0056d806  8908                 mov dword ptr [eax], ecx
// 0056d808  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056d80c  894808               mov dword ptr [eax + 8], ecx
// 0056d80f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056d813  895004               mov dword ptr [eax + 4], edx
// 0056d816  8b11                 mov edx, dword ptr [ecx]
// 0056d818  89500c               mov dword ptr [eax + 0xc], edx
// 0056d81b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0056d81e  8a542414             mov dl, byte ptr [esp + 0x14]
// 0056d822  894810               mov dword ptr [eax + 0x10], ecx
// 0056d825  885014               mov byte ptr [eax + 0x14], dl
// 0056d828  c6401500             mov byte ptr [eax + 0x15], 0
// 0056d82c  c21400               ret 0x14
// library rbxgs/util\Name.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@HPAVName@RBX@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVName@RBX@@@std@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HPAVName@RBX@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVName@RBX@@@std@@@4@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBHPAVName@RBX@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
