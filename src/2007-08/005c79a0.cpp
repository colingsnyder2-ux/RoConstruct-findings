// from server: 100% by auto
// roc 2007-08 005c79a0  unit: lua_exception  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c79a0
//
// 005c79a0  8b442404             mov eax, dword ptr [esp + 4]
// 005c79a4  68f4f47900           push 0x79f4f4
// 005c79a9  6a01                 push 1
// 005c79ab  e820ffffff           call 0x5c78d0
// 005c79b0  83c408               add esp, 8
// 005c79b3  c3                   ret 
// library lua-5.1.4/liolib.c (function _io_input)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
