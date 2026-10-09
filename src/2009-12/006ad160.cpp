// roc 2009-12 006ad160  unit: RBX::Accoutrement  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ad160
//
// 006ad160  6a24                 push 0x24
// 006ad162  e8f9661400           call 0x7f3860
// 006ad167  83c404               add esp, 4
// 006ad16a  85c0                 test eax, eax
// 006ad16c  7440                 je 0x6ad1ae
// 006ad16e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006ad172  8b542408             mov edx, dword ptr [esp + 8]
// 006ad176  8908                 mov dword ptr [eax], ecx
// 006ad178  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ad17c  894808               mov dword ptr [eax + 8], ecx
// 006ad17f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006ad183  895004               mov dword ptr [eax + 4], edx
// 006ad186  8b11                 mov edx, dword ptr [ecx]
// 006ad188  89500c               mov dword ptr [eax + 0xc], edx
// 006ad18b  d94104               fld dword ptr [ecx + 4]
// 006ad18e  d95810               fstp dword ptr [eax + 0x10]
// 006ad191  d94108               fld dword ptr [ecx + 8]
// 006ad194  d95814               fstp dword ptr [eax + 0x14]
// 006ad197  d9410c               fld dword ptr [ecx + 0xc]
// 006ad19a  d95818               fstp dword ptr [eax + 0x18]
// 006ad19d  d94110               fld dword ptr [ecx + 0x10]
// 006ad1a0  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 006ad1a4  d9581c               fstp dword ptr [eax + 0x1c]
// 006ad1a7  884820               mov byte ptr [eax + 0x20], cl
// 006ad1aa  c6402100             mov byte ptr [eax + 0x21], 0
// 006ad1ae  c21400               ret 0x14
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
