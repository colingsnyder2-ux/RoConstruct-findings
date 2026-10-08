// roc 2009-06 006d3220  unit: RBX::Block  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d3220
//
// 006d3220  6a20                 push 0x20
// 006d3222  e811580400           call 0x718a38
// 006d3227  83c404               add esp, 4
// 006d322a  85c0                 test eax, eax
// 006d322c  743a                 je 0x6d3268
// 006d322e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006d3232  8b542408             mov edx, dword ptr [esp + 8]
// 006d3236  8908                 mov dword ptr [eax], ecx
// 006d3238  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d323c  894808               mov dword ptr [eax + 8], ecx
// 006d323f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d3243  895004               mov dword ptr [eax + 4], edx
// 006d3246  d901                 fld dword ptr [ecx]
// 006d3248  d9580c               fstp dword ptr [eax + 0xc]
// 006d324b  d94104               fld dword ptr [ecx + 4]
// 006d324e  d95810               fstp dword ptr [eax + 0x10]
// 006d3251  d94108               fld dword ptr [ecx + 8]
// 006d3254  d95814               fstp dword ptr [eax + 0x14]
// 006d3257  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006d325a  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 006d325e  895018               mov dword ptr [eax + 0x18], edx
// 006d3261  88481c               mov byte ptr [eax + 0x1c], cl
// 006d3264  c6401d00             mov byte ptr [eax + 0x1d], 0
// 006d3268  c21400               ret 0x14
// library rbxgs/v8world\Block.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
