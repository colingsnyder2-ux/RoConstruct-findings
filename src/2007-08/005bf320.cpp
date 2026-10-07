// roc 2007-08 005bf320  unit: boost::detail::H::?$sp_counted_impl_p  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf320
//
// 005bf320  56                   push esi
// 005bf321  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bf325  57                   push edi
// 005bf326  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005bf32a  56                   push esi
// 005bf32b  57                   push edi
// 005bf32c  e83fe4ffff           call 0x5bd770
// 005bf331  83c408               add esp, 8
// 005bf334  83f8ff               cmp eax, -1
// 005bf337  750f                 jne 0x5bf348
// 005bf339  6848917b00           push 0x7b9148
// 005bf33e  56                   push esi
// 005bf33f  57                   push edi
// 005bf340  e83bfeffff           call 0x5bf180
// 005bf345  83c40c               add esp, 0xc
// 005bf348  5f                   pop edi
// 005bf349  5e                   pop esi
// 005bf34a  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkany)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
