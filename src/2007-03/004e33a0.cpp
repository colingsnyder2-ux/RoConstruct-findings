// roc 2007-03 004e33a0  unit: seg_004e0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e33a0
//
// 004e33a0  6a20                 push 0x20
// 004e33a2  e861ad1300           call 0x61e108
// 004e33a7  83c404               add esp, 4
// 004e33aa  85c0                 test eax, eax
// 004e33ac  7406                 je 0x4e33b4
// 004e33ae  c70000000000         mov dword ptr [eax], 0
// 004e33b4  8d4804               lea ecx, [eax + 4]
// 004e33b7  85c9                 test ecx, ecx
// 004e33b9  7406                 je 0x4e33c1
// 004e33bb  c70100000000         mov dword ptr [ecx], 0
// 004e33c1  8d4808               lea ecx, [eax + 8]
// 004e33c4  85c9                 test ecx, ecx
// 004e33c6  7406                 je 0x4e33ce
// 004e33c8  c70100000000         mov dword ptr [ecx], 0
// 004e33ce  c6401c01             mov byte ptr [eax + 0x1c], 1
// 004e33d2  c6401d00             mov byte ptr [eax + 0x1d], 0
// 004e33d6  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
