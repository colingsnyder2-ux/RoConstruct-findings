// from server: 100% by auto
// roc 2012-06 0056c7f0  unit: RBX::Network::IdSerializer  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056c7f0
//
// 0056c7f0  8b442408             mov eax, dword ptr [esp + 8]
// 0056c7f4  56                   push esi
// 0056c7f5  8b742408             mov esi, dword ptr [esp + 8]
// 0056c7f9  50                   push eax
// 0056c7fa  56                   push esi
// 0056c7fb  e850feffff           call 0x56c650
// 0056c800  83c408               add esp, 8
// 0056c803  8bc6                 mov eax, esi
// 0056c805  5e                   pop esi
// 0056c806  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?file_size_api@detail@filesystem@boost@@YA?AU?$pair@I_K@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
