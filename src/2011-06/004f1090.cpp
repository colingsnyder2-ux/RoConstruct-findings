// from server: 100% by auto
// roc 2011-06 004f1090  unit: RBX::Network::IdSerializer  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f1090
//
// 004f1090  8b442408             mov eax, dword ptr [esp + 8]
// 004f1094  56                   push esi
// 004f1095  8b742408             mov esi, dword ptr [esp + 8]
// 004f1099  50                   push eax
// 004f109a  56                   push esi
// 004f109b  e800f7ffff           call 0x4f07a0
// 004f10a0  83c408               add esp, 8
// 004f10a3  8bc6                 mov eax, esi
// 004f10a5  5e                   pop esi
// 004f10a6  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?file_size_api@detail@filesystem@boost@@YA?AU?$pair@I_K@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
