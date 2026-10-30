// from server: 100% by auto
// roc 2012-06 00858410  unit: lua_exception  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858410
//
// 00858410  56                   push esi
// 00858411  8b742408             mov esi, dword ptr [esp + 8]
// 00858415  6a00                 push 0
// 00858417  6a03                 push 3
// 00858419  56                   push esi
// 0085841a  e851a5fdff           call 0x832970
// 0085841f  50                   push eax
// 00858420  56                   push esi
// 00858421  e8aa9cfdff           call 0x8320d0
// 00858426  83c414               add esp, 0x14
// 00858429  b801000000           mov eax, 1
// 0085842e  5e                   pop esi
// 0085842f  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_gcinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
