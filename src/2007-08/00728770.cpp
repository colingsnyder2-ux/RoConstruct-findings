// roc 2007-08 00728770  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00728770
//
// 00728770  56                   push esi
// 00728771  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00728774  85f6                 test esi, esi
// 00728776  7411                 je 0x728789
// 00728778  8d4e10               lea ecx, [esi + 0x10]
// 0072877b  e800e7ffff           call 0x726e80
// 00728780  56                   push esi
// 00728781  e8dc74f0ff           call 0x62fc62
// 00728786  83c404               add esp, 4
// 00728789  5e                   pop esi
// 0072878a  c3                   ret 
// library boost-1.34.1/libs\signals\src\connection.cpp (function ?dispose@?$sp_counted_impl_p@Ubasic_connection@detail@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
