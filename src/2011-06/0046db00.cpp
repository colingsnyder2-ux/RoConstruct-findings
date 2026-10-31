// roc 2011-06 0046db00  unit: CRobloxControlMaterialSelector  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046db00
//
// 0046db00  53                   push ebx
// 0046db01  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0046db05  56                   push esi
// 0046db06  8b742410             mov esi, dword ptr [esp + 0x10]
// 0046db0a  3bde                 cmp ebx, esi
// 0046db0c  742d                 je 0x46db3b
// 0046db0e  57                   push edi
// 0046db0f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0046db13  8b46f4               mov eax, dword ptr [esi - 0xc]
// 0046db16  83ee0c               sub esi, 0xc
// 0046db19  83ef0c               sub edi, 0xc
// 0046db1c  8907                 mov dword ptr [edi], eax
// 0046db1e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0046db21  8d5608               lea edx, [esi + 8]
// 0046db24  894f04               mov dword ptr [edi + 4], ecx
// 0046db27  52                   push edx
// 0046db28  8d4f08               lea ecx, [edi + 8]
// 0046db2b  ff156425a400         call dword ptr [0xa42564]
// 0046db31  3bf3                 cmp esi, ebx
// 0046db33  75de                 jne 0x46db13
// 0046db35  8bc7                 mov eax, edi
// 0046db37  5f                   pop edi
// 0046db38  5e                   pop esi
// 0046db39  5b                   pop ebx
// 0046db3a  c3                   ret 
// 0046db3b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046db3f  5e                   pop esi
// 0046db40  5b                   pop ebx
// 0046db41  c3                   ret 
// copied from an identical function in another client (function ??$_Copy_backward_opt@PAUColorEntry@@PAU1@Uforward_iterator_tag@std@@@std@@YAPAUColorEntry@@PAU1@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp