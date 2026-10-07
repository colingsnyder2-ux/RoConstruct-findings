// roc 2012-06 008583d0  unit: lua_exception  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008583d0
//
// 008583d0  56                   push esi
// 008583d1  8b742408             mov esi, dword ptr [esp + 8]
// 008583d5  6a05                 push 5
// 008583d7  6a01                 push 1
// 008583d9  56                   push esi
// 008583da  e8c1b4fdff           call 0x8338a0
// 008583df  6a02                 push 2
// 008583e1  56                   push esi
// 008583e2  e809b5fdff           call 0x8338f0
// 008583e7  6a03                 push 3
// 008583e9  56                   push esi
// 008583ea  e801b5fdff           call 0x8338f0
// 008583ef  6a03                 push 3
// 008583f1  56                   push esi
// 008583f2  e80997fdff           call 0x831b00
// 008583f7  6a01                 push 1
// 008583f9  56                   push esi
// 008583fa  e8e1a1fdff           call 0x8325e0
// 008583ff  83c42c               add esp, 0x2c
// 00858402  b801000000           mov eax, 1
// 00858407  5e                   pop esi
// 00858408  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawset)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
