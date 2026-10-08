// roc 2007-03 004cd3e0  unit: seg_004c0000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cd3e0
//
// 004cd3e0  8b442404             mov eax, dword ptr [esp + 4]
// 004cd3e4  8b4808               mov ecx, dword ptr [eax + 8]
// 004cd3e7  80793500             cmp byte ptr [ecx + 0x35], 0
// 004cd3eb  750e                 jne 0x4cd3fb
// 004cd3ed  8d4900               lea ecx, [ecx]
// 004cd3f0  8bc1                 mov eax, ecx
// 004cd3f2  8b4808               mov ecx, dword ptr [eax + 8]
// 004cd3f5  80793500             cmp byte ptr [ecx + 0x35], 0
// 004cd3f9  74f5                 je 0x4cd3f0
// 004cd3fb  c3                   ret 
// library rbxgs-view/BrickMesh.cpp (function ?_Max@?$_Tree@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
