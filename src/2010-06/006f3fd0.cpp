// roc 2010-06 006f3fd0  unit: RBX::VStudioTool::?$EventDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f3fd0
//
// 006f3fd0  6a10                 push 0x10
// 006f3fd2  e8c9390b00           call 0x7a79a0
// 006f3fd7  83c404               add esp, 4
// 006f3fda  85c0                 test eax, eax
// 006f3fdc  7428                 je 0x6f4006
// 006f3fde  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f3fe2  8b542408             mov edx, dword ptr [esp + 8]
// 006f3fe6  8908                 mov dword ptr [eax], ecx
// 006f3fe8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f3fec  895004               mov dword ptr [eax + 4], edx
// 006f3fef  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f3ff3  894808               mov dword ptr [eax + 8], ecx
// 006f3ff6  8a0a                 mov cl, byte ptr [edx]
// 006f3ff8  8a542414             mov dl, byte ptr [esp + 0x14]
// 006f3ffc  88480c               mov byte ptr [eax + 0xc], cl
// 006f3fff  88500d               mov byte ptr [eax + 0xd], dl
// 006f4002  c6400e00             mov byte ptr [eax + 0xe], 0
// 006f4006  c21400               ret 0x14
// library rbxgs-net/Player.cpp (function ?_Buynode@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@2@PAU342@00ABDD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
