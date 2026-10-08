// from server: 100% by auto
// roc 2009-06 00710660  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00710660
//
// 00710660  807c240800           cmp byte ptr [esp + 8], 0
// 00710665  8b09                 mov ecx, dword ptr [ecx]
// 00710667  51                   push ecx
// 00710668  741d                 je 0x710687
// 0071066a  807c240800           cmp byte ptr [esp + 8], 0
// 0071066f  740b                 je 0x71067c
// 00710671  e87afde7ff           call 0x5903f0
// 00710676  83c404               add esp, 4
// 00710679  c20800               ret 8
// 0071067c  e81f03e8ff           call 0x5909a0
// 00710681  83c404               add esp, 4
// 00710684  c20800               ret 8
// 00710687  807c240800           cmp byte ptr [esp + 8], 0
// 0071068c  740b                 je 0x710699
// 0071068e  e8ddeee7ff           call 0x58f570
// 00710693  83c404               add esp, 4
// 00710696  c20800               ret 8
// 00710699  e8521ae8ff           call 0x5920f0
// 0071069e  59                   pop ecx
// 0071069f  c20800               ret 8
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?reset@zlib_base@detail@iostreams@boost@@IAEX_N0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
