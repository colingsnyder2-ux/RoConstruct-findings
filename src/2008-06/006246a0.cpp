// from server: 100% by auto
// roc 2008-06 006246a0  unit: lua_exception  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006246a0
//
// 006246a0  8b442404             mov eax, dword ptr [esp + 4]
// 006246a4  6804728200           push 0x827204
// 006246a9  6a01                 push 1
// 006246ab  e820ffffff           call 0x6245d0
// 006246b0  83c408               add esp, 8
// 006246b3  c3                   ret 
// library lua-5.1.4/liolib.c (function _io_input)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
