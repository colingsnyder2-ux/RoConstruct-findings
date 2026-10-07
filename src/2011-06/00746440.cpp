// roc 2011-06 00746440  unit: RBX::Animator  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00746440
//
// 00746440  6a10                 push 0x10
// 00746442  e8173c0c00           call 0x80a05e
// 00746447  83c404               add esp, 4
// 0074644a  85c0                 test eax, eax
// 0074644c  7406                 je 0x746454
// 0074644e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00746452  8908                 mov dword ptr [eax], ecx
// 00746454  8d4804               lea ecx, [eax + 4]
// 00746457  85c9                 test ecx, ecx
// 00746459  7406                 je 0x746461
// 0074645b  8b542408             mov edx, dword ptr [esp + 8]
// 0074645f  8911                 mov dword ptr [ecx], edx
// 00746461  8d5008               lea edx, [eax + 8]
// 00746464  85d2                 test edx, edx
// 00746466  7420                 je 0x746488
// 00746468  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0074646c  56                   push esi
// 0074646d  8b31                 mov esi, dword ptr [ecx]
// 0074646f  8932                 mov dword ptr [edx], esi
// 00746471  8b4904               mov ecx, dword ptr [ecx + 4]
// 00746474  894a04               mov dword ptr [edx + 4], ecx
// 00746477  5e                   pop esi
// 00746478  85c9                 test ecx, ecx
// 0074647a  740c                 je 0x746488
// 0074647c  83c104               add ecx, 4
// 0074647f  ba01000000           mov edx, 1
// 00746484  f00fc111             lock xadd dword ptr [ecx], edx
// 00746488  c20c00               ret 0xc
// library templates-boost-1_34_1/list_sp.cpp (function ?_Buynode@?$list@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@2@PAU342@0ABV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 list_sp.cpp
