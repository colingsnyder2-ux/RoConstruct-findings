// roc 2007-03 005f14c0  unit: seg_005f0000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f14c0
//
// 005f14c0  6a1c                 push 0x1c
// 005f14c2  e841cc0200           call 0x61e108
// 005f14c7  83c404               add esp, 4
// 005f14ca  85c0                 test eax, eax
// 005f14cc  7435                 je 0x5f1503
// 005f14ce  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f14d2  8b542408             mov edx, dword ptr [esp + 8]
// 005f14d6  8908                 mov dword ptr [eax], ecx
// 005f14d8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f14dc  894808               mov dword ptr [eax + 8], ecx
// 005f14df  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f14e3  895004               mov dword ptr [eax + 4], edx
// 005f14e6  8b11                 mov edx, dword ptr [ecx]
// 005f14e8  89500c               mov dword ptr [eax + 0xc], edx
// 005f14eb  0fb65104             movzx edx, byte ptr [ecx + 4]
// 005f14ef  885010               mov byte ptr [eax + 0x10], dl
// 005f14f2  8b4908               mov ecx, dword ptr [ecx + 8]
// 005f14f5  8a542414             mov dl, byte ptr [esp + 0x14]
// 005f14f9  894814               mov dword ptr [eax + 0x14], ecx
// 005f14fc  885018               mov byte ptr [eax + 0x18], dl
// 005f14ff  c6401900             mov byte ptr [eax + 0x19], 0
// 005f1503  c21400               ret 0x14
// library rbxgs/v8world\ClumpStage.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@PAVPrimitive@RBX@@VPrimitiveSort@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@VPrimitiveSort@2@@std@@@5@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVPrimitive@RBX@@VPrimitiveSort@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@VPrimitiveSort@2@@std@@@5@$0A@@std@@@2@PAU342@00ABU?$pair@QAVPrimitive@RBX@@VPrimitiveSort@2@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
