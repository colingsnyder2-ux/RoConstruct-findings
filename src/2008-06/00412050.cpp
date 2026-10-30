// from server: 100% by auto
// roc 2008-06 00412050  unit: ChatEnter  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00412050
//
// 00412050  83ec08               sub esp, 8
// 00412053  8b542414             mov edx, dword ptr [esp + 0x14]
// 00412057  53                   push ebx
// 00412058  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0041205c  56                   push esi
// 0041205d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00412061  57                   push edi
// 00412062  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00412066  32c0                 xor al, al
// 00412068  88442410             mov byte ptr [esp + 0x10], al
// 0041206c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00412070  8844240c             mov byte ptr [esp + 0xc], al
// 00412074  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00412078  50                   push eax
// 00412079  51                   push ecx
// 0041207a  52                   push edx
// 0041207b  57                   push edi
// 0041207c  56                   push esi
// 0041207d  53                   push ebx
// 0041207e  e84df9ffff           call 0x4119d0
// 00412083  83c418               add esp, 0x18
// 00412086  2bf3                 sub esi, ebx
// 00412088  c1fe03               sar esi, 3
// 0041208b  8d04f7               lea eax, [edi + esi*8]
// 0041208e  5f                   pop edi
// 0041208f  5e                   pop esi
// 00412090  5b                   pop ebx
// 00412091  83c408               add esp, 8
// 00412094  c3                   ret 
// library templates-boost-1_34_1/vector_sp.cpp (function ??$_Copy_opt@PAV?$shared_ptr@UT@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@UT@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
