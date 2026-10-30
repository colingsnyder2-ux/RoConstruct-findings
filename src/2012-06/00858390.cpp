// from server: 100% by auto
// roc 2012-06 00858390  unit: lua_exception  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858390
//
// 00858390  56                   push esi
// 00858391  8b742408             mov esi, dword ptr [esp + 8]
// 00858395  6a05                 push 5
// 00858397  6a01                 push 1
// 00858399  56                   push esi
// 0085839a  e801b5fdff           call 0x8338a0
// 0085839f  6a02                 push 2
// 008583a1  56                   push esi
// 008583a2  e849b5fdff           call 0x8338f0
// 008583a7  6a02                 push 2
// 008583a9  56                   push esi
// 008583aa  e85197fdff           call 0x831b00
// 008583af  6a01                 push 1
// 008583b1  56                   push esi
// 008583b2  e8e99ffdff           call 0x8323a0
// 008583b7  83c424               add esp, 0x24
// 008583ba  b801000000           mov eax, 1
// 008583bf  5e                   pop esi
// 008583c0  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawget)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
