// roc 2012-06 008fd4e0  unit: RBX::VAnimationTrackState::?$EventDesc  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008fd4e0
//
// 008fd4e0  6a10                 push 0x10
// 008fd4e2  e8334c0800           call 0x98211a
// 008fd4e7  83c404               add esp, 4
// 008fd4ea  85c0                 test eax, eax
// 008fd4ec  7406                 je 0x8fd4f4
// 008fd4ee  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008fd4f2  8908                 mov dword ptr [eax], ecx
// 008fd4f4  8d4804               lea ecx, [eax + 4]
// 008fd4f7  85c9                 test ecx, ecx
// 008fd4f9  7406                 je 0x8fd501
// 008fd4fb  8b542408             mov edx, dword ptr [esp + 8]
// 008fd4ff  8911                 mov dword ptr [ecx], edx
// 008fd501  8d5008               lea edx, [eax + 8]
// 008fd504  85d2                 test edx, edx
// 008fd506  7420                 je 0x8fd528
// 008fd508  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008fd50c  56                   push esi
// 008fd50d  8b31                 mov esi, dword ptr [ecx]
// 008fd50f  8932                 mov dword ptr [edx], esi
// 008fd511  8b4904               mov ecx, dword ptr [ecx + 4]
// 008fd514  894a04               mov dword ptr [edx + 4], ecx
// 008fd517  5e                   pop esi
// 008fd518  85c9                 test ecx, ecx
// 008fd51a  740c                 je 0x8fd528
// 008fd51c  83c104               add ecx, 4
// 008fd51f  ba01000000           mov edx, 1
// 008fd524  f00fc111             lock xadd dword ptr [ecx], edx
// 008fd528  c20c00               ret 0xc
// library templates-boost-1_34_1/list_sp.cpp (function ?_Buynode@?$list@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@2@PAU342@0ABV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 list_sp.cpp
