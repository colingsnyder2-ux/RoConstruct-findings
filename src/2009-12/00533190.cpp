// roc 2009-12 00533190  unit: G3D::Ray  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00533190
//
// 00533190  8b442408             mov eax, dword ptr [esp + 8]
// 00533194  56                   push esi
// 00533195  8b742408             mov esi, dword ptr [esp + 8]
// 00533199  50                   push eax
// 0053319a  56                   push esi
// 0053319b  e890feffff           call 0x533030
// 005331a0  83c408               add esp, 8
// 005331a3  8bc6                 mov eax, esi
// 005331a5  5e                   pop esi
// 005331a6  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?file_size_api@detail@filesystem@boost@@YA?AU?$pair@I_K@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
