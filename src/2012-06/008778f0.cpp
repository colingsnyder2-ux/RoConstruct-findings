// roc 2012-06 008778f0  unit: DummyJob  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008778f0
//
// 008778f0  6a10                 push 0x10
// 008778f2  e823a81000           call 0x98211a
// 008778f7  83c404               add esp, 4
// 008778fa  85c0                 test eax, eax
// 008778fc  7428                 je 0x877926
// 008778fe  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00877902  8b542408             mov edx, dword ptr [esp + 8]
// 00877906  8908                 mov dword ptr [eax], ecx
// 00877908  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087790c  895004               mov dword ptr [eax + 4], edx
// 0087790f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00877913  894808               mov dword ptr [eax + 8], ecx
// 00877916  8a0a                 mov cl, byte ptr [edx]
// 00877918  8a542414             mov dl, byte ptr [esp + 0x14]
// 0087791c  88480c               mov byte ptr [eax + 0xc], cl
// 0087791f  88500d               mov byte ptr [eax + 0xd], dl
// 00877922  c6400e00             mov byte ptr [eax + 0xe], 0
// 00877926  c21400               ret 0x14
// library rbxgs-net/Player.cpp (function ?_Buynode@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@2@PAU342@00ABDD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
