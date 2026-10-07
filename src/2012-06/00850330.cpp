// roc 2012-06 00850330  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00850330
//
// 00850330  8b442404             mov eax, dword ptr [esp + 4]
// 00850334  8b4044               mov eax, dword ptr [eax + 0x44]
// 00850337  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_gethook)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
