// from server: 100% by auto
// roc 2009-06 00410350  unit: boost::Vbad_weak_ptr::?$error_info_injector  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00410350
//
// 00410350  83ec08               sub esp, 8
// 00410353  8b542414             mov edx, dword ptr [esp + 0x14]
// 00410357  53                   push ebx
// 00410358  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0041035c  56                   push esi
// 0041035d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00410361  57                   push edi
// 00410362  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00410366  32c0                 xor al, al
// 00410368  88442410             mov byte ptr [esp + 0x10], al
// 0041036c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00410370  8844240c             mov byte ptr [esp + 0xc], al
// 00410374  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00410378  50                   push eax
// 00410379  51                   push ecx
// 0041037a  52                   push edx
// 0041037b  57                   push edi
// 0041037c  56                   push esi
// 0041037d  53                   push ebx
// 0041037e  e80dfaffff           call 0x40fd90
// 00410383  83c418               add esp, 0x18
// 00410386  2bf3                 sub esi, ebx
// 00410388  c1fe03               sar esi, 3
// 0041038b  8d04f7               lea eax, [edi + esi*8]
// 0041038e  5f                   pop edi
// 0041038f  5e                   pop esi
// 00410390  5b                   pop ebx
// 00410391  83c408               add esp, 8
// 00410394  c3                   ret 
// library templates-boost-1_34_1/vector_sp.cpp (function ??$_Copy_opt@PAV?$shared_ptr@UT@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@UT@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
