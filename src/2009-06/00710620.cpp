// from server: 100% by auto
// roc 2009-06 00710620  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00710620
//
// 00710620  8b442404             mov eax, dword ptr [esp + 4]
// 00710624  8b09                 mov ecx, dword ptr [ecx]
// 00710626  50                   push eax
// 00710627  51                   push ecx
// 00710628  e863e7e7ff           call 0x58ed90
// 0071062d  83c408               add esp, 8
// 00710630  c20400               ret 4
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?deflate@zlib_base@detail@iostreams@boost@@IAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
