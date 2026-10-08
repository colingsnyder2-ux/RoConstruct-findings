// roc 2007-03 004c2570  unit: seg_004c0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2570
//
// 004c2570  6a24                 push 0x24
// 004c2572  e891bb1500           call 0x61e108
// 004c2577  83c404               add esp, 4
// 004c257a  85c0                 test eax, eax
// 004c257c  7406                 je 0x4c2584
// 004c257e  c70000000000         mov dword ptr [eax], 0
// 004c2584  8d4804               lea ecx, [eax + 4]
// 004c2587  85c9                 test ecx, ecx
// 004c2589  7406                 je 0x4c2591
// 004c258b  c70100000000         mov dword ptr [ecx], 0
// 004c2591  8d4808               lea ecx, [eax + 8]
// 004c2594  85c9                 test ecx, ecx
// 004c2596  7406                 je 0x4c259e
// 004c2598  c70100000000         mov dword ptr [ecx], 0
// 004c259e  c6402001             mov byte ptr [eax + 0x20], 1
// 004c25a2  c6402100             mov byte ptr [eax + 0x21], 0
// 004c25a6  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
