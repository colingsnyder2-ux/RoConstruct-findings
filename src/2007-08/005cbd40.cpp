// from server: 100% by auto
// roc 2007-08 005cbd40  unit: seg_005c0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cbd40
//
// 005cbd40  56                   push esi
// 005cbd41  8b742408             mov esi, dword ptr [esp + 8]
// 005cbd45  6a05                 push 5
// 005cbd47  6a01                 push 1
// 005cbd49  56                   push esi
// 005cbd4a  e88135ffff           call 0x5bf2d0
// 005cbd4f  6a02                 push 2
// 005cbd51  56                   push esi
// 005cbd52  e83918ffff           call 0x5bd590
// 005cbd57  6a01                 push 1
// 005cbd59  56                   push esi
// 005cbd5a  e89127ffff           call 0x5be4f0
// 005cbd5f  83c41c               add esp, 0x1c
// 005cbd62  85c0                 test eax, eax
// 005cbd64  7407                 je 0x5cbd6d
// 005cbd66  b802000000           mov eax, 2
// 005cbd6b  5e                   pop esi
// 005cbd6c  c3                   ret 
// 005cbd6d  56                   push esi
// 005cbd6e  e8dd1dffff           call 0x5bdb50
// 005cbd73  83c404               add esp, 4
// 005cbd76  b801000000           mov eax, 1
// 005cbd7b  5e                   pop esi
// 005cbd7c  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_next)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
