// roc 2009-06 00710640  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00710640
//
// 00710640  8b442404             mov eax, dword ptr [esp + 4]
// 00710644  8b09                 mov ecx, dword ptr [ecx]
// 00710646  50                   push eax
// 00710647  51                   push ecx
// 00710648  e89305e8ff           call 0x590be0
// 0071064d  83c408               add esp, 8
// 00710650  c20400               ret 4
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?deflate@zlib_base@detail@iostreams@boost@@IAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
