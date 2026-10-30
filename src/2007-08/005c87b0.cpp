// from server: 100% by auto
// roc 2007-08 005c87b0  unit: lua_exception  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c87b0
//
// 005c87b0  8b442404             mov eax, dword ptr [esp + 4]
// 005c87b4  50                   push eax
// 005c87b5  e866720400           call 0x60fa20
// 005c87ba  59                   pop ecx
// 005c87bb  c3                   ret 
// library lua-5.1.4/lstate.c (function _callallgcTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
