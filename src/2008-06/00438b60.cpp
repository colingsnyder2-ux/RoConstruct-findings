// roc 2008-06 00438b60  unit: IIHAAH::?$CMap  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00438b60
//
// 00438b60  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00438b64  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00438b68  56                   push esi
// 00438b69  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00438b6d  3bce                 cmp ecx, esi
// 00438b6f  742a                 je 0x438b9b
// 00438b71  57                   push edi
// 00438b72  85c0                 test eax, eax
// 00438b74  741a                 je 0x438b90
// 00438b76  8b11                 mov edx, dword ptr [ecx]
// 00438b78  8910                 mov dword ptr [eax], edx
// 00438b7a  8b5104               mov edx, dword ptr [ecx + 4]
// 00438b7d  895004               mov dword ptr [eax + 4], edx
// 00438b80  85d2                 test edx, edx
// 00438b82  740c                 je 0x438b90
// 00438b84  83c204               add edx, 4
// 00438b87  bf01000000           mov edi, 1
// 00438b8c  f00fc13a             lock xadd dword ptr [edx], edi
// 00438b90  83c108               add ecx, 8
// 00438b93  83c008               add eax, 8
// 00438b96  3bce                 cmp ecx, esi
// 00438b98  75d8                 jne 0x438b72
// 00438b9a  5f                   pop edi
// 00438b9b  5e                   pop esi
// 00438b9c  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Uninit_copy@PBV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PBV12@0PAV12@AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
