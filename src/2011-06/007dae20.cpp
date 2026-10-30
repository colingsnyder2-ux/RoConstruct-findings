// from server: 100% by auto
// roc 2011-06 007dae20  unit: seg_007d0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dae20
//
// 007dae20  8b442404             mov eax, dword ptr [esp + 4]
// 007dae24  68e4e0ab00           push 0xabe0e4
// 007dae29  50                   push eax
// 007dae2a  e8c12dfaff           call 0x77dbf0
// 007dae2f  83c408               add esp, 8
// 007dae32  33c0                 xor eax, eax
// 007dae34  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_toobig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
