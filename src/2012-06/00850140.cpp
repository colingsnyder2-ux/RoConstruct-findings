// roc 2012-06 00850140  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00850140
//
// 00850140  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00850144  8b542404             mov edx, dword ptr [esp + 4]
// 00850148  8d44240c             lea eax, [esp + 0xc]
// 0085014c  50                   push eax
// 0085014d  51                   push ecx
// 0085014e  52                   push edx
// 0085014f  e8fcfcffff           call 0x84fe50
// 00850154  83c40c               add esp, 0xc
// 00850157  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_pushfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
