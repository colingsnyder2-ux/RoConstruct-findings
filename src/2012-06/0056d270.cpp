// roc 2012-06 0056d270  unit: RBX::Network::IdSerializer  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056d270
//
// 0056d270  8b442408             mov eax, dword ptr [esp + 8]
// 0056d274  56                   push esi
// 0056d275  8b742408             mov esi, dword ptr [esp + 8]
// 0056d279  50                   push eax
// 0056d27a  56                   push esi
// 0056d27b  e870f0ffff           call 0x56c2f0
// 0056d280  83c408               add esp, 8
// 0056d283  8bc6                 mov eax, esi
// 0056d285  5e                   pop esi
// 0056d286  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?file_size_api@detail@filesystem@boost@@YA?AU?$pair@I_K@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
