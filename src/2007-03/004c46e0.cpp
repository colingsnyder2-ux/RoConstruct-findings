// roc 2007-03 004c46e0  unit: seg_004c0000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c46e0
//
// 004c46e0  8b442404             mov eax, dword ptr [esp + 4]
// 004c46e4  8b4808               mov ecx, dword ptr [eax + 8]
// 004c46e7  80792900             cmp byte ptr [ecx + 0x29], 0
// 004c46eb  750e                 jne 0x4c46fb
// 004c46ed  8d4900               lea ecx, [ecx]
// 004c46f0  8bc1                 mov eax, ecx
// 004c46f2  8b4808               mov ecx, dword ptr [eax + 8]
// 004c46f5  80792900             cmp byte ptr [ecx + 0x29], 0
// 004c46f9  74f5                 je 0x4c46f0
// 004c46fb  c3                   ret 
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ?_Max@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
