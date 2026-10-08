// roc 2007-03 00618590  unit: seg_00610000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00618590
//
// 00618590  8b442404             mov eax, dword ptr [esp + 4]
// 00618594  8b4808               mov ecx, dword ptr [eax + 8]
// 00618597  80790e00             cmp byte ptr [ecx + 0xe], 0
// 0061859b  750e                 jne 0x6185ab
// 0061859d  8d4900               lea ecx, [ecx]
// 006185a0  8bc1                 mov eax, ecx
// 006185a2  8b4808               mov ecx, dword ptr [eax + 8]
// 006185a5  80790e00             cmp byte ptr [ecx + 0xe], 0
// 006185a9  74f5                 je 0x6185a0
// 006185ab  c3                   ret 
// library rbxgs-net/Player.cpp (function ?_Max@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
