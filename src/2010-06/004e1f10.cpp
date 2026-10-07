// roc 2010-06 004e1f10  unit: G3D::Ray  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e1f10
//
// 004e1f10  8b442408             mov eax, dword ptr [esp + 8]
// 004e1f14  56                   push esi
// 004e1f15  8b742408             mov esi, dword ptr [esp + 8]
// 004e1f19  50                   push eax
// 004e1f1a  56                   push esi
// 004e1f1b  e830f1ffff           call 0x4e1050
// 004e1f20  83c408               add esp, 8
// 004e1f23  8bc6                 mov eax, esi
// 004e1f25  5e                   pop esi
// 004e1f26  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?file_size_api@detail@filesystem@boost@@YA?AU?$pair@I_K@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
