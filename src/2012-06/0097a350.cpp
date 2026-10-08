// from server: 100% by auto
// roc 2012-06 0097a350  unit: RBX::Limits::VCounter::V?$shared_ptr::?$thread_specific_ptr::delete_data  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0097a350
//
// 0097a350  8b542408             mov edx, dword ptr [esp + 8]
// 0097a354  85d2                 test edx, edx
// 0097a356  7632                 jbe 0x97a38a
// 0097a358  8b442404             mov eax, dword ptr [esp + 4]
// 0097a35c  56                   push esi
// 0097a35d  8b742410             mov esi, dword ptr [esp + 0x10]
// 0097a361  57                   push edi
// 0097a362  85c0                 test eax, eax
// 0097a364  741a                 je 0x97a380
// 0097a366  8b0e                 mov ecx, dword ptr [esi]
// 0097a368  8908                 mov dword ptr [eax], ecx
// 0097a36a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0097a36d  894804               mov dword ptr [eax + 4], ecx
// 0097a370  85c9                 test ecx, ecx
// 0097a372  740c                 je 0x97a380
// 0097a374  83c104               add ecx, 4
// 0097a377  bf01000000           mov edi, 1
// 0097a37c  f00fc139             lock xadd dword ptr [ecx], edi
// 0097a380  4a                   dec edx
// 0097a381  83c008               add eax, 8
// 0097a384  85d2                 test edx, edx
// 0097a386  77da                 ja 0x97a362
// 0097a388  5f                   pop edi
// 0097a389  5e                   pop esi
// 0097a38a  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Uninit_fill_n@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@IV12@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@IABV12@AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
