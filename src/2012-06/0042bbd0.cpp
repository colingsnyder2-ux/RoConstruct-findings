// roc 2012-06 0042bbd0  unit: CSelectionTreeCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0042bbd0
//
// 0042bbd0  6a14                 push 0x14
// 0042bbd2  e843655500           call 0x98211a
// 0042bbd7  83c404               add esp, 4
// 0042bbda  85c0                 test eax, eax
// 0042bbdc  7428                 je 0x42bc06
// 0042bbde  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042bbe2  8b542408             mov edx, dword ptr [esp + 8]
// 0042bbe6  8908                 mov dword ptr [eax], ecx
// 0042bbe8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042bbec  895004               mov dword ptr [eax + 4], edx
// 0042bbef  8b542410             mov edx, dword ptr [esp + 0x10]
// 0042bbf3  894808               mov dword ptr [eax + 8], ecx
// 0042bbf6  8b0a                 mov ecx, dword ptr [edx]
// 0042bbf8  8a542414             mov dl, byte ptr [esp + 0x14]
// 0042bbfc  89480c               mov dword ptr [eax + 0xc], ecx
// 0042bbff  885010               mov byte ptr [eax + 0x10], dl
// 0042bc02  c6401100             mov byte ptr [eax + 0x11], 0
// 0042bc06  c21400               ret 0x14
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@GEU?$less@G@std@@V?$allocator@U?$pair@$$CBGE@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@GEU?$less@G@std@@V?$allocator@U?$pair@$$CBGE@std@@@2@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBGE@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
