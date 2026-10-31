// roc 2007-03 0044a360  unit: seg_00440000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044a360
//
// 0044a360  53                   push ebx
// 0044a361  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0044a365  56                   push esi
// 0044a366  8b742410             mov esi, dword ptr [esp + 0x10]
// 0044a36a  3bde                 cmp ebx, esi
// 0044a36c  742d                 je 0x44a39b
// 0044a36e  57                   push edi
// 0044a36f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0044a373  8b46f4               mov eax, dword ptr [esi - 0xc]
// 0044a376  83ee0c               sub esi, 0xc
// 0044a379  83ef0c               sub edi, 0xc
// 0044a37c  8907                 mov dword ptr [edi], eax
// 0044a37e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044a381  8d5608               lea edx, [esi + 8]
// 0044a384  894f04               mov dword ptr [edi + 4], ecx
// 0044a387  52                   push edx
// 0044a388  8d4f08               lea ecx, [edi + 8]
// 0044a38b  ff1540d47700         call dword ptr [0x77d440]
// 0044a391  3bf3                 cmp esi, ebx
// 0044a393  75de                 jne 0x44a373
// 0044a395  8bc7                 mov eax, edi
// 0044a397  5f                   pop edi
// 0044a398  5e                   pop esi
// 0044a399  5b                   pop ebx
// 0044a39a  c3                   ret 
// 0044a39b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0044a39f  5e                   pop esi
// 0044a3a0  5b                   pop ebx
// 0044a3a1  c3                   ret 
// copied from an identical function in another client (function ??$_Copy_backward_opt@PAUColorEntry@@PAU1@Uforward_iterator_tag@std@@@std@@YAPAUColorEntry@@PAU1@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp