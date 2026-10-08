// roc 2010-06 00755d60  unit: RBX::Block  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00755d60
//
// 00755d60  6a20                 push 0x20
// 00755d62  e8391c0500           call 0x7a79a0
// 00755d67  83c404               add esp, 4
// 00755d6a  85c0                 test eax, eax
// 00755d6c  743a                 je 0x755da8
// 00755d6e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00755d72  8b542408             mov edx, dword ptr [esp + 8]
// 00755d76  8908                 mov dword ptr [eax], ecx
// 00755d78  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00755d7c  894808               mov dword ptr [eax + 8], ecx
// 00755d7f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00755d83  895004               mov dword ptr [eax + 4], edx
// 00755d86  d901                 fld dword ptr [ecx]
// 00755d88  d9580c               fstp dword ptr [eax + 0xc]
// 00755d8b  d94104               fld dword ptr [ecx + 4]
// 00755d8e  d95810               fstp dword ptr [eax + 0x10]
// 00755d91  d94108               fld dword ptr [ecx + 8]
// 00755d94  d95814               fstp dword ptr [eax + 0x14]
// 00755d97  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00755d9a  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 00755d9e  895018               mov dword ptr [eax + 0x18], edx
// 00755da1  88481c               mov byte ptr [eax + 0x1c], cl
// 00755da4  c6401d00             mov byte ptr [eax + 0x1d], 0
// 00755da8  c21400               ret 0x14
// library rbxgs/v8world\Block.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
