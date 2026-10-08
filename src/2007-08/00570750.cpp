// roc 2007-08 00570750  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570750
//
// 00570750  83ec08               sub esp, 8
// 00570753  56                   push esi
// 00570754  8b7104               mov esi, dword ptr [ecx + 4]
// 00570757  85f6                 test esi, esi
// 00570759  c7410400000000       mov dword ptr [ecx + 4], 0
// 00570760  7435                 je 0x570797
// 00570762  8b4604               mov eax, dword ptr [esi + 4]
// 00570765  8b08                 mov ecx, dword ptr [eax]
// 00570767  50                   push eax
// 00570768  56                   push esi
// 00570769  51                   push ecx
// 0057076a  56                   push esi
// 0057076b  8d442414             lea eax, [esp + 0x14]
// 0057076f  50                   push eax
// 00570770  8bce                 mov ecx, esi
// 00570772  e809cdf3ff           call 0x4ad480
// 00570777  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057077a  51                   push ecx
// 0057077b  e8e2f40b00           call 0x62fc62
// 00570780  56                   push esi
// 00570781  c7460400000000       mov dword ptr [esi + 4], 0
// 00570788  c7460800000000       mov dword ptr [esi + 8], 0
// 0057078f  e8cef40b00           call 0x62fc62
// 00570794  83c408               add esp, 8
// 00570797  5e                   pop esi
// 00570798  83c408               add esp, 8
// 0057079b  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?disconnect_all_slots@SignalSource@Reflection@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
