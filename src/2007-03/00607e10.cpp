// roc 2007-03 00607e10  unit: seg_00600000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00607e10
//
// 00607e10  8b442404             mov eax, dword ptr [esp + 4]
// 00607e14  8b4808               mov ecx, dword ptr [eax + 8]
// 00607e17  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 00607e1b  750e                 jne 0x607e2b
// 00607e1d  8d4900               lea ecx, [ecx]
// 00607e20  8bc1                 mov eax, ecx
// 00607e22  8b4808               mov ecx, dword ptr [eax + 8]
// 00607e25  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 00607e29  74f5                 je 0x607e20
// 00607e2b  c3                   ret 
// library rbxgs/util\Name.cpp (function ?_Max@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
