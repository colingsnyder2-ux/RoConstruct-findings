// roc 2010-06 004e14e0  unit: G3D::Ray  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e14e0
//
// 004e14e0  8b442408             mov eax, dword ptr [esp + 8]
// 004e14e4  56                   push esi
// 004e14e5  8b742408             mov esi, dword ptr [esp + 8]
// 004e14e9  50                   push eax
// 004e14ea  56                   push esi
// 004e14eb  e890feffff           call 0x4e1380
// 004e14f0  83c408               add esp, 8
// 004e14f3  8bc6                 mov eax, esi
// 004e14f5  5e                   pop esi
// 004e14f6  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?file_size_api@detail@filesystem@boost@@YA?AU?$pair@I_K@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
