// roc 2009-12 006774a0  unit: RBX::GlobalSettings  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006774a0
//
// 006774a0  6a1c                 push 0x1c
// 006774a2  e8b9c31700           call 0x7f3860
// 006774a7  83c404               add esp, 4
// 006774aa  85c0                 test eax, eax
// 006774ac  7446                 je 0x6774f4
// 006774ae  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006774b2  8b542408             mov edx, dword ptr [esp + 8]
// 006774b6  8908                 mov dword ptr [eax], ecx
// 006774b8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006774bc  895004               mov dword ptr [eax + 4], edx
// 006774bf  8b542410             mov edx, dword ptr [esp + 0x10]
// 006774c3  894808               mov dword ptr [eax + 8], ecx
// 006774c6  8b0a                 mov ecx, dword ptr [edx]
// 006774c8  89480c               mov dword ptr [eax + 0xc], ecx
// 006774cb  8b4a04               mov ecx, dword ptr [edx + 4]
// 006774ce  894810               mov dword ptr [eax + 0x10], ecx
// 006774d1  85c9                 test ecx, ecx
// 006774d3  740e                 je 0x6774e3
// 006774d5  56                   push esi
// 006774d6  83c104               add ecx, 4
// 006774d9  be01000000           mov esi, 1
// 006774de  f00fc131             lock xadd dword ptr [ecx], esi
// 006774e2  5e                   pop esi
// 006774e3  8b5208               mov edx, dword ptr [edx + 8]
// 006774e6  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 006774ea  895014               mov dword ptr [eax + 0x14], edx
// 006774ed  884818               mov byte ptr [eax + 0x18], cl
// 006774f0  c6401900             mov byte ptr [eax + 0x19], 0
// 006774f4  c21400               ret 0x14
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
