// roc 2007-03 00607df0  unit: seg_00600000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00607df0
//
// 00607df0  8b442404             mov eax, dword ptr [esp + 4]
// 00607df4  8b08                 mov ecx, dword ptr [eax]
// 00607df6  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 00607dfa  750e                 jne 0x607e0a
// 00607dfc  8d642400             lea esp, [esp]
// 00607e00  8bc1                 mov eax, ecx
// 00607e02  8b08                 mov ecx, dword ptr [eax]
// 00607e04  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 00607e08  74f6                 je 0x607e00
// 00607e0a  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ?_Min@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
