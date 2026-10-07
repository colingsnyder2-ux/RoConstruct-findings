// roc 2008-06 0056bd40  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056bd40
//
// 0056bd40  56                   push esi
// 0056bd41  8b7104               mov esi, dword ptr [ecx + 4]
// 0056bd44  85f6                 test esi, esi
// 0056bd46  7410                 je 0x56bd58
// 0056bd48  8bce                 mov ecx, esi
// 0056bd4a  e85159f4ff           call 0x4b16a0
// 0056bd4f  56                   push esi
// 0056bd50  e825491300           call 0x6a067a
// 0056bd55  83c404               add esp, 4
// 0056bd58  5e                   pop esi
// 0056bd59  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??1SignalSource@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
