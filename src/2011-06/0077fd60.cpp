// from server: 100% by auto
// roc 2011-06 0077fd60  unit: lua_exception  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077fd60
//
// 0077fd60  8b442404             mov eax, dword ptr [esp + 4]
// 0077fd64  681879ab00           push 0xab7918
// 0077fd69  682861a600           push 0xa66128
// 0077fd6e  50                   push eax
// 0077fd6f  e8cc47feff           call 0x764540
// 0077fd74  83c40c               add esp, 0xc
// 0077fd77  b801000000           mov eax, 1
// 0077fd7c  c3                   ret 
// library lua-5.1.4/ltablib.c (function _luaopen_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
