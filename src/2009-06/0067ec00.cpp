// from server: 100% by auto
// roc 2009-06 0067ec00  unit: RBX::Mechanism  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067ec00
//
// 0067ec00  6a14                 push 0x14
// 0067ec02  e8319e0900           call 0x718a38
// 0067ec07  83c404               add esp, 4
// 0067ec0a  85c0                 test eax, eax
// 0067ec0c  7428                 je 0x67ec36
// 0067ec0e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067ec12  8b542408             mov edx, dword ptr [esp + 8]
// 0067ec16  8908                 mov dword ptr [eax], ecx
// 0067ec18  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067ec1c  895004               mov dword ptr [eax + 4], edx
// 0067ec1f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0067ec23  894808               mov dword ptr [eax + 8], ecx
// 0067ec26  8b0a                 mov ecx, dword ptr [edx]
// 0067ec28  8a542414             mov dl, byte ptr [esp + 0x14]
// 0067ec2c  89480c               mov dword ptr [eax + 0xc], ecx
// 0067ec2f  885010               mov byte ptr [eax + 0x10], dl
// 0067ec32  c6401100             mov byte ptr [eax + 0x11], 0
// 0067ec36  c21400               ret 0x14
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@GEU?$less@G@std@@V?$allocator@U?$pair@$$CBGE@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@GEU?$less@G@std@@V?$allocator@U?$pair@$$CBGE@std@@@2@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBGE@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
