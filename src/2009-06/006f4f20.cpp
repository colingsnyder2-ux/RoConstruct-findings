// from server: 100% by auto
// roc 2009-06 006f4f20  unit: RBX::HUMAN::GettingUp  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f4f20
//
// 006f4f20  8b442404             mov eax, dword ptr [esp + 4]
// 006f4f24  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f4f28  8908                 mov dword ptr [eax], ecx
// 006f4f2a  c3                   ret 
// library boost-1.34.1/libs\program_options\src\parsers.cpp (function ??$back_inserter@V?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@@std@@YA?AV?$back_insert_iterator@V?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@@0@AAV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/parsers.cpp
