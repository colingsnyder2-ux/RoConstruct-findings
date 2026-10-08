// roc 2007-03 00618570  unit: seg_00610000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00618570
//
// 00618570  8b442404             mov eax, dword ptr [esp + 4]
// 00618574  8b08                 mov ecx, dword ptr [eax]
// 00618576  80792900             cmp byte ptr [ecx + 0x29], 0
// 0061857a  750e                 jne 0x61858a
// 0061857c  8d642400             lea esp, [esp]
// 00618580  8bc1                 mov eax, ecx
// 00618582  8b08                 mov ecx, dword ptr [eax]
// 00618584  80792900             cmp byte ptr [ecx + 0x29], 0
// 00618588  74f6                 je 0x618580
// 0061858a  c3                   ret 
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ?_Min@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
