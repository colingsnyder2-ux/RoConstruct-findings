// roc 2007-03 004c21b0  unit: seg_004c0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c21b0
//
// 004c21b0  8b442404             mov eax, dword ptr [esp + 4]
// 004c21b4  8b08                 mov ecx, dword ptr [eax]
// 004c21b6  80792100             cmp byte ptr [ecx + 0x21], 0
// 004c21ba  750e                 jne 0x4c21ca
// 004c21bc  8d642400             lea esp, [esp]
// 004c21c0  8bc1                 mov eax, ecx
// 004c21c2  8b08                 mov ecx, dword ptr [eax]
// 004c21c4  80792100             cmp byte ptr [ecx + 0x21], 0
// 004c21c8  74f6                 je 0x4c21c0
// 004c21ca  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Min@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
