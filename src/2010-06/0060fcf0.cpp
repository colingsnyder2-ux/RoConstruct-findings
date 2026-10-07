// roc 2010-06 0060fcf0  unit: RBX::Lua::VLiveThreadRef::?$sp_counted_impl_p  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060fcf0
//
// 0060fcf0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060fcf4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0060fcf8  56                   push esi
// 0060fcf9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0060fcfd  3bce                 cmp ecx, esi
// 0060fcff  742a                 je 0x60fd2b
// 0060fd01  57                   push edi
// 0060fd02  85c0                 test eax, eax
// 0060fd04  741a                 je 0x60fd20
// 0060fd06  8b11                 mov edx, dword ptr [ecx]
// 0060fd08  8910                 mov dword ptr [eax], edx
// 0060fd0a  8b5104               mov edx, dword ptr [ecx + 4]
// 0060fd0d  895004               mov dword ptr [eax + 4], edx
// 0060fd10  85d2                 test edx, edx
// 0060fd12  740c                 je 0x60fd20
// 0060fd14  83c204               add edx, 4
// 0060fd17  bf01000000           mov edi, 1
// 0060fd1c  f00fc13a             lock xadd dword ptr [edx], edi
// 0060fd20  83c108               add ecx, 8
// 0060fd23  83c008               add eax, 8
// 0060fd26  3bce                 cmp ecx, esi
// 0060fd28  75d8                 jne 0x60fd02
// 0060fd2a  5f                   pop edi
// 0060fd2b  5e                   pop esi
// 0060fd2c  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Uninit_copy@PBV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PBV12@0PAV12@AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
