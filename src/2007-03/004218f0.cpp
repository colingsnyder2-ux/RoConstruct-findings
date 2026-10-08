// roc 2007-03 004218f0  unit: seg_00420000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004218f0
//
// 004218f0  8b442404             mov eax, dword ptr [esp + 4]
// 004218f4  8b4808               mov ecx, dword ptr [eax + 8]
// 004218f7  80791100             cmp byte ptr [ecx + 0x11], 0
// 004218fb  750e                 jne 0x42190b
// 004218fd  8d4900               lea ecx, [ecx]
// 00421900  8bc1                 mov eax, ecx
// 00421902  8b4808               mov ecx, dword ptr [eax + 8]
// 00421905  80791100             cmp byte ptr [ecx + 0x11], 0
// 00421909  74f5                 je 0x421900
// 0042190b  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ?_Max@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
