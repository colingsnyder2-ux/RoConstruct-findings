// roc 2012-06 00850340  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00850340
//
// 00850340  8b442404             mov eax, dword ptr [esp + 4]
// 00850344  0fb64038             movzx eax, byte ptr [eax + 0x38]
// 00850348  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_gethookmask)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
