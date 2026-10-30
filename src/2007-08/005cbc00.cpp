// from server: 100% by auto
// roc 2007-08 005cbc00  unit: seg_005c0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cbc00
//
// 005cbc00  56                   push esi
// 005cbc01  8b742408             mov esi, dword ptr [esp + 8]
// 005cbc05  6a05                 push 5
// 005cbc07  6a01                 push 1
// 005cbc09  56                   push esi
// 005cbc0a  e8c136ffff           call 0x5bf2d0
// 005cbc0f  6a02                 push 2
// 005cbc11  56                   push esi
// 005cbc12  e80937ffff           call 0x5bf320
// 005cbc17  6a03                 push 3
// 005cbc19  56                   push esi
// 005cbc1a  e80137ffff           call 0x5bf320
// 005cbc1f  6a03                 push 3
// 005cbc21  56                   push esi
// 005cbc22  e86919ffff           call 0x5bd590
// 005cbc27  6a01                 push 1
// 005cbc29  56                   push esi
// 005cbc2a  e85124ffff           call 0x5be080
// 005cbc2f  83c42c               add esp, 0x2c
// 005cbc32  b801000000           mov eax, 1
// 005cbc37  5e                   pop esi
// 005cbc38  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawset)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
