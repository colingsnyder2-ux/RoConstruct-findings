// roc 2007-03 00728d70  unit: seg_00720000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00728d70
//
// 00728d70  56                   push esi
// 00728d71  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00728d74  85f6                 test esi, esi
// 00728d76  7411                 je 0x728d89
// 00728d78  8d4e10               lea ecx, [esi + 0x10]
// 00728d7b  e8e006e4ff           call 0x569460
// 00728d80  56                   push esi
// 00728d81  e86a53efff           call 0x61e0f0
// 00728d86  83c404               add esp, 4
// 00728d89  5e                   pop esi
// 00728d8a  c3                   ret 
// library boost-1.34.1/libs\signals\src\connection.cpp (function ?dispose@?$sp_counted_impl_p@Ubasic_connection@detail@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
