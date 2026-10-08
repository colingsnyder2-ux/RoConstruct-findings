// roc 2011-06 0064bab0  unit: RBX::GameBasicSettings  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064bab0
//
// 0064bab0  6a24                 push 0x24
// 0064bab2  e8a7e51b00           call 0x80a05e
// 0064bab7  83c404               add esp, 4
// 0064baba  85c0                 test eax, eax
// 0064babc  7440                 je 0x64bafe
// 0064babe  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0064bac2  8b542408             mov edx, dword ptr [esp + 8]
// 0064bac6  8908                 mov dword ptr [eax], ecx
// 0064bac8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064bacc  894808               mov dword ptr [eax + 8], ecx
// 0064bacf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0064bad3  895004               mov dword ptr [eax + 4], edx
// 0064bad6  8b11                 mov edx, dword ptr [ecx]
// 0064bad8  89500c               mov dword ptr [eax + 0xc], edx
// 0064badb  d94104               fld dword ptr [ecx + 4]
// 0064bade  d95810               fstp dword ptr [eax + 0x10]
// 0064bae1  d94108               fld dword ptr [ecx + 8]
// 0064bae4  d95814               fstp dword ptr [eax + 0x14]
// 0064bae7  d9410c               fld dword ptr [ecx + 0xc]
// 0064baea  d95818               fstp dword ptr [eax + 0x18]
// 0064baed  d94110               fld dword ptr [ecx + 0x10]
// 0064baf0  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0064baf4  d9581c               fstp dword ptr [eax + 0x1c]
// 0064baf7  884820               mov byte ptr [eax + 0x20], cl
// 0064bafa  c6402100             mov byte ptr [eax + 0x21], 0
// 0064bafe  c21400               ret 0x14
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
