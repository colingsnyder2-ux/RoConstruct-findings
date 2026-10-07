// roc 2012-06 00850ba0  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00850ba0
//
// 00850ba0  8b442404             mov eax, dword ptr [esp + 4]
// 00850ba4  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00850ba7  68ff000000           push 0xff
// 00850bac  51                   push ecx
// 00850bad  50                   push eax
// 00850bae  e82dfbffff           call 0x8506e0
// 00850bb3  83c40c               add esp, 0xc
// 00850bb6  f7d8                 neg eax
// 00850bb8  1bc0                 sbb eax, eax
// 00850bba  f7d8                 neg eax
// 00850bbc  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_checkcode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
