// roc 2007-03 005f5d00  unit: seg_005f0000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f5d00
//
// 005f5d00  6a20                 push 0x20
// 005f5d02  e801840200           call 0x61e108
// 005f5d07  83c404               add esp, 4
// 005f5d0a  85c0                 test eax, eax
// 005f5d0c  743a                 je 0x5f5d48
// 005f5d0e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f5d12  8b542408             mov edx, dword ptr [esp + 8]
// 005f5d16  8908                 mov dword ptr [eax], ecx
// 005f5d18  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f5d1c  894808               mov dword ptr [eax + 8], ecx
// 005f5d1f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f5d23  895004               mov dword ptr [eax + 4], edx
// 005f5d26  d901                 fld dword ptr [ecx]
// 005f5d28  d9580c               fstp dword ptr [eax + 0xc]
// 005f5d2b  d94104               fld dword ptr [ecx + 4]
// 005f5d2e  d95810               fstp dword ptr [eax + 0x10]
// 005f5d31  d94108               fld dword ptr [ecx + 8]
// 005f5d34  d95814               fstp dword ptr [eax + 0x14]
// 005f5d37  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005f5d3a  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 005f5d3e  895018               mov dword ptr [eax + 0x18], edx
// 005f5d41  88481c               mov byte ptr [eax + 0x1c], cl
// 005f5d44  c6401d00             mov byte ptr [eax + 0x1d], 0
// 005f5d48  c21400               ret 0x14
// library rbxgs/v8world\Block.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
