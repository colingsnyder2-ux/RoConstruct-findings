// roc 2009-12 007afd50  unit: RBX::Block  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007afd50
//
// 007afd50  6a20                 push 0x20
// 007afd52  e8093b0400           call 0x7f3860
// 007afd57  83c404               add esp, 4
// 007afd5a  85c0                 test eax, eax
// 007afd5c  743a                 je 0x7afd98
// 007afd5e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007afd62  8b542408             mov edx, dword ptr [esp + 8]
// 007afd66  8908                 mov dword ptr [eax], ecx
// 007afd68  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007afd6c  894808               mov dword ptr [eax + 8], ecx
// 007afd6f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007afd73  895004               mov dword ptr [eax + 4], edx
// 007afd76  d901                 fld dword ptr [ecx]
// 007afd78  d9580c               fstp dword ptr [eax + 0xc]
// 007afd7b  d94104               fld dword ptr [ecx + 4]
// 007afd7e  d95810               fstp dword ptr [eax + 0x10]
// 007afd81  d94108               fld dword ptr [ecx + 8]
// 007afd84  d95814               fstp dword ptr [eax + 0x14]
// 007afd87  8b510c               mov edx, dword ptr [ecx + 0xc]
// 007afd8a  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 007afd8e  895018               mov dword ptr [eax + 0x18], edx
// 007afd91  88481c               mov byte ptr [eax + 0x1c], cl
// 007afd94  c6401d00             mov byte ptr [eax + 0x1d], 0
// 007afd98  c21400               ret 0x14
// library rbxgs/v8world\Block.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
