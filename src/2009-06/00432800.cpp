// from server: 100% by auto
// roc 2009-06 00432800  unit: IIHAAH::?$CMap  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00432800
//
// 00432800  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00432804  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00432808  56                   push esi
// 00432809  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0043280d  3bce                 cmp ecx, esi
// 0043280f  742a                 je 0x43283b
// 00432811  57                   push edi
// 00432812  85c0                 test eax, eax
// 00432814  741a                 je 0x432830
// 00432816  8b11                 mov edx, dword ptr [ecx]
// 00432818  8910                 mov dword ptr [eax], edx
// 0043281a  8b5104               mov edx, dword ptr [ecx + 4]
// 0043281d  895004               mov dword ptr [eax + 4], edx
// 00432820  85d2                 test edx, edx
// 00432822  740c                 je 0x432830
// 00432824  83c204               add edx, 4
// 00432827  bf01000000           mov edi, 1
// 0043282c  f00fc13a             lock xadd dword ptr [edx], edi
// 00432830  83c108               add ecx, 8
// 00432833  83c008               add eax, 8
// 00432836  3bce                 cmp ecx, esi
// 00432838  75d8                 jne 0x432812
// 0043283a  5f                   pop edi
// 0043283b  5e                   pop esi
// 0043283c  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Uninit_copy@PBV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PBV12@0PAV12@AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
