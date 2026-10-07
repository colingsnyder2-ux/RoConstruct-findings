// roc 2012-06 00858670  unit: seg_00850000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858670
//
// 00858670  56                   push esi
// 00858671  8b742408             mov esi, dword ptr [esp + 8]
// 00858675  6a00                 push 0
// 00858677  6a00                 push 0
// 00858679  6a01                 push 1
// 0085867b  56                   push esi
// 0085867c  e8ffb2fdff           call 0x833980
// 00858681  50                   push eax
// 00858682  56                   push esi
// 00858683  e828aefdff           call 0x8334b0
// 00858688  83c418               add esp, 0x18
// 0085868b  85c0                 test eax, eax
// 0085868d  7507                 jne 0x858696
// 0085868f  b801000000           mov eax, 1
// 00858694  5e                   pop esi
// 00858695  c3                   ret 
// 00858696  56                   push esi
// 00858697  e8f499fdff           call 0x832090
// 0085869c  6afe                 push -2
// 0085869e  56                   push esi
// 0085869f  e8fc94fdff           call 0x831ba0
// 008586a4  83c40c               add esp, 0xc
// 008586a7  b802000000           mov eax, 2
// 008586ac  5e                   pop esi
// 008586ad  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_loadfile)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
