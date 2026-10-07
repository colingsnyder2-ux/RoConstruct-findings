// roc 2008-06 004ad860  unit: RBX::Network::Replicator::ChangePropertyItem  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ad860
//
// 004ad860  6a10                 push 0x10
// 004ad862  e8b9301f00           call 0x6a0920
// 004ad867  83c404               add esp, 4
// 004ad86a  85c0                 test eax, eax
// 004ad86c  7406                 je 0x4ad874
// 004ad86e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ad872  8908                 mov dword ptr [eax], ecx
// 004ad874  8d4804               lea ecx, [eax + 4]
// 004ad877  85c9                 test ecx, ecx
// 004ad879  7406                 je 0x4ad881
// 004ad87b  8b542408             mov edx, dword ptr [esp + 8]
// 004ad87f  8911                 mov dword ptr [ecx], edx
// 004ad881  8d5008               lea edx, [eax + 8]
// 004ad884  85d2                 test edx, edx
// 004ad886  7420                 je 0x4ad8a8
// 004ad888  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ad88c  56                   push esi
// 004ad88d  8b31                 mov esi, dword ptr [ecx]
// 004ad88f  8932                 mov dword ptr [edx], esi
// 004ad891  8b4904               mov ecx, dword ptr [ecx + 4]
// 004ad894  894a04               mov dword ptr [edx + 4], ecx
// 004ad897  5e                   pop esi
// 004ad898  85c9                 test ecx, ecx
// 004ad89a  740c                 je 0x4ad8a8
// 004ad89c  83c104               add ecx, 4
// 004ad89f  ba01000000           mov edx, 1
// 004ad8a4  f00fc111             lock xadd dword ptr [ecx], edx
// 004ad8a8  c20c00               ret 0xc
// library templates-boost-1_34_1/list_sp.cpp (function ?_Buynode@?$list@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@2@PAU342@0ABV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 list_sp.cpp
