// from server: 100% by auto
// roc 2008-06 00628f50  unit: seg_00620000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628f50
//
// 00628f50  56                   push esi
// 00628f51  8b742408             mov esi, dword ptr [esp + 8]
// 00628f55  e8f6feffff           call 0x628e50
// 00628f5a  68d0548400           push 0x8454d0
// 00628f5f  68e0578400           push 0x8457e0
// 00628f64  56                   push esi
// 00628f65  e8068bfeff           call 0x611a70
// 00628f6a  83c40c               add esp, 0xc
// 00628f6d  b802000000           mov eax, 2
// 00628f72  5e                   pop esi
// 00628f73  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaopen_base)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
