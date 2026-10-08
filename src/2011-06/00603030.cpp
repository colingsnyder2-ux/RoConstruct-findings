// roc 2011-06 00603030  unit: RBX::UnifiedWidget  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00603030
//
// 00603030  6a1c                 push 0x1c
// 00603032  e827702000           call 0x80a05e
// 00603037  83c404               add esp, 4
// 0060303a  85c0                 test eax, eax
// 0060303c  7446                 je 0x603084
// 0060303e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00603042  8b542408             mov edx, dword ptr [esp + 8]
// 00603046  8908                 mov dword ptr [eax], ecx
// 00603048  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060304c  895004               mov dword ptr [eax + 4], edx
// 0060304f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00603053  894808               mov dword ptr [eax + 8], ecx
// 00603056  8b0a                 mov ecx, dword ptr [edx]
// 00603058  89480c               mov dword ptr [eax + 0xc], ecx
// 0060305b  8b4a04               mov ecx, dword ptr [edx + 4]
// 0060305e  894810               mov dword ptr [eax + 0x10], ecx
// 00603061  85c9                 test ecx, ecx
// 00603063  740e                 je 0x603073
// 00603065  56                   push esi
// 00603066  83c104               add ecx, 4
// 00603069  be01000000           mov esi, 1
// 0060306e  f00fc131             lock xadd dword ptr [ecx], esi
// 00603072  5e                   pop esi
// 00603073  8b5208               mov edx, dword ptr [edx + 8]
// 00603076  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0060307a  895014               mov dword ptr [eax + 0x14], edx
// 0060307d  884818               mov byte ptr [eax + 0x18], cl
// 00603080  c6401900             mov byte ptr [eax + 0x19], 0
// 00603084  c21400               ret 0x14
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
