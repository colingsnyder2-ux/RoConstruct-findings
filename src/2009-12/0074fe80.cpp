// roc 2009-12 0074fe80  unit: RBX::LocalBackpackTool  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0074fe80
//
// 0074fe80  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0074fe84  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0074fe88  56                   push esi
// 0074fe89  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0074fe8d  3bce                 cmp ecx, esi
// 0074fe8f  742a                 je 0x74febb
// 0074fe91  57                   push edi
// 0074fe92  85c0                 test eax, eax
// 0074fe94  741a                 je 0x74feb0
// 0074fe96  8b11                 mov edx, dword ptr [ecx]
// 0074fe98  8910                 mov dword ptr [eax], edx
// 0074fe9a  8b5104               mov edx, dword ptr [ecx + 4]
// 0074fe9d  895004               mov dword ptr [eax + 4], edx
// 0074fea0  85d2                 test edx, edx
// 0074fea2  740c                 je 0x74feb0
// 0074fea4  83c204               add edx, 4
// 0074fea7  bf01000000           mov edi, 1
// 0074feac  f00fc13a             lock xadd dword ptr [edx], edi
// 0074feb0  83c108               add ecx, 8
// 0074feb3  83c008               add eax, 8
// 0074feb6  3bce                 cmp ecx, esi
// 0074feb8  75d8                 jne 0x74fe92
// 0074feba  5f                   pop edi
// 0074febb  5e                   pop esi
// 0074febc  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Uninit_copy@PBV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PBV12@0PAV12@AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
