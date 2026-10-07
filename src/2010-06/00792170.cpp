// roc 2010-06 00792170  unit: RBX::ContactStage  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00792170
//
// 00792170  8b442404             mov eax, dword ptr [esp + 4]
// 00792174  8b09                 mov ecx, dword ptr [ecx]
// 00792176  50                   push eax
// 00792177  51                   push ecx
// 00792178  e89323deff           call 0x574510
// 0079217d  83c408               add esp, 8
// 00792180  c20400               ret 4
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?deflate@zlib_base@detail@iostreams@boost@@IAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
