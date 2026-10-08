// roc 2009-12 00427080  unit: boost::any::H::?$holder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00427080
//
// 00427080  83ec08               sub esp, 8
// 00427083  8b542414             mov edx, dword ptr [esp + 0x14]
// 00427087  53                   push ebx
// 00427088  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0042708c  56                   push esi
// 0042708d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00427091  57                   push edi
// 00427092  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00427096  32c0                 xor al, al
// 00427098  88442410             mov byte ptr [esp + 0x10], al
// 0042709c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004270a0  8844240c             mov byte ptr [esp + 0xc], al
// 004270a4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004270a8  50                   push eax
// 004270a9  51                   push ecx
// 004270aa  52                   push edx
// 004270ab  57                   push edi
// 004270ac  56                   push esi
// 004270ad  53                   push ebx
// 004270ae  e85dfaffff           call 0x426b10
// 004270b3  2bf3                 sub esi, ebx
// 004270b5  c1fe03               sar esi, 3
// 004270b8  03f6                 add esi, esi
// 004270ba  83c418               add esp, 0x18
// 004270bd  03f6                 add esi, esi
// 004270bf  03f6                 add esi, esi
// 004270c1  8bc7                 mov eax, edi
// 004270c3  5f                   pop edi
// 004270c4  2bc6                 sub eax, esi
// 004270c6  5e                   pop esi
// 004270c7  5b                   pop ebx
// 004270c8  83c408               add esp, 8
// 004270cb  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
