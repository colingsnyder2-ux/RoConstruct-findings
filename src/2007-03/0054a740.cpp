// roc 2007-03 0054a740  unit: seg_00540000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a740
//
// 0054a740  6a0c                 push 0xc
// 0054a742  e8c1390d00           call 0x61e108
// 0054a747  83c404               add esp, 4
// 0054a74a  85c0                 test eax, eax
// 0054a74c  7402                 je 0x54a750
// 0054a74e  8900                 mov dword ptr [eax], eax
// 0054a750  8d4804               lea ecx, [eax + 4]
// 0054a753  85c9                 test ecx, ecx
// 0054a755  7402                 je 0x54a759
// 0054a757  8901                 mov dword ptr [ecx], eax
// 0054a759  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?_Buynode@?$list@PAVFlagStand@RBX@@V?$allocator@PAVFlagStand@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@PAVFlagStand@RBX@@V?$allocator@PAVFlagStand@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
