// roc 2007-08 005cad50  unit: seg_005c0000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cad50
//
// 005cad50  56                   push esi
// 005cad51  8b742408             mov esi, dword ptr [esp + 8]
// 005cad55  6a00                 push 0
// 005cad57  6a01                 push 1
// 005cad59  56                   push esi
// 005cad5a  e8f145ffff           call 0x5bf350
// 005cad5f  6a00                 push 0
// 005cad61  6a02                 push 2
// 005cad63  56                   push esi
// 005cad64  e8e745ffff           call 0x5bf350
// 005cad69  6a02                 push 2
// 005cad6b  56                   push esi
// 005cad6c  e81f28ffff           call 0x5bd590
// 005cad71  6a00                 push 0
// 005cad73  56                   push esi
// 005cad74  e8172effff           call 0x5bdb90
// 005cad79  6a03                 push 3
// 005cad7b  6830ac5c00           push 0x5cac30
// 005cad80  56                   push esi
// 005cad81  e83a2fffff           call 0x5bdcc0
// 005cad86  83c434               add esp, 0x34
// 005cad89  b801000000           mov eax, 1
// 005cad8e  5e                   pop esi
// 005cad8f  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _gmatch)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
