// from server: 100% by auto
// roc 2008-06 006606d0  unit: RBX::FilterStairs  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006606d0
//
// 006606d0  8b442404             mov eax, dword ptr [esp + 4]
// 006606d4  6878c48400           push 0x84c478
// 006606d9  50                   push eax
// 006606da  e8f130fcff           call 0x6237d0
// 006606df  83c408               add esp, 8
// 006606e2  33c0                 xor eax, eax
// 006606e4  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_toobig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
