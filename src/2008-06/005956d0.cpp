// roc 2008-06 005956d0  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005956d0
//
// 005956d0  56                   push esi
// 005956d1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005956d4  85f6                 test esi, esi
// 005956d6  741d                 je 0x5956f5
// 005956d8  57                   push edi
// 005956d9  8d7e10               lea edi, [esi + 0x10]
// 005956dc  8bcf                 mov ecx, edi
// 005956de  e85dd40e00           call 0x682b40
// 005956e3  8b07                 mov eax, dword ptr [edi]
// 005956e5  50                   push eax
// 005956e6  e88faf1000           call 0x6a067a
// 005956eb  56                   push esi
// 005956ec  e889af1000           call 0x6a067a
// 005956f1  83c408               add esp, 8
// 005956f4  5f                   pop edi
// 005956f5  5e                   pop esi
// 005956f6  c3                   ret 
// library boost-1.34.1/libs\signals\src\connection.cpp (function ?dispose@?$sp_counted_impl_p@Ubasic_connection@detail@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
