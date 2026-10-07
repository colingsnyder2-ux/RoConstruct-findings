// roc 2011-06 0077eff0  unit: lua_exception  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077eff0
//
// 0077eff0  8b442404             mov eax, dword ptr [esp + 4]
// 0077eff4  50                   push eax
// 0077eff5  e8d67d0500           call 0x7d6dd0
// 0077effa  59                   pop ecx
// 0077effb  c3                   ret 
// library lua-5.1.4/lstate.c (function _callallgcTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
