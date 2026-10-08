// roc 2007-03 00728cc0  unit: seg_00720000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00728cc0
//
// 00728cc0  56                   push esi
// 00728cc1  8b742408             mov esi, dword ptr [esp + 8]
// 00728cc5  85f6                 test esi, esi
// 00728cc7  7411                 je 0x728cda
// 00728cc9  8d4e10               lea ecx, [esi + 0x10]
// 00728ccc  e88f07e4ff           call 0x569460
// 00728cd1  56                   push esi
// 00728cd2  e81954efff           call 0x61e0f0
// 00728cd7  83c404               add esp, 4
// 00728cda  5e                   pop esi
// 00728cdb  c3                   ret 
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??$checked_delete@Ubasic_connection@detail@signals@boost@@@boost@@YAXPAUbasic_connection@detail@signals@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
