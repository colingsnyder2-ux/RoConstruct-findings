// from server: 100% by auto
// roc 2008-06 00412100  unit: CChatPrompt  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00412100
//
// 00412100  8b542408             mov edx, dword ptr [esp + 8]
// 00412104  85d2                 test edx, edx
// 00412106  7632                 jbe 0x41213a
// 00412108  8b442404             mov eax, dword ptr [esp + 4]
// 0041210c  56                   push esi
// 0041210d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00412111  57                   push edi
// 00412112  85c0                 test eax, eax
// 00412114  741a                 je 0x412130
// 00412116  8b0e                 mov ecx, dword ptr [esi]
// 00412118  8908                 mov dword ptr [eax], ecx
// 0041211a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0041211d  894804               mov dword ptr [eax + 4], ecx
// 00412120  85c9                 test ecx, ecx
// 00412122  740c                 je 0x412130
// 00412124  83c104               add ecx, 4
// 00412127  bf01000000           mov edi, 1
// 0041212c  f00fc139             lock xadd dword ptr [ecx], edi
// 00412130  4a                   dec edx
// 00412131  83c008               add eax, 8
// 00412134  85d2                 test edx, edx
// 00412136  77da                 ja 0x412112
// 00412138  5f                   pop edi
// 00412139  5e                   pop esi
// 0041213a  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Uninit_fill_n@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@IV12@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@IABV12@AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
