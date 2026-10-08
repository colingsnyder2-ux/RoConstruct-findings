// from server: 100% by auto
// roc 2007-08 007286c0  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007286c0
//
// 007286c0  56                   push esi
// 007286c1  8b742408             mov esi, dword ptr [esp + 8]
// 007286c5  85f6                 test esi, esi
// 007286c7  7411                 je 0x7286da
// 007286c9  8d4e10               lea ecx, [esi + 0x10]
// 007286cc  e8afe7ffff           call 0x726e80
// 007286d1  56                   push esi
// 007286d2  e88b75f0ff           call 0x62fc62
// 007286d7  83c404               add esp, 4
// 007286da  5e                   pop esi
// 007286db  c3                   ret 
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??$checked_delete@Ubasic_connection@detail@signals@boost@@@boost@@YAXPAUbasic_connection@detail@signals@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
