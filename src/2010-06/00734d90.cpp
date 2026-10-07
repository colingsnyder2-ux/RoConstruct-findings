// roc 2010-06 00734d90  unit: seg_00730000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00734d90
//
// 00734d90  8b442404             mov eax, dword ptr [esp + 4]
// 00734d94  6808dfa400           push 0xa4df08
// 00734d99  68c84ca000           push 0xa04cc8
// 00734d9e  50                   push eax
// 00734d9f  e82ce5feff           call 0x7232d0
// 00734da4  83c40c               add esp, 0xc
// 00734da7  b801000000           mov eax, 1
// 00734dac  c3                   ret 
// library lua-5.1.4/ltablib.c (function _luaopen_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
