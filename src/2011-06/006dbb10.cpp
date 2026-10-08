// from server: 100% by auto
// roc 2011-06 006dbb10  unit: RBX::VPhysicsService::?$EventDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006dbb10
//
// 006dbb10  6a14                 push 0x14
// 006dbb12  e847e51200           call 0x80a05e
// 006dbb17  83c404               add esp, 4
// 006dbb1a  85c0                 test eax, eax
// 006dbb1c  7428                 je 0x6dbb46
// 006dbb1e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006dbb22  8b542408             mov edx, dword ptr [esp + 8]
// 006dbb26  8908                 mov dword ptr [eax], ecx
// 006dbb28  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006dbb2c  895004               mov dword ptr [eax + 4], edx
// 006dbb2f  8b542410             mov edx, dword ptr [esp + 0x10]
// 006dbb33  894808               mov dword ptr [eax + 8], ecx
// 006dbb36  8b0a                 mov ecx, dword ptr [edx]
// 006dbb38  8a542414             mov dl, byte ptr [esp + 0x14]
// 006dbb3c  89480c               mov dword ptr [eax + 0xc], ecx
// 006dbb3f  885010               mov byte ptr [eax + 0x10], dl
// 006dbb42  c6401100             mov byte ptr [eax + 0x11], 0
// 006dbb46  c21400               ret 0x14
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@GEU?$less@G@std@@V?$allocator@U?$pair@$$CBGE@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@GEU?$less@G@std@@V?$allocator@U?$pair@$$CBGE@std@@@2@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBGE@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
