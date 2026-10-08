// from server: 100% by auto
// roc 2007-08 0042b0a0  unit: VCLuaFunction::?$CComObject  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042b0a0
//
// 0042b0a0  6a10                 push 0x10
// 0042b0a2  e84f4e2000           call 0x62fef6
// 0042b0a7  83c404               add esp, 4
// 0042b0aa  85c0                 test eax, eax
// 0042b0ac  7406                 je 0x42b0b4
// 0042b0ae  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042b0b2  8908                 mov dword ptr [eax], ecx
// 0042b0b4  8d4804               lea ecx, [eax + 4]
// 0042b0b7  85c9                 test ecx, ecx
// 0042b0b9  7406                 je 0x42b0c1
// 0042b0bb  8b542408             mov edx, dword ptr [esp + 8]
// 0042b0bf  8911                 mov dword ptr [ecx], edx
// 0042b0c1  8d5008               lea edx, [eax + 8]
// 0042b0c4  85d2                 test edx, edx
// 0042b0c6  7420                 je 0x42b0e8
// 0042b0c8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042b0cc  56                   push esi
// 0042b0cd  8b31                 mov esi, dword ptr [ecx]
// 0042b0cf  8932                 mov dword ptr [edx], esi
// 0042b0d1  8b4904               mov ecx, dword ptr [ecx + 4]
// 0042b0d4  85c9                 test ecx, ecx
// 0042b0d6  894a04               mov dword ptr [edx + 4], ecx
// 0042b0d9  5e                   pop esi
// 0042b0da  740c                 je 0x42b0e8
// 0042b0dc  83c104               add ecx, 4
// 0042b0df  ba01000000           mov edx, 1
// 0042b0e4  f00fc111             lock xadd dword ptr [ecx], edx
// 0042b0e8  c20c00               ret 0xc
// library templates-boost-1_34_1/list_sp.cpp (function ?_Buynode@?$list@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@2@PAU342@0ABV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 list_sp.cpp
