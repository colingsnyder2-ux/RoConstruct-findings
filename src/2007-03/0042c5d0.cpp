// roc 2007-03 0042c5d0  unit: seg_00420000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042c5d0
//
// 0042c5d0  6a10                 push 0x10
// 0042c5d2  e8311b1f00           call 0x61e108
// 0042c5d7  83c404               add esp, 4
// 0042c5da  85c0                 test eax, eax
// 0042c5dc  7406                 je 0x42c5e4
// 0042c5de  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042c5e2  8908                 mov dword ptr [eax], ecx
// 0042c5e4  8d4804               lea ecx, [eax + 4]
// 0042c5e7  85c9                 test ecx, ecx
// 0042c5e9  7406                 je 0x42c5f1
// 0042c5eb  8b542408             mov edx, dword ptr [esp + 8]
// 0042c5ef  8911                 mov dword ptr [ecx], edx
// 0042c5f1  8d5008               lea edx, [eax + 8]
// 0042c5f4  85d2                 test edx, edx
// 0042c5f6  7420                 je 0x42c618
// 0042c5f8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042c5fc  56                   push esi
// 0042c5fd  8b31                 mov esi, dword ptr [ecx]
// 0042c5ff  8932                 mov dword ptr [edx], esi
// 0042c601  8b4904               mov ecx, dword ptr [ecx + 4]
// 0042c604  85c9                 test ecx, ecx
// 0042c606  894a04               mov dword ptr [edx + 4], ecx
// 0042c609  5e                   pop esi
// 0042c60a  740c                 je 0x42c618
// 0042c60c  83c104               add ecx, 4
// 0042c60f  ba01000000           mov edx, 1
// 0042c614  f00fc111             lock xadd dword ptr [ecx], edx
// 0042c618  c20c00               ret 0xc
// library rbxgs-net/Replicator.cpp (function ?_Buynode@?$list@V?$shared_ptr@VItem@Replicator@Network@RBX@@@boost@@V?$allocator@V?$shared_ptr@VItem@Replicator@Network@RBX@@@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@V?$shared_ptr@VItem@Replicator@Network@RBX@@@boost@@V?$allocator@V?$shared_ptr@VItem@Replicator@Network@RBX@@@boost@@@std@@@2@PAU342@0ABV?$shared_ptr@VItem@Replicator@Network@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
