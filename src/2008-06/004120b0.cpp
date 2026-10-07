// roc 2008-06 004120b0  unit: CChatPrompt  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004120b0
//
// 004120b0  83ec08               sub esp, 8
// 004120b3  8b542414             mov edx, dword ptr [esp + 0x14]
// 004120b7  53                   push ebx
// 004120b8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004120bc  56                   push esi
// 004120bd  8b742418             mov esi, dword ptr [esp + 0x18]
// 004120c1  57                   push edi
// 004120c2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004120c6  32c0                 xor al, al
// 004120c8  88442410             mov byte ptr [esp + 0x10], al
// 004120cc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004120d0  8844240c             mov byte ptr [esp + 0xc], al
// 004120d4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004120d8  50                   push eax
// 004120d9  51                   push ecx
// 004120da  52                   push edx
// 004120db  57                   push edi
// 004120dc  56                   push esi
// 004120dd  53                   push ebx
// 004120de  e86df9ffff           call 0x411a50
// 004120e3  2bf3                 sub esi, ebx
// 004120e5  c1fe03               sar esi, 3
// 004120e8  03f6                 add esi, esi
// 004120ea  83c418               add esp, 0x18
// 004120ed  03f6                 add esi, esi
// 004120ef  03f6                 add esi, esi
// 004120f1  8bc7                 mov eax, edi
// 004120f3  5f                   pop edi
// 004120f4  2bc6                 sub eax, esi
// 004120f6  5e                   pop esi
// 004120f7  5b                   pop ebx
// 004120f8  83c408               add esp, 8
// 004120fb  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
