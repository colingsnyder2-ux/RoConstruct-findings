// from server: 100% by auto
// roc 2007-08 00604de0  unit: RBX::SleepStage  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00604de0
//
// 00604de0  6a14                 push 0x14
// 00604de2  e80fb10200           call 0x62fef6
// 00604de7  83c404               add esp, 4
// 00604dea  85c0                 test eax, eax
// 00604dec  7428                 je 0x604e16
// 00604dee  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00604df2  8b542408             mov edx, dword ptr [esp + 8]
// 00604df6  8908                 mov dword ptr [eax], ecx
// 00604df8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00604dfc  895004               mov dword ptr [eax + 4], edx
// 00604dff  8b542410             mov edx, dword ptr [esp + 0x10]
// 00604e03  894808               mov dword ptr [eax + 8], ecx
// 00604e06  8b0a                 mov ecx, dword ptr [edx]
// 00604e08  8a542414             mov dl, byte ptr [esp + 0x14]
// 00604e0c  89480c               mov dword ptr [eax + 0xc], ecx
// 00604e0f  885010               mov byte ptr [eax + 0x10], dl
// 00604e12  c6401100             mov byte ptr [eax + 0x11], 0
// 00604e16  c21400               ret 0x14
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@GEU?$less@G@std@@V?$allocator@U?$pair@$$CBGE@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@GEU?$less@G@std@@V?$allocator@U?$pair@$$CBGE@std@@@2@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBGE@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
