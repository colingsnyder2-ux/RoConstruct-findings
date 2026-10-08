// roc 2007-08 0055d950  unit: RBX::DataModel  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d950
//
// 0055d950  6a1c                 push 0x1c
// 0055d952  e89f250d00           call 0x62fef6
// 0055d957  83c404               add esp, 4
// 0055d95a  85c0                 test eax, eax
// 0055d95c  7446                 je 0x55d9a4
// 0055d95e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055d962  8b542408             mov edx, dword ptr [esp + 8]
// 0055d966  8908                 mov dword ptr [eax], ecx
// 0055d968  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055d96c  895004               mov dword ptr [eax + 4], edx
// 0055d96f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0055d973  894808               mov dword ptr [eax + 8], ecx
// 0055d976  8b0a                 mov ecx, dword ptr [edx]
// 0055d978  89480c               mov dword ptr [eax + 0xc], ecx
// 0055d97b  8b4a04               mov ecx, dword ptr [edx + 4]
// 0055d97e  85c9                 test ecx, ecx
// 0055d980  894810               mov dword ptr [eax + 0x10], ecx
// 0055d983  740e                 je 0x55d993
// 0055d985  56                   push esi
// 0055d986  83c104               add ecx, 4
// 0055d989  be01000000           mov esi, 1
// 0055d98e  f00fc131             lock xadd dword ptr [ecx], esi
// 0055d992  5e                   pop esi
// 0055d993  8b5208               mov edx, dword ptr [edx + 8]
// 0055d996  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0055d99a  895014               mov dword ptr [eax + 0x14], edx
// 0055d99d  884818               mov byte ptr [eax + 0x18], cl
// 0055d9a0  c6401900             mov byte ptr [eax + 0x19], 0
// 0055d9a4  c21400               ret 0x14
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@D@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
