// from server: 100% by auto
// roc 2008-06 006246c0  unit: lua_exception  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006246c0
//
// 006246c0  8b442404             mov eax, dword ptr [esp + 4]
// 006246c4  68507a8200           push 0x827a50
// 006246c9  6a02                 push 2
// 006246cb  e800ffffff           call 0x6245d0
// 006246d0  83c408               add esp, 8
// 006246d3  c3                   ret 
// library lua-5.1.4/liolib.c (function _io_output)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
