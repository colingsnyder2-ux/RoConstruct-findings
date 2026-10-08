// from server: 100% by auto
// roc 2010-06 0079e020  unit: RBX::Tasks::Barrier  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0079e020
//
// 0079e020  8b542408             mov edx, dword ptr [esp + 8]
// 0079e024  85d2                 test edx, edx
// 0079e026  7632                 jbe 0x79e05a
// 0079e028  8b442404             mov eax, dword ptr [esp + 4]
// 0079e02c  56                   push esi
// 0079e02d  8b742410             mov esi, dword ptr [esp + 0x10]
// 0079e031  57                   push edi
// 0079e032  85c0                 test eax, eax
// 0079e034  741a                 je 0x79e050
// 0079e036  8b0e                 mov ecx, dword ptr [esi]
// 0079e038  8908                 mov dword ptr [eax], ecx
// 0079e03a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0079e03d  894804               mov dword ptr [eax + 4], ecx
// 0079e040  85c9                 test ecx, ecx
// 0079e042  740c                 je 0x79e050
// 0079e044  83c104               add ecx, 4
// 0079e047  bf01000000           mov edi, 1
// 0079e04c  f00fc139             lock xadd dword ptr [ecx], edi
// 0079e050  4a                   dec edx
// 0079e051  83c008               add eax, 8
// 0079e054  85d2                 test edx, edx
// 0079e056  77da                 ja 0x79e032
// 0079e058  5f                   pop edi
// 0079e059  5e                   pop esi
// 0079e05a  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Uninit_fill_n@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@IV12@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@IABV12@AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
