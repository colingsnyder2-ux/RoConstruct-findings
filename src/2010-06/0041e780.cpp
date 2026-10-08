// from server: 100% by auto
// roc 2010-06 0041e780  unit: CSelectionTreeCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041e780
//
// 0041e780  6a14                 push 0x14
// 0041e782  e819923800           call 0x7a79a0
// 0041e787  83c404               add esp, 4
// 0041e78a  85c0                 test eax, eax
// 0041e78c  7428                 je 0x41e7b6
// 0041e78e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041e792  8b542408             mov edx, dword ptr [esp + 8]
// 0041e796  8908                 mov dword ptr [eax], ecx
// 0041e798  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041e79c  895004               mov dword ptr [eax + 4], edx
// 0041e79f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0041e7a3  894808               mov dword ptr [eax + 8], ecx
// 0041e7a6  8b0a                 mov ecx, dword ptr [edx]
// 0041e7a8  8a542414             mov dl, byte ptr [esp + 0x14]
// 0041e7ac  89480c               mov dword ptr [eax + 0xc], ecx
// 0041e7af  885010               mov byte ptr [eax + 0x10], dl
// 0041e7b2  c6401100             mov byte ptr [eax + 0x11], 0
// 0041e7b6  c21400               ret 0x14
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@GEU?$less@G@std@@V?$allocator@U?$pair@$$CBGE@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@GEU?$less@G@std@@V?$allocator@U?$pair@$$CBGE@std@@@2@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBGE@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
