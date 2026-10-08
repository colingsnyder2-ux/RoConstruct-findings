// roc 2007-03 005ef3b0  unit: seg_005e0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ef3b0
//
// 005ef3b0  8b442404             mov eax, dword ptr [esp + 4]
// 005ef3b4  8b08                 mov ecx, dword ptr [eax]
// 005ef3b6  80791500             cmp byte ptr [ecx + 0x15], 0
// 005ef3ba  750e                 jne 0x5ef3ca
// 005ef3bc  8d642400             lea esp, [esp]
// 005ef3c0  8bc1                 mov eax, ecx
// 005ef3c2  8b08                 mov ecx, dword ptr [eax]
// 005ef3c4  80791500             cmp byte ptr [ecx + 0x15], 0
// 005ef3c8  74f6                 je 0x5ef3c0
// 005ef3ca  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Min@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
