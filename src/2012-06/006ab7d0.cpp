// roc 2012-06 006ab7d0  unit: RBX::GcJob  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006ab7d0
//
// 006ab7d0  56                   push esi
// 006ab7d1  8b742408             mov esi, dword ptr [esp + 8]
// 006ab7d5  85f6                 test esi, esi
// 006ab7d7  7411                 je 0x6ab7ea
// 006ab7d9  8d4e10               lea ecx, [esi + 0x10]
// 006ab7dc  e85fc9ffff           call 0x6a8140
// 006ab7e1  56                   push esi
// 006ab7e2  e82d692d00           call 0x982114
// 006ab7e7  83c404               add esp, 4
// 006ab7ea  5e                   pop esi
// 006ab7eb  c3                   ret 
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??$checked_delete@Ubasic_connection@detail@signals@boost@@@boost@@YAXPAUbasic_connection@detail@signals@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
