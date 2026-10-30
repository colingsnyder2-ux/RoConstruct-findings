// from server: 100% by auto
// roc 2012-06 00858360  unit: lua_exception  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858360
//
// 00858360  56                   push esi
// 00858361  8b742408             mov esi, dword ptr [esp + 8]
// 00858365  6a01                 push 1
// 00858367  56                   push esi
// 00858368  e883b5fdff           call 0x8338f0
// 0085836d  6a02                 push 2
// 0085836f  56                   push esi
// 00858370  e87bb5fdff           call 0x8338f0
// 00858375  6a02                 push 2
// 00858377  6a01                 push 1
// 00858379  56                   push esi
// 0085837a  e8419afdff           call 0x831dc0
// 0085837f  50                   push eax
// 00858380  56                   push esi
// 00858381  e81a9ffdff           call 0x8322a0
// 00858386  83c424               add esp, 0x24
// 00858389  b801000000           mov eax, 1
// 0085838e  5e                   pop esi
// 0085838f  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawequal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
