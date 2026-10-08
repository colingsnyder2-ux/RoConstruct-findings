// roc 2007-03 005abdd0  unit: seg_005a0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abdd0
//
// 005abdd0  8b442404             mov eax, dword ptr [esp + 4]
// 005abdd4  8b08                 mov ecx, dword ptr [eax]
// 005abdd6  80791100             cmp byte ptr [ecx + 0x11], 0
// 005abdda  750e                 jne 0x5abdea
// 005abddc  8d642400             lea esp, [esp]
// 005abde0  8bc1                 mov eax, ecx
// 005abde2  8b08                 mov ecx, dword ptr [eax]
// 005abde4  80791100             cmp byte ptr [ecx + 0x11], 0
// 005abde8  74f6                 je 0x5abde0
// 005abdea  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ?_Min@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
