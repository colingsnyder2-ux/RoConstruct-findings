// roc 2008-06 00623d80  unit: lua_exception  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00623d80
//
// 00623d80  8b442404             mov eax, dword ptr [esp + 4]
// 00623d84  50                   push eax
// 00623d85  e836820300           call 0x65bfc0
// 00623d8a  59                   pop ecx
// 00623d8b  c3                   ret 
// library lua-5.1.4/lstate.c (function _callallgcTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
