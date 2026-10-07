// roc 2011-06 007809d0  unit: lua_exception  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007809d0
//
// 007809d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007809d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007809d8  8b542410             mov edx, dword ptr [esp + 0x10]
// 007809dc  50                   push eax
// 007809dd  51                   push ecx
// 007809de  52                   push edx
// 007809df  e84c30feff           call 0x763a30
// 007809e4  83c40c               add esp, 0xc
// 007809e7  33c0                 xor eax, eax
// 007809e9  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _writer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
