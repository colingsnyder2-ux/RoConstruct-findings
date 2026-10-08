// roc 2007-03 005ad430  unit: seg_005a0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ad430
//
// 005ad430  6a14                 push 0x14
// 005ad432  e8d10c0700           call 0x61e108
// 005ad437  83c404               add esp, 4
// 005ad43a  85c0                 test eax, eax
// 005ad43c  7406                 je 0x5ad444
// 005ad43e  c70000000000         mov dword ptr [eax], 0
// 005ad444  8d4804               lea ecx, [eax + 4]
// 005ad447  85c9                 test ecx, ecx
// 005ad449  7406                 je 0x5ad451
// 005ad44b  c70100000000         mov dword ptr [ecx], 0
// 005ad451  8d4808               lea ecx, [eax + 8]
// 005ad454  85c9                 test ecx, ecx
// 005ad456  7406                 je 0x5ad45e
// 005ad458  c70100000000         mov dword ptr [ecx], 0
// 005ad45e  c6401001             mov byte ptr [eax + 0x10], 1
// 005ad462  c6401100             mov byte ptr [eax + 0x11], 0
// 005ad466  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ?_Buynode@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
