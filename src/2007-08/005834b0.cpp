// roc 2007-08 005834b0  unit: RBX::VHat::?$FactoryProduct  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005834b0
//
// 005834b0  6a24                 push 0x24
// 005834b2  e83fca0a00           call 0x62fef6
// 005834b7  83c404               add esp, 4
// 005834ba  85c0                 test eax, eax
// 005834bc  7440                 je 0x5834fe
// 005834be  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005834c2  8b542408             mov edx, dword ptr [esp + 8]
// 005834c6  8908                 mov dword ptr [eax], ecx
// 005834c8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005834cc  894808               mov dword ptr [eax + 8], ecx
// 005834cf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005834d3  895004               mov dword ptr [eax + 4], edx
// 005834d6  8b11                 mov edx, dword ptr [ecx]
// 005834d8  89500c               mov dword ptr [eax + 0xc], edx
// 005834db  d94104               fld dword ptr [ecx + 4]
// 005834de  d95810               fstp dword ptr [eax + 0x10]
// 005834e1  d94108               fld dword ptr [ecx + 8]
// 005834e4  d95814               fstp dword ptr [eax + 0x14]
// 005834e7  d9410c               fld dword ptr [ecx + 0xc]
// 005834ea  d95818               fstp dword ptr [eax + 0x18]
// 005834ed  d94110               fld dword ptr [ecx + 0x10]
// 005834f0  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 005834f4  d9581c               fstp dword ptr [eax + 0x1c]
// 005834f7  884820               mov byte ptr [eax + 0x20], cl
// 005834fa  c6402100             mov byte ptr [eax + 0x21], 0
// 005834fe  c21400               ret 0x14
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
