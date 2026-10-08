// roc 2007-08 00417ed0  unit: boost::signals::detail::slot_base::Udata_t::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00417ed0
//
// 00417ed0  56                   push esi
// 00417ed1  8bf1                 mov esi, ecx
// 00417ed3  8b4604               mov eax, dword ptr [esi + 4]
// 00417ed6  85c0                 test eax, eax
// 00417ed8  7418                 je 0x417ef2
// 00417eda  8b4e08               mov ecx, dword ptr [esi + 8]
// 00417edd  51                   push ecx
// 00417ede  50                   push eax
// 00417edf  8bce                 mov ecx, esi
// 00417ee1  e8cafeffff           call 0x417db0
// 00417ee6  8b5604               mov edx, dword ptr [esi + 4]
// 00417ee9  52                   push edx
// 00417eea  e8737d2100           call 0x62fc62
// 00417eef  83c404               add esp, 4
// 00417ef2  c7460400000000       mov dword ptr [esi + 4], 0
// 00417ef9  c7460800000000       mov dword ptr [esi + 8], 0
// 00417f00  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00417f07  5e                   pop esi
// 00417f08  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Tidy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
