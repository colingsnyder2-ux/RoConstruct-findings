// roc 2009-12 00697e30  unit: RBX::ArrowTool  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00697e30
//
// 00697e30  8b542408             mov edx, dword ptr [esp + 8]
// 00697e34  85d2                 test edx, edx
// 00697e36  7632                 jbe 0x697e6a
// 00697e38  8b442404             mov eax, dword ptr [esp + 4]
// 00697e3c  56                   push esi
// 00697e3d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00697e41  57                   push edi
// 00697e42  85c0                 test eax, eax
// 00697e44  741a                 je 0x697e60
// 00697e46  8b0e                 mov ecx, dword ptr [esi]
// 00697e48  8908                 mov dword ptr [eax], ecx
// 00697e4a  8b4e04               mov ecx, dword ptr [esi + 4]
// 00697e4d  894804               mov dword ptr [eax + 4], ecx
// 00697e50  85c9                 test ecx, ecx
// 00697e52  740c                 je 0x697e60
// 00697e54  83c104               add ecx, 4
// 00697e57  bf01000000           mov edi, 1
// 00697e5c  f00fc139             lock xadd dword ptr [ecx], edi
// 00697e60  4a                   dec edx
// 00697e61  83c008               add eax, 8
// 00697e64  85d2                 test edx, edx
// 00697e66  77da                 ja 0x697e42
// 00697e68  5f                   pop edi
// 00697e69  5e                   pop esi
// 00697e6a  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Uninit_fill_n@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@IV12@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@IABV12@AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
