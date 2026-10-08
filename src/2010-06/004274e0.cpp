// from server: 100% by auto
// roc 2010-06 004274e0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004274e0
//
// 004274e0  83ec08               sub esp, 8
// 004274e3  8b542414             mov edx, dword ptr [esp + 0x14]
// 004274e7  53                   push ebx
// 004274e8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004274ec  56                   push esi
// 004274ed  8b742418             mov esi, dword ptr [esp + 0x18]
// 004274f1  57                   push edi
// 004274f2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004274f6  32c0                 xor al, al
// 004274f8  88442410             mov byte ptr [esp + 0x10], al
// 004274fc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00427500  8844240c             mov byte ptr [esp + 0xc], al
// 00427504  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00427508  50                   push eax
// 00427509  51                   push ecx
// 0042750a  52                   push edx
// 0042750b  57                   push edi
// 0042750c  56                   push esi
// 0042750d  53                   push ebx
// 0042750e  e85dfaffff           call 0x426f70
// 00427513  2bf3                 sub esi, ebx
// 00427515  c1fe03               sar esi, 3
// 00427518  03f6                 add esi, esi
// 0042751a  83c418               add esp, 0x18
// 0042751d  03f6                 add esi, esi
// 0042751f  03f6                 add esi, esi
// 00427521  8bc7                 mov eax, edi
// 00427523  5f                   pop edi
// 00427524  2bc6                 sub eax, esi
// 00427526  5e                   pop esi
// 00427527  5b                   pop ebx
// 00427528  83c408               add esp, 8
// 0042752b  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
