// roc 2011-06 00736e70  unit: RBX::Network::P8Player::?$GetImpl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00736e70
//
// 00736e70  6a10                 push 0x10
// 00736e72  e8e7310d00           call 0x80a05e
// 00736e77  83c404               add esp, 4
// 00736e7a  85c0                 test eax, eax
// 00736e7c  7428                 je 0x736ea6
// 00736e7e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00736e82  8b542408             mov edx, dword ptr [esp + 8]
// 00736e86  8908                 mov dword ptr [eax], ecx
// 00736e88  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00736e8c  895004               mov dword ptr [eax + 4], edx
// 00736e8f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00736e93  894808               mov dword ptr [eax + 8], ecx
// 00736e96  8a0a                 mov cl, byte ptr [edx]
// 00736e98  8a542414             mov dl, byte ptr [esp + 0x14]
// 00736e9c  88480c               mov byte ptr [eax + 0xc], cl
// 00736e9f  88500d               mov byte ptr [eax + 0xd], dl
// 00736ea2  c6400e00             mov byte ptr [eax + 0xe], 0
// 00736ea6  c21400               ret 0x14
// library rbxgs-net/Player.cpp (function ?_Buynode@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@2@PAU342@00ABDD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
