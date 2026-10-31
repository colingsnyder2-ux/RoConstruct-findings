// roc 2012-06 00477d20  unit: CRobloxControlColorSelector  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00477d20
//
// 00477d20  53                   push ebx
// 00477d21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00477d25  56                   push esi
// 00477d26  8b742410             mov esi, dword ptr [esp + 0x10]
// 00477d2a  3bde                 cmp ebx, esi
// 00477d2c  742d                 je 0x477d5b
// 00477d2e  57                   push edi
// 00477d2f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00477d33  8b46f4               mov eax, dword ptr [esi - 0xc]
// 00477d36  83ee0c               sub esi, 0xc
// 00477d39  83ef0c               sub edi, 0xc
// 00477d3c  8907                 mov dword ptr [edi], eax
// 00477d3e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00477d41  8d5608               lea edx, [esi + 8]
// 00477d44  894f04               mov dword ptr [edi + 4], ecx
// 00477d47  52                   push edx
// 00477d48  8d4f08               lea ecx, [edi + 8]
// 00477d4b  ff152045b200         call dword ptr [0xb24520]
// 00477d51  3bf3                 cmp esi, ebx
// 00477d53  75de                 jne 0x477d33
// 00477d55  8bc7                 mov eax, edi
// 00477d57  5f                   pop edi
// 00477d58  5e                   pop esi
// 00477d59  5b                   pop ebx
// 00477d5a  c3                   ret 
// 00477d5b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00477d5f  5e                   pop esi
// 00477d60  5b                   pop ebx
// 00477d61  c3                   ret 
// copied from an identical function in another client (function ??$_Copy_backward_opt@PAUColorEntry@@PAU1@Uforward_iterator_tag@std@@@std@@YAPAUColorEntry@@PAU1@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp