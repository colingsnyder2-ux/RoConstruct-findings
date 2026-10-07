// roc 2008-06 00423940  unit: CSelectionTreeCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00423940
//
// 00423940  6a14                 push 0x14
// 00423942  e8d9cf2700           call 0x6a0920
// 00423947  83c404               add esp, 4
// 0042394a  85c0                 test eax, eax
// 0042394c  7428                 je 0x423976
// 0042394e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00423952  8b542408             mov edx, dword ptr [esp + 8]
// 00423956  8908                 mov dword ptr [eax], ecx
// 00423958  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042395c  895004               mov dword ptr [eax + 4], edx
// 0042395f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00423963  894808               mov dword ptr [eax + 8], ecx
// 00423966  8b0a                 mov ecx, dword ptr [edx]
// 00423968  8a542414             mov dl, byte ptr [esp + 0x14]
// 0042396c  89480c               mov dword ptr [eax + 0xc], ecx
// 0042396f  885010               mov byte ptr [eax + 0x10], dl
// 00423972  c6401100             mov byte ptr [eax + 0x11], 0
// 00423976  c21400               ret 0x14
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@GEU?$less@G@std@@V?$allocator@U?$pair@$$CBGE@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@GEU?$less@G@std@@V?$allocator@U?$pair@$$CBGE@std@@@2@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBGE@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
