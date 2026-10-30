// from server: 100% by auto
// roc 2012-06 00850300  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00850300
//
// 00850300  8b542408             mov edx, dword ptr [esp + 8]
// 00850304  85d2                 test edx, edx
// 00850306  7408                 je 0x850310
// 00850308  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085030c  85c9                 test ecx, ecx
// 0085030e  7504                 jne 0x850314
// 00850310  33c9                 xor ecx, ecx
// 00850312  33d2                 xor edx, edx
// 00850314  8b442404             mov eax, dword ptr [esp + 4]
// 00850318  895044               mov dword ptr [eax + 0x44], edx
// 0085031b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085031f  89503c               mov dword ptr [eax + 0x3c], edx
// 00850322  895040               mov dword ptr [eax + 0x40], edx
// 00850325  884838               mov byte ptr [eax + 0x38], cl
// 00850328  b801000000           mov eax, 1
// 0085032d  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_sethook)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
