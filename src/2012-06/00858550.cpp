// roc 2012-06 00858550  unit: seg_00850000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858550
//
// 00858550  56                   push esi
// 00858551  8b742408             mov esi, dword ptr [esp + 8]
// 00858555  6a05                 push 5
// 00858557  6a01                 push 1
// 00858559  56                   push esi
// 0085855a  e841b3fdff           call 0x8338a0
// 0085855f  68edd8ffff           push 0xffffd8ed
// 00858564  56                   push esi
// 00858565  e84697fdff           call 0x831cb0
// 0085856a  6a01                 push 1
// 0085856c  56                   push esi
// 0085856d  e83e97fdff           call 0x831cb0
// 00858572  56                   push esi
// 00858573  e8189bfdff           call 0x832090
// 00858578  83c420               add esp, 0x20
// 0085857b  b803000000           mov eax, 3
// 00858580  5e                   pop esi
// 00858581  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_pairs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
