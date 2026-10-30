// from server: 100% by auto
// roc 2007-08 005cbe10  unit: seg_005c0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cbe10
//
// 005cbe10  56                   push esi
// 005cbe11  8b742408             mov esi, dword ptr [esp + 8]
// 005cbe15  6a05                 push 5
// 005cbe17  6a01                 push 1
// 005cbe19  56                   push esi
// 005cbe1a  e8b134ffff           call 0x5bf2d0
// 005cbe1f  68edd8ffff           push 0xffffd8ed
// 005cbe24  56                   push esi
// 005cbe25  e81619ffff           call 0x5bd740
// 005cbe2a  6a01                 push 1
// 005cbe2c  56                   push esi
// 005cbe2d  e80e19ffff           call 0x5bd740
// 005cbe32  6a00                 push 0
// 005cbe34  56                   push esi
// 005cbe35  e8561dffff           call 0x5bdb90
// 005cbe3a  83c424               add esp, 0x24
// 005cbe3d  b803000000           mov eax, 3
// 005cbe42  5e                   pop esi
// 005cbe43  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_ipairs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
