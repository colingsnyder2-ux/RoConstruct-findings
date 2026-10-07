// roc 2011-06 004f1670  unit: RBX::Network::IdSerializer  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f1670
//
// 004f1670  8b442408             mov eax, dword ptr [esp + 8]
// 004f1674  56                   push esi
// 004f1675  8b742408             mov esi, dword ptr [esp + 8]
// 004f1679  50                   push eax
// 004f167a  56                   push esi
// 004f167b  e880ffffff           call 0x4f1600
// 004f1680  83c408               add esp, 8
// 004f1683  8bc6                 mov eax, esi
// 004f1685  5e                   pop esi
// 004f1686  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?file_size_api@detail@filesystem@boost@@YA?AU?$pair@I_K@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
