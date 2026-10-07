// roc 2008-06 0056bd60  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056bd60
//
// 0056bd60  56                   push esi
// 0056bd61  8b7104               mov esi, dword ptr [ecx + 4]
// 0056bd64  c7410400000000       mov dword ptr [ecx + 4], 0
// 0056bd6b  85f6                 test esi, esi
// 0056bd6d  7410                 je 0x56bd7f
// 0056bd6f  8bce                 mov ecx, esi
// 0056bd71  e82a59f4ff           call 0x4b16a0
// 0056bd76  56                   push esi
// 0056bd77  e8fe481300           call 0x6a067a
// 0056bd7c  83c404               add esp, 4
// 0056bd7f  5e                   pop esi
// 0056bd80  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?disconnect_all_slots@SignalSource@Reflection@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
