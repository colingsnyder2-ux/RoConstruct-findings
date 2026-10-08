// roc 2007-08 00604d90  unit: RBX::SleepStage  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00604d90
//
// 00604d90  6a1c                 push 0x1c
// 00604d92  e85fb10200           call 0x62fef6
// 00604d97  83c404               add esp, 4
// 00604d9a  85c0                 test eax, eax
// 00604d9c  7435                 je 0x604dd3
// 00604d9e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00604da2  8b542408             mov edx, dword ptr [esp + 8]
// 00604da6  8908                 mov dword ptr [eax], ecx
// 00604da8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00604dac  894808               mov dword ptr [eax + 8], ecx
// 00604daf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00604db3  895004               mov dword ptr [eax + 4], edx
// 00604db6  8b11                 mov edx, dword ptr [ecx]
// 00604db8  89500c               mov dword ptr [eax + 0xc], edx
// 00604dbb  0fb65104             movzx edx, byte ptr [ecx + 4]
// 00604dbf  885010               mov byte ptr [eax + 0x10], dl
// 00604dc2  8b4908               mov ecx, dword ptr [ecx + 8]
// 00604dc5  8a542414             mov dl, byte ptr [esp + 0x14]
// 00604dc9  894814               mov dword ptr [eax + 0x14], ecx
// 00604dcc  885018               mov byte ptr [eax + 0x18], dl
// 00604dcf  c6401900             mov byte ptr [eax + 0x19], 0
// 00604dd3  c21400               ret 0x14
// library rbxgs/v8world\ClumpStage.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@PAVPrimitive@RBX@@VPrimitiveSort@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@VPrimitiveSort@2@@std@@@5@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVPrimitive@RBX@@VPrimitiveSort@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@VPrimitiveSort@2@@std@@@5@$0A@@std@@@2@PAU342@00ABU?$pair@QAVPrimitive@RBX@@VPrimitiveSort@2@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
