// roc 2012-06 0074b620  unit: boost::_bi::H::V?$value::ZV?$list2::XP6AX_KPA_N::V?$bind_t::?$thread_data  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0074b620
//
// 0074b620  51                   push ecx
// 0074b621  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0074b625  56                   push esi
// 0074b626  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0074b62a  50                   push eax
// 0074b62b  56                   push esi
// 0074b62c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0074b634  e807faffff           call 0x74b040
// 0074b639  83c408               add esp, 8
// 0074b63c  8bc6                 mov eax, esi
// 0074b63e  5e                   pop esi
// 0074b63f  59                   pop ecx
// 0074b640  c3                   ret 
// library boost-1.34.1/libs\program_options\src\convert.cpp (function ?to_internal@program_options@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/convert.cpp
