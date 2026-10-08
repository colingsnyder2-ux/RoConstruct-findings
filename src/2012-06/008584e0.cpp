// from server: 100% by auto
// roc 2012-06 008584e0  unit: lua_exception  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008584e0
//
// 008584e0  56                   push esi
// 008584e1  8b742408             mov esi, dword ptr [esp + 8]
// 008584e5  6a01                 push 1
// 008584e7  56                   push esi
// 008584e8  e803b4fdff           call 0x8338f0
// 008584ed  6a01                 push 1
// 008584ef  56                   push esi
// 008584f0  e8eb97fdff           call 0x831ce0
// 008584f5  50                   push eax
// 008584f6  56                   push esi
// 008584f7  e80498fdff           call 0x831d00
// 008584fc  50                   push eax
// 008584fd  56                   push esi
// 008584fe  e82d9cfdff           call 0x832130
// 00858503  83c420               add esp, 0x20
// 00858506  b801000000           mov eax, 1
// 0085850b  5e                   pop esi
// 0085850c  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_type)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
