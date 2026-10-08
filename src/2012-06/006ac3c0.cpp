// from server: 100% by auto
// roc 2012-06 006ac3c0  unit: std::D::DU?$char_traits::V?$basic_string::V?$unordered_map::?$sp_counted_impl_p  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006ac3c0
//
// 006ac3c0  56                   push esi
// 006ac3c1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006ac3c4  85f6                 test esi, esi
// 006ac3c6  7411                 je 0x6ac3d9
// 006ac3c8  8d4e10               lea ecx, [esi + 0x10]
// 006ac3cb  e870bdffff           call 0x6a8140
// 006ac3d0  56                   push esi
// 006ac3d1  e83e5d2d00           call 0x982114
// 006ac3d6  83c404               add esp, 4
// 006ac3d9  5e                   pop esi
// 006ac3da  c3                   ret 
// library boost-1.34.1/libs\signals\src\connection.cpp (function ?dispose@?$sp_counted_impl_p@Ubasic_connection@detail@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
