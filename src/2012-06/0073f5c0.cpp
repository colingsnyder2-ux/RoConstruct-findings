// roc 2012-06 0073f5c0  unit: RBX::PluginManager  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0073f5c0
//
// 0073f5c0  6a24                 push 0x24
// 0073f5c2  e8532b2400           call 0x98211a
// 0073f5c7  83c404               add esp, 4
// 0073f5ca  85c0                 test eax, eax
// 0073f5cc  7440                 je 0x73f60e
// 0073f5ce  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0073f5d2  8b542408             mov edx, dword ptr [esp + 8]
// 0073f5d6  8908                 mov dword ptr [eax], ecx
// 0073f5d8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073f5dc  894808               mov dword ptr [eax + 8], ecx
// 0073f5df  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073f5e3  895004               mov dword ptr [eax + 4], edx
// 0073f5e6  8b11                 mov edx, dword ptr [ecx]
// 0073f5e8  89500c               mov dword ptr [eax + 0xc], edx
// 0073f5eb  d94104               fld dword ptr [ecx + 4]
// 0073f5ee  d95810               fstp dword ptr [eax + 0x10]
// 0073f5f1  d94108               fld dword ptr [ecx + 8]
// 0073f5f4  d95814               fstp dword ptr [eax + 0x14]
// 0073f5f7  d9410c               fld dword ptr [ecx + 0xc]
// 0073f5fa  d95818               fstp dword ptr [eax + 0x18]
// 0073f5fd  d94110               fld dword ptr [ecx + 0x10]
// 0073f600  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0073f604  d9581c               fstp dword ptr [eax + 0x1c]
// 0073f607  884820               mov byte ptr [eax + 0x20], cl
// 0073f60a  c6402100             mov byte ptr [eax + 0x21], 0
// 0073f60e  c21400               ret 0x14
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
