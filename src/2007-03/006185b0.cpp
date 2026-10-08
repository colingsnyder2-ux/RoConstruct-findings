// roc 2007-03 006185b0  unit: seg_00610000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006185b0
//
// 006185b0  8b442404             mov eax, dword ptr [esp + 4]
// 006185b4  8b08                 mov ecx, dword ptr [eax]
// 006185b6  80790e00             cmp byte ptr [ecx + 0xe], 0
// 006185ba  750e                 jne 0x6185ca
// 006185bc  8d642400             lea esp, [esp]
// 006185c0  8bc1                 mov eax, ecx
// 006185c2  8b08                 mov ecx, dword ptr [eax]
// 006185c4  80790e00             cmp byte ptr [ecx + 0xe], 0
// 006185c8  74f6                 je 0x6185c0
// 006185ca  c3                   ret 
// library rbxgs-net/Player.cpp (function ?_Min@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
