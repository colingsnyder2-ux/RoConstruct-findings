// roc 2007-03 005919d0  unit: seg_00590000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005919d0
//
// 005919d0  8b442404             mov eax, dword ptr [esp + 4]
// 005919d4  8b4808               mov ecx, dword ptr [eax + 8]
// 005919d7  80792100             cmp byte ptr [ecx + 0x21], 0
// 005919db  750e                 jne 0x5919eb
// 005919dd  8d4900               lea ecx, [ecx]
// 005919e0  8bc1                 mov eax, ecx
// 005919e2  8b4808               mov ecx, dword ptr [eax + 8]
// 005919e5  80792100             cmp byte ptr [ecx + 0x21], 0
// 005919e9  74f5                 je 0x5919e0
// 005919eb  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Max@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
