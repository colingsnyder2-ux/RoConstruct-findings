// from server: 100% by auto
// roc 2008-06 00625b10  unit: seg_00620000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625b10
//
// 00625b10  8b442404             mov eax, dword ptr [esp + 4]
// 00625b14  68484d8400           push 0x844d48
// 00625b19  68e80c8100           push 0x810ce8
// 00625b1e  50                   push eax
// 00625b1f  e84cbffeff           call 0x611a70
// 00625b24  83c40c               add esp, 0xc
// 00625b27  b801000000           mov eax, 1
// 00625b2c  c3                   ret 
// library lua-5.1.4/ltablib.c (function _luaopen_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
