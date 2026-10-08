// roc 2007-03 00569120  unit: seg_00560000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00569120
//
// 00569120  8b442404             mov eax, dword ptr [esp + 4]
// 00569124  8b08                 mov ecx, dword ptr [eax]
// 00569126  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 0056912a  750e                 jne 0x56913a
// 0056912c  8d642400             lea esp, [esp]
// 00569130  8bc1                 mov eax, ecx
// 00569132  8b08                 mov ecx, dword ptr [eax]
// 00569134  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 00569138  74f6                 je 0x569130
// 0056913a  c3                   ret 
// library rbxgs/util\Name.cpp (function ?_Min@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
