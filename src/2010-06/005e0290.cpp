// roc 2010-06 005e0290  unit: RBX::GlobalSettings  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e0290
//
// 005e0290  6a1c                 push 0x1c
// 005e0292  e809771c00           call 0x7a79a0
// 005e0297  83c404               add esp, 4
// 005e029a  85c0                 test eax, eax
// 005e029c  7446                 je 0x5e02e4
// 005e029e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e02a2  8b542408             mov edx, dword ptr [esp + 8]
// 005e02a6  8908                 mov dword ptr [eax], ecx
// 005e02a8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e02ac  895004               mov dword ptr [eax + 4], edx
// 005e02af  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e02b3  894808               mov dword ptr [eax + 8], ecx
// 005e02b6  8b0a                 mov ecx, dword ptr [edx]
// 005e02b8  89480c               mov dword ptr [eax + 0xc], ecx
// 005e02bb  8b4a04               mov ecx, dword ptr [edx + 4]
// 005e02be  894810               mov dword ptr [eax + 0x10], ecx
// 005e02c1  85c9                 test ecx, ecx
// 005e02c3  740e                 je 0x5e02d3
// 005e02c5  56                   push esi
// 005e02c6  83c104               add ecx, 4
// 005e02c9  be01000000           mov esi, 1
// 005e02ce  f00fc131             lock xadd dword ptr [ecx], esi
// 005e02d2  5e                   pop esi
// 005e02d3  8b5208               mov edx, dword ptr [edx + 8]
// 005e02d6  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 005e02da  895014               mov dword ptr [eax + 0x14], edx
// 005e02dd  884818               mov byte ptr [eax + 0x18], cl
// 005e02e0  c6401900             mov byte ptr [eax + 0x19], 0
// 005e02e4  c21400               ret 0x14
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
