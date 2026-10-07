// roc 2012-06 008580f0  unit: lua_exception  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008580f0
//
// 008580f0  56                   push esi
// 008580f1  8b742408             mov esi, dword ptr [esp + 8]
// 008580f5  6a01                 push 1
// 008580f7  56                   push esi
// 008580f8  e8f3b7fdff           call 0x8338f0
// 008580fd  6a01                 push 1
// 008580ff  56                   push esi
// 00858100  e87ba3fdff           call 0x832480
// 00858105  83c410               add esp, 0x10
// 00858108  85c0                 test eax, eax
// 0085810a  7510                 jne 0x85811c
// 0085810c  56                   push esi
// 0085810d  e87e9ffdff           call 0x832090
// 00858112  83c404               add esp, 4
// 00858115  b801000000           mov eax, 1
// 0085811a  5e                   pop esi
// 0085811b  c3                   ret 
// 0085811c  68e441b900           push 0xb941e4
// 00858121  6a01                 push 1
// 00858123  56                   push esi
// 00858124  e837aefdff           call 0x832f60
// 00858129  83c40c               add esp, 0xc
// 0085812c  b801000000           mov eax, 1
// 00858131  5e                   pop esi
// 00858132  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_getmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
