// roc 2007-03 00608380  unit: seg_00600000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00608380
//
// 00608380  6a30                 push 0x30
// 00608382  e8815d0100           call 0x61e108
// 00608387  83c404               add esp, 4
// 0060838a  85c0                 test eax, eax
// 0060838c  7406                 je 0x608394
// 0060838e  c70000000000         mov dword ptr [eax], 0
// 00608394  8d4804               lea ecx, [eax + 4]
// 00608397  85c9                 test ecx, ecx
// 00608399  7406                 je 0x6083a1
// 0060839b  c70100000000         mov dword ptr [ecx], 0
// 006083a1  8d4808               lea ecx, [eax + 8]
// 006083a4  85c9                 test ecx, ecx
// 006083a6  7406                 je 0x6083ae
// 006083a8  c70100000000         mov dword ptr [ecx], 0
// 006083ae  c6402c01             mov byte ptr [eax + 0x2c], 1
// 006083b2  c6402d00             mov byte ptr [eax + 0x2d], 0
// 006083b6  c3                   ret 
// library rbxgs/util\Name.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
