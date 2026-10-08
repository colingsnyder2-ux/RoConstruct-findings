// roc 2008-06 0048b360  unit: boost::any::placeholder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b360
//
// 0048b360  6a10                 push 0x10
// 0048b362  e8b9552100           call 0x6a0920
// 0048b367  83c404               add esp, 4
// 0048b36a  85c0                 test eax, eax
// 0048b36c  7428                 je 0x48b396
// 0048b36e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048b372  8b542408             mov edx, dword ptr [esp + 8]
// 0048b376  8908                 mov dword ptr [eax], ecx
// 0048b378  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048b37c  895004               mov dword ptr [eax + 4], edx
// 0048b37f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048b383  894808               mov dword ptr [eax + 8], ecx
// 0048b386  8a0a                 mov cl, byte ptr [edx]
// 0048b388  8a542414             mov dl, byte ptr [esp + 0x14]
// 0048b38c  88480c               mov byte ptr [eax + 0xc], cl
// 0048b38f  88500d               mov byte ptr [eax + 0xd], dl
// 0048b392  c6400e00             mov byte ptr [eax + 0xe], 0
// 0048b396  c21400               ret 0x14
// library rbxgs-net/Player.cpp (function ?_Buynode@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@2@PAU342@00ABDD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
