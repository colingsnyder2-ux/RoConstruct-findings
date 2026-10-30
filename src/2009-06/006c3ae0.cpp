// from server: 100% by auto
// roc 2009-06 006c3ae0  unit: lua_exception  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c3ae0
//
// 006c3ae0  8b442404             mov eax, dword ptr [esp + 4]
// 006c3ae4  50                   push eax
// 006c3ae5  e8065d0200           call 0x6e97f0
// 006c3aea  59                   pop ecx
// 006c3aeb  c3                   ret 
// library lua-5.1.4/lstate.c (function _callallgcTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
