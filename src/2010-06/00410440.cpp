// from server: 100% by auto
// roc 2010-06 00410440  unit: boost::Vbad_weak_ptr::?$error_info_injector  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00410440
//
// 00410440  83ec08               sub esp, 8
// 00410443  8b542414             mov edx, dword ptr [esp + 0x14]
// 00410447  53                   push ebx
// 00410448  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0041044c  56                   push esi
// 0041044d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00410451  57                   push edi
// 00410452  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00410456  32c0                 xor al, al
// 00410458  88442410             mov byte ptr [esp + 0x10], al
// 0041045c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00410460  8844240c             mov byte ptr [esp + 0xc], al
// 00410464  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00410468  50                   push eax
// 00410469  51                   push ecx
// 0041046a  52                   push edx
// 0041046b  57                   push edi
// 0041046c  56                   push esi
// 0041046d  53                   push ebx
// 0041046e  e87da02900           call 0x6aa4f0
// 00410473  83c418               add esp, 0x18
// 00410476  2bf3                 sub esi, ebx
// 00410478  c1fe03               sar esi, 3
// 0041047b  8d04f7               lea eax, [edi + esi*8]
// 0041047e  5f                   pop edi
// 0041047f  5e                   pop esi
// 00410480  5b                   pop ebx
// 00410481  83c408               add esp, 8
// 00410484  c3                   ret 
// library templates-boost-1_34_1/vector_sp.cpp (function ??$_Copy_opt@PAV?$shared_ptr@UT@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@UT@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
