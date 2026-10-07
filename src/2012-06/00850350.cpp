// roc 2012-06 00850350  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00850350
//
// 00850350  8b442404             mov eax, dword ptr [esp + 4]
// 00850354  8b403c               mov eax, dword ptr [eax + 0x3c]
// 00850357  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_gethookcount)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
