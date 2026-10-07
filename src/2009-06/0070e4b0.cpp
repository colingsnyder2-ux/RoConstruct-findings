// roc 2009-06 0070e4b0  unit: RBX::Tasks::Barrier  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070e4b0
//
// 0070e4b0  8b542408             mov edx, dword ptr [esp + 8]
// 0070e4b4  85d2                 test edx, edx
// 0070e4b6  7632                 jbe 0x70e4ea
// 0070e4b8  8b442404             mov eax, dword ptr [esp + 4]
// 0070e4bc  56                   push esi
// 0070e4bd  8b742410             mov esi, dword ptr [esp + 0x10]
// 0070e4c1  57                   push edi
// 0070e4c2  85c0                 test eax, eax
// 0070e4c4  741a                 je 0x70e4e0
// 0070e4c6  8b0e                 mov ecx, dword ptr [esi]
// 0070e4c8  8908                 mov dword ptr [eax], ecx
// 0070e4ca  8b4e04               mov ecx, dword ptr [esi + 4]
// 0070e4cd  894804               mov dword ptr [eax + 4], ecx
// 0070e4d0  85c9                 test ecx, ecx
// 0070e4d2  740c                 je 0x70e4e0
// 0070e4d4  83c104               add ecx, 4
// 0070e4d7  bf01000000           mov edi, 1
// 0070e4dc  f00fc139             lock xadd dword ptr [ecx], edi
// 0070e4e0  4a                   dec edx
// 0070e4e1  83c008               add eax, 8
// 0070e4e4  85d2                 test edx, edx
// 0070e4e6  77da                 ja 0x70e4c2
// 0070e4e8  5f                   pop edi
// 0070e4e9  5e                   pop esi
// 0070e4ea  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Uninit_fill_n@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@IV12@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@IABV12@AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
