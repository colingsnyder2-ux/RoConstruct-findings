// roc 2007-03 006188b0  unit: seg_00610000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006188b0
//
// 006188b0  6a10                 push 0x10
// 006188b2  e851580000           call 0x61e108
// 006188b7  83c404               add esp, 4
// 006188ba  85c0                 test eax, eax
// 006188bc  7406                 je 0x6188c4
// 006188be  c70000000000         mov dword ptr [eax], 0
// 006188c4  8d4804               lea ecx, [eax + 4]
// 006188c7  85c9                 test ecx, ecx
// 006188c9  7406                 je 0x6188d1
// 006188cb  c70100000000         mov dword ptr [ecx], 0
// 006188d1  8d4808               lea ecx, [eax + 8]
// 006188d4  85c9                 test ecx, ecx
// 006188d6  7406                 je 0x6188de
// 006188d8  c70100000000         mov dword ptr [ecx], 0
// 006188de  c6400d01             mov byte ptr [eax + 0xd], 1
// 006188e2  c6400e00             mov byte ptr [eax + 0xe], 0
// 006188e6  c3                   ret 
// library rbxgs-net/Player.cpp (function ?_Buynode@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
