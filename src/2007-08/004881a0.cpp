// roc 2007-08 004881a0  unit: P8CRenderSettings::?$GetSetImpl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004881a0
//
// 004881a0  6a10                 push 0x10
// 004881a2  e84f7d1a00           call 0x62fef6
// 004881a7  83c404               add esp, 4
// 004881aa  85c0                 test eax, eax
// 004881ac  7428                 je 0x4881d6
// 004881ae  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004881b2  8b542408             mov edx, dword ptr [esp + 8]
// 004881b6  8908                 mov dword ptr [eax], ecx
// 004881b8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004881bc  895004               mov dword ptr [eax + 4], edx
// 004881bf  8b542410             mov edx, dword ptr [esp + 0x10]
// 004881c3  894808               mov dword ptr [eax + 8], ecx
// 004881c6  8a0a                 mov cl, byte ptr [edx]
// 004881c8  8a542414             mov dl, byte ptr [esp + 0x14]
// 004881cc  88480c               mov byte ptr [eax + 0xc], cl
// 004881cf  88500d               mov byte ptr [eax + 0xd], dl
// 004881d2  c6400e00             mov byte ptr [eax + 0xe], 0
// 004881d6  c21400               ret 0x14
// library rbxgs-net/Player.cpp (function ?_Buynode@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@2@PAU342@00ABDD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
