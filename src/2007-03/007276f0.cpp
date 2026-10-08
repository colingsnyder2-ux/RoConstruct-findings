// roc 2007-03 007276f0  unit: seg_00720000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007276f0
//
// 007276f0  8b442404             mov eax, dword ptr [esp + 4]
// 007276f4  8b4808               mov ecx, dword ptr [eax + 8]
// 007276f7  80792500             cmp byte ptr [ecx + 0x25], 0
// 007276fb  750e                 jne 0x72770b
// 007276fd  8d4900               lea ecx, [ecx]
// 00727700  8bc1                 mov eax, ecx
// 00727702  8b4808               mov ecx, dword ptr [eax + 8]
// 00727705  80792500             cmp byte ptr [ecx + 0x25], 0
// 00727709  74f5                 je 0x727700
// 0072770b  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ?_Max@?$_Tree@V?$_Tmap_traits@V?$shared_ptr@VInstance@RBX@@@boost@@Vconnection@signals@2@U?$less@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@V?$allocator@U?$pair@$$CBV?$shared_ptr@VInstance@RBX@@@boost@@Vconnection@signals@2@@std@@@6@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$shared_ptr@VInstance@RBX@@@boost@@Vconnection@signals@2@U?$less@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@V?$allocator@U?$pair@$$CBV?$shared_ptr@VInstance@RBX@@@boost@@Vconnection@signals@2@@std@@@6@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
