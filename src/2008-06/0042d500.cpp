// roc 2008-06 0042d500  unit: boost::any::H::?$holder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042d500
//
// 0042d500  83ec08               sub esp, 8
// 0042d503  8b542414             mov edx, dword ptr [esp + 0x14]
// 0042d507  53                   push ebx
// 0042d508  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0042d50c  56                   push esi
// 0042d50d  8b742418             mov esi, dword ptr [esp + 0x18]
// 0042d511  57                   push edi
// 0042d512  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0042d516  32c0                 xor al, al
// 0042d518  88442410             mov byte ptr [esp + 0x10], al
// 0042d51c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042d520  8844240c             mov byte ptr [esp + 0xc], al
// 0042d524  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042d528  50                   push eax
// 0042d529  51                   push ecx
// 0042d52a  52                   push edx
// 0042d52b  57                   push edi
// 0042d52c  56                   push esi
// 0042d52d  53                   push ebx
// 0042d52e  e85dfcffff           call 0x42d190
// 0042d533  2bf3                 sub esi, ebx
// 0042d535  c1fe03               sar esi, 3
// 0042d538  03f6                 add esi, esi
// 0042d53a  83c418               add esp, 0x18
// 0042d53d  03f6                 add esi, esi
// 0042d53f  03f6                 add esi, esi
// 0042d541  8bc7                 mov eax, edi
// 0042d543  5f                   pop edi
// 0042d544  2bc6                 sub eax, esi
// 0042d546  5e                   pop esi
// 0042d547  5b                   pop ebx
// 0042d548  83c408               add esp, 8
// 0042d54b  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
