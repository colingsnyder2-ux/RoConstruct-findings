// from server: 100% by auto
// roc 2009-06 006d5f40  unit: RBX::Mechanism  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d5f40
//
// 006d5f40  83ec08               sub esp, 8
// 006d5f43  8b542414             mov edx, dword ptr [esp + 0x14]
// 006d5f47  53                   push ebx
// 006d5f48  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006d5f4c  56                   push esi
// 006d5f4d  8b742418             mov esi, dword ptr [esp + 0x18]
// 006d5f51  57                   push edi
// 006d5f52  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006d5f56  32c0                 xor al, al
// 006d5f58  88442410             mov byte ptr [esp + 0x10], al
// 006d5f5c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d5f60  8844240c             mov byte ptr [esp + 0xc], al
// 006d5f64  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d5f68  50                   push eax
// 006d5f69  51                   push ecx
// 006d5f6a  52                   push edx
// 006d5f6b  57                   push edi
// 006d5f6c  56                   push esi
// 006d5f6d  53                   push ebx
// 006d5f6e  e80dfeffff           call 0x6d5d80
// 006d5f73  2bf3                 sub esi, ebx
// 006d5f75  b893244992           mov eax, 0x92492493
// 006d5f7a  f7ee                 imul esi
// 006d5f7c  03d6                 add edx, esi
// 006d5f7e  c1fa04               sar edx, 4
// 006d5f81  8bc2                 mov eax, edx
// 006d5f83  c1e81f               shr eax, 0x1f
// 006d5f86  03c2                 add eax, edx
// 006d5f88  83c418               add esp, 0x18
// 006d5f8b  8d0cc500000000       lea ecx, [eax*8]
// 006d5f92  2bc8                 sub ecx, eax
// 006d5f94  8d048f               lea eax, [edi + ecx*4]
// 006d5f97  5f                   pop edi
// 006d5f98  5e                   pop esi
// 006d5f99  5b                   pop ebx
// 006d5f9a  83c408               add esp, 8
// 006d5f9d  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Copy_opt@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV12@@std@@YAPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAV10@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
