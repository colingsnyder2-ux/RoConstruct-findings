// roc 2009-12 00533bf0  unit: G3D::Ray  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00533bf0
//
// 00533bf0  8b442408             mov eax, dword ptr [esp + 8]
// 00533bf4  56                   push esi
// 00533bf5  8b742408             mov esi, dword ptr [esp + 8]
// 00533bf9  50                   push eax
// 00533bfa  56                   push esi
// 00533bfb  e800f1ffff           call 0x532d00
// 00533c00  83c408               add esp, 8
// 00533c03  8bc6                 mov eax, esi
// 00533c05  5e                   pop esi
// 00533c06  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?file_size_api@detail@filesystem@boost@@YA?AU?$pair@I_K@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
