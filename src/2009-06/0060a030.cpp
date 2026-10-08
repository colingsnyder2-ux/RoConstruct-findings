// roc 2009-06 0060a030  unit: RBX::GlobalSettings  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0060a030
//
// 0060a030  6a1c                 push 0x1c
// 0060a032  e801ea1000           call 0x718a38
// 0060a037  83c404               add esp, 4
// 0060a03a  85c0                 test eax, eax
// 0060a03c  7446                 je 0x60a084
// 0060a03e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060a042  8b542408             mov edx, dword ptr [esp + 8]
// 0060a046  8908                 mov dword ptr [eax], ecx
// 0060a048  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060a04c  895004               mov dword ptr [eax + 4], edx
// 0060a04f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0060a053  894808               mov dword ptr [eax + 8], ecx
// 0060a056  8b0a                 mov ecx, dword ptr [edx]
// 0060a058  89480c               mov dword ptr [eax + 0xc], ecx
// 0060a05b  8b4a04               mov ecx, dword ptr [edx + 4]
// 0060a05e  894810               mov dword ptr [eax + 0x10], ecx
// 0060a061  85c9                 test ecx, ecx
// 0060a063  740e                 je 0x60a073
// 0060a065  56                   push esi
// 0060a066  83c104               add ecx, 4
// 0060a069  be01000000           mov esi, 1
// 0060a06e  f00fc131             lock xadd dword ptr [ecx], esi
// 0060a072  5e                   pop esi
// 0060a073  8b5208               mov edx, dword ptr [edx + 8]
// 0060a076  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0060a07a  895014               mov dword ptr [eax + 0x14], edx
// 0060a07d  884818               mov byte ptr [eax + 0x18], cl
// 0060a080  c6401900             mov byte ptr [eax + 0x19], 0
// 0060a084  c21400               ret 0x14
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
