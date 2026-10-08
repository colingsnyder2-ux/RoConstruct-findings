// roc 2008-06 00648400  unit: RBX::Block  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00648400
//
// 00648400  6a20                 push 0x20
// 00648402  e819850500           call 0x6a0920
// 00648407  83c404               add esp, 4
// 0064840a  85c0                 test eax, eax
// 0064840c  743a                 je 0x648448
// 0064840e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00648412  8b542408             mov edx, dword ptr [esp + 8]
// 00648416  8908                 mov dword ptr [eax], ecx
// 00648418  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064841c  894808               mov dword ptr [eax + 8], ecx
// 0064841f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00648423  895004               mov dword ptr [eax + 4], edx
// 00648426  d901                 fld dword ptr [ecx]
// 00648428  d9580c               fstp dword ptr [eax + 0xc]
// 0064842b  d94104               fld dword ptr [ecx + 4]
// 0064842e  d95810               fstp dword ptr [eax + 0x10]
// 00648431  d94108               fld dword ptr [ecx + 8]
// 00648434  d95814               fstp dword ptr [eax + 0x14]
// 00648437  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0064843a  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0064843e  895018               mov dword ptr [eax + 0x18], edx
// 00648441  88481c               mov byte ptr [eax + 0x1c], cl
// 00648444  c6401d00             mov byte ptr [eax + 0x1d], 0
// 00648448  c21400               ret 0x14
// library rbxgs/v8world\Block.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
