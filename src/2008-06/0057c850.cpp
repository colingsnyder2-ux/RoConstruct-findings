// roc 2008-06 0057c850  unit: RBX::VInstance::?$SignalDesc  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c850
//
// 0057c850  6a1c                 push 0x1c
// 0057c852  e8c9401200           call 0x6a0920
// 0057c857  83c404               add esp, 4
// 0057c85a  85c0                 test eax, eax
// 0057c85c  7446                 je 0x57c8a4
// 0057c85e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057c862  8b542408             mov edx, dword ptr [esp + 8]
// 0057c866  8908                 mov dword ptr [eax], ecx
// 0057c868  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057c86c  895004               mov dword ptr [eax + 4], edx
// 0057c86f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057c873  894808               mov dword ptr [eax + 8], ecx
// 0057c876  8b0a                 mov ecx, dword ptr [edx]
// 0057c878  89480c               mov dword ptr [eax + 0xc], ecx
// 0057c87b  8b4a04               mov ecx, dword ptr [edx + 4]
// 0057c87e  894810               mov dword ptr [eax + 0x10], ecx
// 0057c881  85c9                 test ecx, ecx
// 0057c883  740e                 je 0x57c893
// 0057c885  56                   push esi
// 0057c886  83c104               add ecx, 4
// 0057c889  be01000000           mov esi, 1
// 0057c88e  f00fc131             lock xadd dword ptr [ecx], esi
// 0057c892  5e                   pop esi
// 0057c893  8b5208               mov edx, dword ptr [edx + 8]
// 0057c896  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0057c89a  895014               mov dword ptr [eax + 0x14], edx
// 0057c89d  884818               mov byte ptr [eax + 0x18], cl
// 0057c8a0  c6401900             mov byte ptr [eax + 0x19], 0
// 0057c8a4  c21400               ret 0x14
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
