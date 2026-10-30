// from server: 100% by auto
// roc 2007-08 0040dab0  unit: ChatEnter  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040dab0
//
// 0040dab0  83ec08               sub esp, 8
// 0040dab3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0040dab7  53                   push ebx
// 0040dab8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0040dabc  56                   push esi
// 0040dabd  8b742418             mov esi, dword ptr [esp + 0x18]
// 0040dac1  57                   push edi
// 0040dac2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0040dac6  32c0                 xor al, al
// 0040dac8  88442410             mov byte ptr [esp + 0x10], al
// 0040dacc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040dad0  8844240c             mov byte ptr [esp + 0xc], al
// 0040dad4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040dad8  50                   push eax
// 0040dad9  51                   push ecx
// 0040dada  52                   push edx
// 0040dadb  57                   push edi
// 0040dadc  56                   push esi
// 0040dadd  53                   push ebx
// 0040dade  e86df9ffff           call 0x40d450
// 0040dae3  83c418               add esp, 0x18
// 0040dae6  2bf3                 sub esi, ebx
// 0040dae8  c1fe03               sar esi, 3
// 0040daeb  8d04f7               lea eax, [edi + esi*8]
// 0040daee  5f                   pop edi
// 0040daef  5e                   pop esi
// 0040daf0  5b                   pop ebx
// 0040daf1  83c408               add esp, 8
// 0040daf4  c3                   ret 
// library templates-boost-1_34_1/vector_sp.cpp (function ??$_Copy_opt@PAV?$shared_ptr@UT@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@UT@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
