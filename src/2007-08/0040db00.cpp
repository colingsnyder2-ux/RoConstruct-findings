// roc 2007-08 0040db00  unit: ChatEnter  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040db00
//
// 0040db00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040db04  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040db08  56                   push esi
// 0040db09  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0040db0d  3bce                 cmp ecx, esi
// 0040db0f  742a                 je 0x40db3b
// 0040db11  57                   push edi
// 0040db12  85c0                 test eax, eax
// 0040db14  741a                 je 0x40db30
// 0040db16  8b11                 mov edx, dword ptr [ecx]
// 0040db18  8910                 mov dword ptr [eax], edx
// 0040db1a  8b5104               mov edx, dword ptr [ecx + 4]
// 0040db1d  85d2                 test edx, edx
// 0040db1f  895004               mov dword ptr [eax + 4], edx
// 0040db22  740c                 je 0x40db30
// 0040db24  83c204               add edx, 4
// 0040db27  bf01000000           mov edi, 1
// 0040db2c  f00fc13a             lock xadd dword ptr [edx], edi
// 0040db30  83c108               add ecx, 8
// 0040db33  83c008               add eax, 8
// 0040db36  3bce                 cmp ecx, esi
// 0040db38  75d8                 jne 0x40db12
// 0040db3a  5f                   pop edi
// 0040db3b  5e                   pop esi
// 0040db3c  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Uninit_copy@PBV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PBV12@0PAV12@AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
