// roc 2007-03 00580250  unit: seg_00580000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00580250
//
// 00580250  6a24                 push 0x24
// 00580252  e8b1de0900           call 0x61e108
// 00580257  83c404               add esp, 4
// 0058025a  85c0                 test eax, eax
// 0058025c  7440                 je 0x58029e
// 0058025e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00580262  8b542408             mov edx, dword ptr [esp + 8]
// 00580266  8908                 mov dword ptr [eax], ecx
// 00580268  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058026c  894808               mov dword ptr [eax + 8], ecx
// 0058026f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00580273  895004               mov dword ptr [eax + 4], edx
// 00580276  8b11                 mov edx, dword ptr [ecx]
// 00580278  89500c               mov dword ptr [eax + 0xc], edx
// 0058027b  d94104               fld dword ptr [ecx + 4]
// 0058027e  d95810               fstp dword ptr [eax + 0x10]
// 00580281  d94108               fld dword ptr [ecx + 8]
// 00580284  d95814               fstp dword ptr [eax + 0x14]
// 00580287  d9410c               fld dword ptr [ecx + 0xc]
// 0058028a  d95818               fstp dword ptr [eax + 0x18]
// 0058028d  d94110               fld dword ptr [ecx + 0x10]
// 00580290  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 00580294  d9581c               fstp dword ptr [eax + 0x1c]
// 00580297  884820               mov byte ptr [eax + 0x20], cl
// 0058029a  c6402100             mov byte ptr [eax + 0x21], 0
// 0058029e  c21400               ret 0x14
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
