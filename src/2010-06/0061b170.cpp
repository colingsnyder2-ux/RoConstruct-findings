// roc 2010-06 0061b170  unit: RBX::Accoutrement  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0061b170
//
// 0061b170  6a24                 push 0x24
// 0061b172  e829c81800           call 0x7a79a0
// 0061b177  83c404               add esp, 4
// 0061b17a  85c0                 test eax, eax
// 0061b17c  7440                 je 0x61b1be
// 0061b17e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0061b182  8b542408             mov edx, dword ptr [esp + 8]
// 0061b186  8908                 mov dword ptr [eax], ecx
// 0061b188  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061b18c  894808               mov dword ptr [eax + 8], ecx
// 0061b18f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061b193  895004               mov dword ptr [eax + 4], edx
// 0061b196  8b11                 mov edx, dword ptr [ecx]
// 0061b198  89500c               mov dword ptr [eax + 0xc], edx
// 0061b19b  d94104               fld dword ptr [ecx + 4]
// 0061b19e  d95810               fstp dword ptr [eax + 0x10]
// 0061b1a1  d94108               fld dword ptr [ecx + 8]
// 0061b1a4  d95814               fstp dword ptr [eax + 0x14]
// 0061b1a7  d9410c               fld dword ptr [ecx + 0xc]
// 0061b1aa  d95818               fstp dword ptr [eax + 0x18]
// 0061b1ad  d94110               fld dword ptr [ecx + 0x10]
// 0061b1b0  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0061b1b4  d9581c               fstp dword ptr [eax + 0x1c]
// 0061b1b7  884820               mov byte ptr [eax + 0x20], cl
// 0061b1ba  c6402100             mov byte ptr [eax + 0x21], 0
// 0061b1be  c21400               ret 0x14
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
