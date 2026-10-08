// roc 2007-03 00607dd0  unit: seg_00600000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00607dd0
//
// 00607dd0  8b442404             mov eax, dword ptr [esp + 4]
// 00607dd4  8b4808               mov ecx, dword ptr [eax + 8]
// 00607dd7  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 00607ddb  750e                 jne 0x607deb
// 00607ddd  8d4900               lea ecx, [ecx]
// 00607de0  8bc1                 mov eax, ecx
// 00607de2  8b4808               mov ecx, dword ptr [eax + 8]
// 00607de5  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 00607de9  74f5                 je 0x607de0
// 00607deb  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ?_Max@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
