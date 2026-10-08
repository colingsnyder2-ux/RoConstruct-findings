// roc 2007-03 006188f0  unit: seg_00610000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006188f0
//
// 006188f0  6a10                 push 0x10
// 006188f2  e811580000           call 0x61e108
// 006188f7  83c404               add esp, 4
// 006188fa  85c0                 test eax, eax
// 006188fc  7428                 je 0x618926
// 006188fe  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00618902  8b542408             mov edx, dword ptr [esp + 8]
// 00618906  8908                 mov dword ptr [eax], ecx
// 00618908  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061890c  895004               mov dword ptr [eax + 4], edx
// 0061890f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00618913  894808               mov dword ptr [eax + 8], ecx
// 00618916  8a0a                 mov cl, byte ptr [edx]
// 00618918  8a542414             mov dl, byte ptr [esp + 0x14]
// 0061891c  88480c               mov byte ptr [eax + 0xc], cl
// 0061891f  88500d               mov byte ptr [eax + 0xd], dl
// 00618922  c6400e00             mov byte ptr [eax + 0xe], 0
// 00618926  c21400               ret 0x14
// library rbxgs-net/Player.cpp (function ?_Buynode@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@2@PAU342@00ABDD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
