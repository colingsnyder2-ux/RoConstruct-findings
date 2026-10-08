// roc 2007-03 004932e0  unit: seg_00490000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004932e0
//
// 004932e0  8b442404             mov eax, dword ptr [esp + 4]
// 004932e4  8b4808               mov ecx, dword ptr [eax + 8]
// 004932e7  80791500             cmp byte ptr [ecx + 0x15], 0
// 004932eb  750e                 jne 0x4932fb
// 004932ed  8d4900               lea ecx, [ecx]
// 004932f0  8bc1                 mov eax, ecx
// 004932f2  8b4808               mov ecx, dword ptr [eax + 8]
// 004932f5  80791500             cmp byte ptr [ecx + 0x15], 0
// 004932f9  74f5                 je 0x4932f0
// 004932fb  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Max@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
