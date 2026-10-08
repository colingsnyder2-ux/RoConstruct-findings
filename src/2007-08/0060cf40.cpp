// roc 2007-08 0060cf40  unit: RBX::Block  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060cf40
//
// 0060cf40  6a20                 push 0x20
// 0060cf42  e8af2f0200           call 0x62fef6
// 0060cf47  83c404               add esp, 4
// 0060cf4a  85c0                 test eax, eax
// 0060cf4c  743a                 je 0x60cf88
// 0060cf4e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060cf52  8b542408             mov edx, dword ptr [esp + 8]
// 0060cf56  8908                 mov dword ptr [eax], ecx
// 0060cf58  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060cf5c  894808               mov dword ptr [eax + 8], ecx
// 0060cf5f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060cf63  895004               mov dword ptr [eax + 4], edx
// 0060cf66  d901                 fld dword ptr [ecx]
// 0060cf68  d9580c               fstp dword ptr [eax + 0xc]
// 0060cf6b  d94104               fld dword ptr [ecx + 4]
// 0060cf6e  d95810               fstp dword ptr [eax + 0x10]
// 0060cf71  d94108               fld dword ptr [ecx + 8]
// 0060cf74  d95814               fstp dword ptr [eax + 0x14]
// 0060cf77  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0060cf7a  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0060cf7e  895018               mov dword ptr [eax + 0x18], edx
// 0060cf81  88481c               mov byte ptr [eax + 0x1c], cl
// 0060cf84  c6401d00             mov byte ptr [eax + 0x1d], 0
// 0060cf88  c21400               ret 0x14
// library rbxgs/v8world\Block.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
