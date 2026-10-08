// roc 2009-12 007bbf30  unit: RBX::SpatialFilter  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007bbf30
//
// 007bbf30  83ec08               sub esp, 8
// 007bbf33  8b542414             mov edx, dword ptr [esp + 0x14]
// 007bbf37  53                   push ebx
// 007bbf38  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007bbf3c  56                   push esi
// 007bbf3d  8b742418             mov esi, dword ptr [esp + 0x18]
// 007bbf41  57                   push edi
// 007bbf42  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007bbf46  32c0                 xor al, al
// 007bbf48  88442410             mov byte ptr [esp + 0x10], al
// 007bbf4c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007bbf50  8844240c             mov byte ptr [esp + 0xc], al
// 007bbf54  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007bbf58  50                   push eax
// 007bbf59  51                   push ecx
// 007bbf5a  52                   push edx
// 007bbf5b  57                   push edi
// 007bbf5c  56                   push esi
// 007bbf5d  53                   push ebx
// 007bbf5e  e87df5f0ff           call 0x6cb4e0
// 007bbf63  2bf3                 sub esi, ebx
// 007bbf65  c1fe03               sar esi, 3
// 007bbf68  03f6                 add esi, esi
// 007bbf6a  83c418               add esp, 0x18
// 007bbf6d  03f6                 add esi, esi
// 007bbf6f  03f6                 add esi, esi
// 007bbf71  8bc7                 mov eax, edi
// 007bbf73  5f                   pop edi
// 007bbf74  2bc6                 sub eax, esi
// 007bbf76  5e                   pop esi
// 007bbf77  5b                   pop ebx
// 007bbf78  83c408               add esp, 8
// 007bbf7b  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
