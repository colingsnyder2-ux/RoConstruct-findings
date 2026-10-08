// roc 2012-06 006f1f20  unit: RBX::DataModel  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006f1f20
//
// 006f1f20  6a1c                 push 0x1c
// 006f1f22  e8f3012900           call 0x98211a
// 006f1f27  83c404               add esp, 4
// 006f1f2a  85c0                 test eax, eax
// 006f1f2c  7446                 je 0x6f1f74
// 006f1f2e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f1f32  8b542408             mov edx, dword ptr [esp + 8]
// 006f1f36  8908                 mov dword ptr [eax], ecx
// 006f1f38  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f1f3c  895004               mov dword ptr [eax + 4], edx
// 006f1f3f  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f1f43  894808               mov dword ptr [eax + 8], ecx
// 006f1f46  8b0a                 mov ecx, dword ptr [edx]
// 006f1f48  89480c               mov dword ptr [eax + 0xc], ecx
// 006f1f4b  8b4a04               mov ecx, dword ptr [edx + 4]
// 006f1f4e  894810               mov dword ptr [eax + 0x10], ecx
// 006f1f51  85c9                 test ecx, ecx
// 006f1f53  740e                 je 0x6f1f63
// 006f1f55  56                   push esi
// 006f1f56  83c104               add ecx, 4
// 006f1f59  be01000000           mov esi, 1
// 006f1f5e  f00fc131             lock xadd dword ptr [ecx], esi
// 006f1f62  5e                   pop esi
// 006f1f63  8b5208               mov edx, dword ptr [edx + 8]
// 006f1f66  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 006f1f6a  895014               mov dword ptr [eax + 0x14], edx
// 006f1f6d  884818               mov byte ptr [eax + 0x18], cl
// 006f1f70  c6401900             mov byte ptr [eax + 0x19], 0
// 006f1f74  c21400               ret 0x14
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
