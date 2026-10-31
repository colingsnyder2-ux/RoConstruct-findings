// roc 2010-06 004548b0  unit: CRobloxControlMaterialSelector  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004548b0
//
// 004548b0  53                   push ebx
// 004548b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004548b5  56                   push esi
// 004548b6  8b742410             mov esi, dword ptr [esp + 0x10]
// 004548ba  3bde                 cmp ebx, esi
// 004548bc  742d                 je 0x4548eb
// 004548be  57                   push edi
// 004548bf  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004548c3  8b46f4               mov eax, dword ptr [esi - 0xc]
// 004548c6  83ee0c               sub esi, 0xc
// 004548c9  83ef0c               sub edi, 0xc
// 004548cc  8907                 mov dword ptr [edi], eax
// 004548ce  8b4e04               mov ecx, dword ptr [esi + 4]
// 004548d1  8d5608               lea edx, [esi + 8]
// 004548d4  894f04               mov dword ptr [edi + 4], ecx
// 004548d7  52                   push edx
// 004548d8  8d4f08               lea ecx, [edi + 8]
// 004548db  ff1580c59e00         call dword ptr [0x9ec580]
// 004548e1  3bf3                 cmp esi, ebx
// 004548e3  75de                 jne 0x4548c3
// 004548e5  8bc7                 mov eax, edi
// 004548e7  5f                   pop edi
// 004548e8  5e                   pop esi
// 004548e9  5b                   pop ebx
// 004548ea  c3                   ret 
// 004548eb  8b442414             mov eax, dword ptr [esp + 0x14]
// 004548ef  5e                   pop esi
// 004548f0  5b                   pop ebx
// 004548f1  c3                   ret 
// copied from an identical function in another client (function ??$_Copy_backward_opt@PAUColorEntry@@PAU1@Uforward_iterator_tag@std@@@std@@YAPAUColorEntry@@PAU1@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp