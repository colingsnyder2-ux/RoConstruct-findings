// roc 2012-06 00858270  unit: lua_exception  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858270
//
// 00858270  56                   push esi
// 00858271  8b742408             mov esi, dword ptr [esp + 8]
// 00858275  6a01                 push 1
// 00858277  e844ffffff           call 0x8581c0
// 0085827c  6aff                 push -1
// 0085827e  56                   push esi
// 0085827f  e89c9afdff           call 0x831d20
// 00858284  83c40c               add esp, 0xc
// 00858287  85c0                 test eax, eax
// 00858289  7415                 je 0x8582a0
// 0085828b  68eed8ffff           push 0xffffd8ee
// 00858290  56                   push esi
// 00858291  e81a9afdff           call 0x831cb0
// 00858296  83c408               add esp, 8
// 00858299  b801000000           mov eax, 1
// 0085829e  5e                   pop esi
// 0085829f  c3                   ret 
// 008582a0  6aff                 push -1
// 008582a2  56                   push esi
// 008582a3  e838a2fdff           call 0x8324e0
// 008582a8  83c408               add esp, 8
// 008582ab  b801000000           mov eax, 1
// 008582b0  5e                   pop esi
// 008582b1  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_getfenv)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
