// from server: 100% by auto
// roc 2012-06 008552e0  unit: lua_exception  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008552e0
//
// 008552e0  56                   push esi
// 008552e1  8b742408             mov esi, dword ptr [esp + 8]
// 008552e5  6a05                 push 5
// 008552e7  6a01                 push 1
// 008552e9  56                   push esi
// 008552ea  e8b1e5fdff           call 0x8338a0
// 008552ef  6a06                 push 6
// 008552f1  6a02                 push 2
// 008552f3  56                   push esi
// 008552f4  e8a7e5fdff           call 0x8338a0
// 008552f9  56                   push esi
// 008552fa  e891cdfdff           call 0x832090
// 008552ff  6a01                 push 1
// 00855301  56                   push esi
// 00855302  e879d7fdff           call 0x832a80
// 00855307  83c424               add esp, 0x24
// 0085530a  85c0                 test eax, eax
// 0085530c  744a                 je 0x855358
// 0085530e  8bff                 mov edi, edi
// 00855310  6a02                 push 2
// 00855312  56                   push esi
// 00855313  e898c9fdff           call 0x831cb0
// 00855318  6afd                 push -3
// 0085531a  56                   push esi
// 0085531b  e890c9fdff           call 0x831cb0
// 00855320  6afd                 push -3
// 00855322  56                   push esi
// 00855323  e888c9fdff           call 0x831cb0
// 00855328  6a01                 push 1
// 0085532a  6a02                 push 2
// 0085532c  56                   push esi
// 0085532d  e8ded4fdff           call 0x832810
// 00855332  6aff                 push -1
// 00855334  56                   push esi
// 00855335  e8a6c9fdff           call 0x831ce0
// 0085533a  83c42c               add esp, 0x2c
// 0085533d  85c0                 test eax, eax
// 0085533f  751b                 jne 0x85535c
// 00855341  6afd                 push -3
// 00855343  56                   push esi
// 00855344  e8b7c7fdff           call 0x831b00
// 00855349  6a01                 push 1
// 0085534b  56                   push esi
// 0085534c  e82fd7fdff           call 0x832a80
// 00855351  83c410               add esp, 0x10
// 00855354  85c0                 test eax, eax
// 00855356  75b8                 jne 0x855310
// 00855358  33c0                 xor eax, eax
// 0085535a  5e                   pop esi
// 0085535b  c3                   ret 
// 0085535c  b801000000           mov eax, 1
// 00855361  5e                   pop esi
// 00855362  c3                   ret 
// library lua-5.1.4/ltablib.c (function _foreach)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
