// from server: 100% by auto
// roc 2012-06 008567b0  unit: lua_exception  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008567b0
//
// 008567b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008567b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008567b8  8b542410             mov edx, dword ptr [esp + 0x10]
// 008567bc  50                   push eax
// 008567bd  51                   push ecx
// 008567be  52                   push edx
// 008567bf  e8fcc9fdff           call 0x8331c0
// 008567c4  83c40c               add esp, 0xc
// 008567c7  33c0                 xor eax, eax
// 008567c9  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _writer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
