// roc 2008-06 005b2f20  unit: RBX::VHat::?$FactoryProduct  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b2f20
//
// 005b2f20  6a24                 push 0x24
// 005b2f22  e8f9d90e00           call 0x6a0920
// 005b2f27  83c404               add esp, 4
// 005b2f2a  85c0                 test eax, eax
// 005b2f2c  7440                 je 0x5b2f6e
// 005b2f2e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b2f32  8b542408             mov edx, dword ptr [esp + 8]
// 005b2f36  8908                 mov dword ptr [eax], ecx
// 005b2f38  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b2f3c  894808               mov dword ptr [eax + 8], ecx
// 005b2f3f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b2f43  895004               mov dword ptr [eax + 4], edx
// 005b2f46  8b11                 mov edx, dword ptr [ecx]
// 005b2f48  89500c               mov dword ptr [eax + 0xc], edx
// 005b2f4b  d94104               fld dword ptr [ecx + 4]
// 005b2f4e  d95810               fstp dword ptr [eax + 0x10]
// 005b2f51  d94108               fld dword ptr [ecx + 8]
// 005b2f54  d95814               fstp dword ptr [eax + 0x14]
// 005b2f57  d9410c               fld dword ptr [ecx + 0xc]
// 005b2f5a  d95818               fstp dword ptr [eax + 0x18]
// 005b2f5d  d94110               fld dword ptr [ecx + 0x10]
// 005b2f60  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 005b2f64  d9581c               fstp dword ptr [eax + 0x1c]
// 005b2f67  884820               mov byte ptr [eax + 0x20], cl
// 005b2f6a  c6402100             mov byte ptr [eax + 0x21], 0
// 005b2f6e  c21400               ret 0x14
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
