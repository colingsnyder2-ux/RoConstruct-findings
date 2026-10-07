// roc 2012-06 00858510  unit: lua_exception  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858510
//
// 00858510  56                   push esi
// 00858511  8b742408             mov esi, dword ptr [esp + 8]
// 00858515  6a05                 push 5
// 00858517  6a01                 push 1
// 00858519  56                   push esi
// 0085851a  e881b3fdff           call 0x8338a0
// 0085851f  6a02                 push 2
// 00858521  56                   push esi
// 00858522  e8d995fdff           call 0x831b00
// 00858527  6a01                 push 1
// 00858529  56                   push esi
// 0085852a  e851a5fdff           call 0x832a80
// 0085852f  83c41c               add esp, 0x1c
// 00858532  85c0                 test eax, eax
// 00858534  7407                 je 0x85853d
// 00858536  b802000000           mov eax, 2
// 0085853b  5e                   pop esi
// 0085853c  c3                   ret 
// 0085853d  56                   push esi
// 0085853e  e84d9bfdff           call 0x832090
// 00858543  83c404               add esp, 4
// 00858546  b801000000           mov eax, 1
// 0085854b  5e                   pop esi
// 0085854c  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_next)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
