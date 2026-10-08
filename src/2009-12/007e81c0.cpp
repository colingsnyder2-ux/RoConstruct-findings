// roc 2009-12 007e81c0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e81c0
//
// 007e81c0  83ec08               sub esp, 8
// 007e81c3  8b542414             mov edx, dword ptr [esp + 0x14]
// 007e81c7  53                   push ebx
// 007e81c8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007e81cc  56                   push esi
// 007e81cd  8b742418             mov esi, dword ptr [esp + 0x18]
// 007e81d1  57                   push edi
// 007e81d2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007e81d6  32c0                 xor al, al
// 007e81d8  88442410             mov byte ptr [esp + 0x10], al
// 007e81dc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007e81e0  8844240c             mov byte ptr [esp + 0xc], al
// 007e81e4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007e81e8  50                   push eax
// 007e81e9  51                   push ecx
// 007e81ea  52                   push edx
// 007e81eb  57                   push edi
// 007e81ec  56                   push esi
// 007e81ed  53                   push ebx
// 007e81ee  e85d160000           call 0x7e9850
// 007e81f3  2bf3                 sub esi, ebx
// 007e81f5  c1fe03               sar esi, 3
// 007e81f8  03f6                 add esi, esi
// 007e81fa  83c418               add esp, 0x18
// 007e81fd  03f6                 add esi, esi
// 007e81ff  03f6                 add esi, esi
// 007e8201  8bc7                 mov eax, edi
// 007e8203  5f                   pop edi
// 007e8204  2bc6                 sub eax, esi
// 007e8206  5e                   pop esi
// 007e8207  5b                   pop ebx
// 007e8208  83c408               add esp, 8
// 007e820b  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
