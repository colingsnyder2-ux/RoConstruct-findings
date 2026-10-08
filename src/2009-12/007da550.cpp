// roc 2009-12 007da550  unit: RBX::SpatialFilter  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007da550
//
// 007da550  6a14                 push 0x14
// 007da552  e809930100           call 0x7f3860
// 007da557  83c404               add esp, 4
// 007da55a  85c0                 test eax, eax
// 007da55c  7428                 je 0x7da586
// 007da55e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007da562  8b542408             mov edx, dword ptr [esp + 8]
// 007da566  8908                 mov dword ptr [eax], ecx
// 007da568  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007da56c  895004               mov dword ptr [eax + 4], edx
// 007da56f  8b542410             mov edx, dword ptr [esp + 0x10]
// 007da573  894808               mov dword ptr [eax + 8], ecx
// 007da576  8b0a                 mov ecx, dword ptr [edx]
// 007da578  8a542414             mov dl, byte ptr [esp + 0x14]
// 007da57c  89480c               mov dword ptr [eax + 0xc], ecx
// 007da57f  885010               mov byte ptr [eax + 0x10], dl
// 007da582  c6401100             mov byte ptr [eax + 0x11], 0
// 007da586  c21400               ret 0x14
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@GEU?$less@G@std@@V?$allocator@U?$pair@$$CBGE@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@GEU?$less@G@std@@V?$allocator@U?$pair@$$CBGE@std@@@2@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBGE@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
