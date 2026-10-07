// roc 2007-08 005c79c0  unit: lua_exception  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c79c0
//
// 005c79c0  8b442404             mov eax, dword ptr [esp + 4]
// 005c79c4  6840ff7900           push 0x79ff40
// 005c79c9  6a02                 push 2
// 005c79cb  e800ffffff           call 0x5c78d0
// 005c79d0  83c408               add esp, 8
// 005c79d3  c3                   ret 
// library lua-5.1.4/liolib.c (function _io_output)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
