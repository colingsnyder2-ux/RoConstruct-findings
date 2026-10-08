// from server: 100% by auto
// roc 2010-06 00704420  unit: RBX::Animator  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00704420
//
// 00704420  6a10                 push 0x10
// 00704422  e879350a00           call 0x7a79a0
// 00704427  83c404               add esp, 4
// 0070442a  85c0                 test eax, eax
// 0070442c  7406                 je 0x704434
// 0070442e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00704432  8908                 mov dword ptr [eax], ecx
// 00704434  8d4804               lea ecx, [eax + 4]
// 00704437  85c9                 test ecx, ecx
// 00704439  7406                 je 0x704441
// 0070443b  8b542408             mov edx, dword ptr [esp + 8]
// 0070443f  8911                 mov dword ptr [ecx], edx
// 00704441  8d5008               lea edx, [eax + 8]
// 00704444  85d2                 test edx, edx
// 00704446  7420                 je 0x704468
// 00704448  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070444c  56                   push esi
// 0070444d  8b31                 mov esi, dword ptr [ecx]
// 0070444f  8932                 mov dword ptr [edx], esi
// 00704451  8b4904               mov ecx, dword ptr [ecx + 4]
// 00704454  894a04               mov dword ptr [edx + 4], ecx
// 00704457  5e                   pop esi
// 00704458  85c9                 test ecx, ecx
// 0070445a  740c                 je 0x704468
// 0070445c  83c104               add ecx, 4
// 0070445f  ba01000000           mov edx, 1
// 00704464  f00fc111             lock xadd dword ptr [ecx], edx
// 00704468  c20c00               ret 0xc
// library templates-boost-1_34_1/list_sp.cpp (function ?_Buynode@?$list@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@2@PAU342@0ABV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 list_sp.cpp
