// roc 2007-08 005cbeb0  unit: seg_005c0000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cbeb0
//
// 005cbeb0  56                   push esi
// 005cbeb1  8b742408             mov esi, dword ptr [esp + 8]
// 005cbeb5  6a00                 push 0
// 005cbeb7  6a00                 push 0
// 005cbeb9  6a01                 push 1
// 005cbebb  56                   push esi
// 005cbebc  e8ef34ffff           call 0x5bf3b0
// 005cbec1  50                   push eax
// 005cbec2  56                   push esi
// 005cbec3  e85830ffff           call 0x5bef20
// 005cbec8  83c418               add esp, 0x18
// 005cbecb  85c0                 test eax, eax
// 005cbecd  7507                 jne 0x5cbed6
// 005cbecf  b801000000           mov eax, 1
// 005cbed4  5e                   pop esi
// 005cbed5  c3                   ret 
// 005cbed6  56                   push esi
// 005cbed7  e8741cffff           call 0x5bdb50
// 005cbedc  6afe                 push -2
// 005cbede  56                   push esi
// 005cbedf  e84c17ffff           call 0x5bd630
// 005cbee4  83c40c               add esp, 0xc
// 005cbee7  b802000000           mov eax, 2
// 005cbeec  5e                   pop esi
// 005cbeed  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_loadfile)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
