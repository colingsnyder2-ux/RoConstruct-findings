// roc 2012-06 00850f10  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00850f10
//
// 00850f10  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00850f14  57                   push edi
// 00850f15  8b7c2408             mov edi, dword ptr [esp + 8]
// 00850f19  8d442410             lea eax, [esp + 0x10]
// 00850f1d  50                   push eax
// 00850f1e  51                   push ecx
// 00850f1f  57                   push edi
// 00850f20  e82befffff           call 0x84fe50
// 00850f25  50                   push eax
// 00850f26  e8e5feffff           call 0x850e10
// 00850f2b  57                   push edi
// 00850f2c  e84fffffff           call 0x850e80
// 00850f31  83c414               add esp, 0x14
// 00850f34  5f                   pop edi
// 00850f35  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_runerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
