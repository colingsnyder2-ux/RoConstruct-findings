// from server: 100% by auto
// roc 2011-06 007ffcf0  unit: RBX::Limits::VCounter::V?$shared_ptr::?$thread_specific_ptr::delete_data  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ffcf0
//
// 007ffcf0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007ffcf4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007ffcf8  56                   push esi
// 007ffcf9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007ffcfd  3bce                 cmp ecx, esi
// 007ffcff  742a                 je 0x7ffd2b
// 007ffd01  57                   push edi
// 007ffd02  85c0                 test eax, eax
// 007ffd04  741a                 je 0x7ffd20
// 007ffd06  8b11                 mov edx, dword ptr [ecx]
// 007ffd08  8910                 mov dword ptr [eax], edx
// 007ffd0a  8b5104               mov edx, dword ptr [ecx + 4]
// 007ffd0d  895004               mov dword ptr [eax + 4], edx
// 007ffd10  85d2                 test edx, edx
// 007ffd12  740c                 je 0x7ffd20
// 007ffd14  83c204               add edx, 4
// 007ffd17  bf01000000           mov edi, 1
// 007ffd1c  f00fc13a             lock xadd dword ptr [edx], edi
// 007ffd20  83c108               add ecx, 8
// 007ffd23  83c008               add eax, 8
// 007ffd26  3bce                 cmp ecx, esi
// 007ffd28  75d8                 jne 0x7ffd02
// 007ffd2a  5f                   pop edi
// 007ffd2b  5e                   pop esi
// 007ffd2c  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Uninit_copy@PBV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PBV12@0PAV12@AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
