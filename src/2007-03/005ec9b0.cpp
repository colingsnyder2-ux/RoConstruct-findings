// roc 2007-03 005ec9b0  unit: seg_005e0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ec9b0
//
// 005ec9b0  6a14                 push 0x14
// 005ec9b2  e851170300           call 0x61e108
// 005ec9b7  83c404               add esp, 4
// 005ec9ba  85c0                 test eax, eax
// 005ec9bc  7428                 je 0x5ec9e6
// 005ec9be  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ec9c2  8b542408             mov edx, dword ptr [esp + 8]
// 005ec9c6  8908                 mov dword ptr [eax], ecx
// 005ec9c8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ec9cc  895004               mov dword ptr [eax + 4], edx
// 005ec9cf  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ec9d3  894808               mov dword ptr [eax + 8], ecx
// 005ec9d6  8b0a                 mov ecx, dword ptr [edx]
// 005ec9d8  8a542414             mov dl, byte ptr [esp + 0x14]
// 005ec9dc  89480c               mov dword ptr [eax + 0xc], ecx
// 005ec9df  885010               mov byte ptr [eax + 0x10], dl
// 005ec9e2  c6401100             mov byte ptr [eax + 0x11], 0
// 005ec9e6  c21400               ret 0x14
// library rbxgs/v8world\Assembly.cpp (function ?_Buynode@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@2@PAU342@00ABQAVClump@RBX@@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
