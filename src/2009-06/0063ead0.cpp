// roc 2009-06 0063ead0  unit: RBX::Accoutrement  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063ead0
//
// 0063ead0  6a24                 push 0x24
// 0063ead2  e8619f0d00           call 0x718a38
// 0063ead7  83c404               add esp, 4
// 0063eada  85c0                 test eax, eax
// 0063eadc  7440                 je 0x63eb1e
// 0063eade  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063eae2  8b542408             mov edx, dword ptr [esp + 8]
// 0063eae6  8908                 mov dword ptr [eax], ecx
// 0063eae8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063eaec  894808               mov dword ptr [eax + 8], ecx
// 0063eaef  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063eaf3  895004               mov dword ptr [eax + 4], edx
// 0063eaf6  8b11                 mov edx, dword ptr [ecx]
// 0063eaf8  89500c               mov dword ptr [eax + 0xc], edx
// 0063eafb  d94104               fld dword ptr [ecx + 4]
// 0063eafe  d95810               fstp dword ptr [eax + 0x10]
// 0063eb01  d94108               fld dword ptr [ecx + 8]
// 0063eb04  d95814               fstp dword ptr [eax + 0x14]
// 0063eb07  d9410c               fld dword ptr [ecx + 0xc]
// 0063eb0a  d95818               fstp dword ptr [eax + 0x18]
// 0063eb0d  d94110               fld dword ptr [ecx + 0x10]
// 0063eb10  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0063eb14  d9581c               fstp dword ptr [eax + 0x1c]
// 0063eb17  884820               mov byte ptr [eax + 0x20], cl
// 0063eb1a  c6402100             mov byte ptr [eax + 0x21], 0
// 0063eb1e  c21400               ret 0x14
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
