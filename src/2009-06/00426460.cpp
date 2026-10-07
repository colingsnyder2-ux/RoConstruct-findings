// roc 2009-06 00426460  unit: boost::any::H::?$holder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00426460
//
// 00426460  83ec08               sub esp, 8
// 00426463  8b542414             mov edx, dword ptr [esp + 0x14]
// 00426467  53                   push ebx
// 00426468  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0042646c  56                   push esi
// 0042646d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00426471  57                   push edi
// 00426472  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00426476  32c0                 xor al, al
// 00426478  88442410             mov byte ptr [esp + 0x10], al
// 0042647c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00426480  8844240c             mov byte ptr [esp + 0xc], al
// 00426484  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00426488  50                   push eax
// 00426489  51                   push ecx
// 0042648a  52                   push edx
// 0042648b  57                   push edi
// 0042648c  56                   push esi
// 0042648d  53                   push ebx
// 0042648e  e86dfaffff           call 0x425f00
// 00426493  2bf3                 sub esi, ebx
// 00426495  c1fe03               sar esi, 3
// 00426498  03f6                 add esi, esi
// 0042649a  83c418               add esp, 0x18
// 0042649d  03f6                 add esi, esi
// 0042649f  03f6                 add esi, esi
// 004264a1  8bc7                 mov eax, edi
// 004264a3  5f                   pop edi
// 004264a4  2bc6                 sub eax, esi
// 004264a6  5e                   pop esi
// 004264a7  5b                   pop ebx
// 004264a8  83c408               add esp, 8
// 004264ab  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
