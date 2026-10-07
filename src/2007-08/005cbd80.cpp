// roc 2007-08 005cbd80  unit: seg_005c0000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cbd80
//
// 005cbd80  56                   push esi
// 005cbd81  8b742408             mov esi, dword ptr [esp + 8]
// 005cbd85  6a05                 push 5
// 005cbd87  6a01                 push 1
// 005cbd89  56                   push esi
// 005cbd8a  e84135ffff           call 0x5bf2d0
// 005cbd8f  68edd8ffff           push 0xffffd8ed
// 005cbd94  56                   push esi
// 005cbd95  e8a619ffff           call 0x5bd740
// 005cbd9a  6a01                 push 1
// 005cbd9c  56                   push esi
// 005cbd9d  e89e19ffff           call 0x5bd740
// 005cbda2  56                   push esi
// 005cbda3  e8a81dffff           call 0x5bdb50
// 005cbda8  83c420               add esp, 0x20
// 005cbdab  b803000000           mov eax, 3
// 005cbdb0  5e                   pop esi
// 005cbdb1  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_pairs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
