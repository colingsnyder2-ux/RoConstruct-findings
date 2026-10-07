// roc 2007-08 005bf150  unit: boost::detail::H::?$sp_counted_impl_p  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf150
//
// 005bf150  83ec08               sub esp, 8
// 005bf153  8b442410             mov eax, dword ptr [esp + 0x10]
// 005bf157  8b542418             mov edx, dword ptr [esp + 0x18]
// 005bf15b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005bf15f  52                   push edx
// 005bf160  89442404             mov dword ptr [esp + 4], eax
// 005bf164  8d442404             lea eax, [esp + 4]
// 005bf168  50                   push eax
// 005bf169  894c240c             mov dword ptr [esp + 0xc], ecx
// 005bf16d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005bf171  6830f15b00           push 0x5bf130
// 005bf176  51                   push ecx
// 005bf177  e8e4f1ffff           call 0x5be360
// 005bf17c  83c418               add esp, 0x18
// 005bf17f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_loadbuffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
