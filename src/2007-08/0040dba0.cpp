// roc 2007-08 0040dba0  unit: CChatPrompt  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040dba0
//
// 0040dba0  8b542408             mov edx, dword ptr [esp + 8]
// 0040dba4  85d2                 test edx, edx
// 0040dba6  7634                 jbe 0x40dbdc
// 0040dba8  8b442404             mov eax, dword ptr [esp + 4]
// 0040dbac  56                   push esi
// 0040dbad  8b742410             mov esi, dword ptr [esp + 0x10]
// 0040dbb1  57                   push edi
// 0040dbb2  85c0                 test eax, eax
// 0040dbb4  741a                 je 0x40dbd0
// 0040dbb6  8b0e                 mov ecx, dword ptr [esi]
// 0040dbb8  8908                 mov dword ptr [eax], ecx
// 0040dbba  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040dbbd  85c9                 test ecx, ecx
// 0040dbbf  894804               mov dword ptr [eax + 4], ecx
// 0040dbc2  740c                 je 0x40dbd0
// 0040dbc4  83c104               add ecx, 4
// 0040dbc7  bf01000000           mov edi, 1
// 0040dbcc  f00fc139             lock xadd dword ptr [ecx], edi
// 0040dbd0  83ea01               sub edx, 1
// 0040dbd3  83c008               add eax, 8
// 0040dbd6  85d2                 test edx, edx
// 0040dbd8  77d8                 ja 0x40dbb2
// 0040dbda  5f                   pop edi
// 0040dbdb  5e                   pop esi
// 0040dbdc  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Uninit_fill_n@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@IV12@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@IABV12@AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
