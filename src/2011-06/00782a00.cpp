// from server: 100% by auto
// roc 2011-06 00782a00  unit: seg_00780000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782a00
//
// 00782a00  56                   push esi
// 00782a01  8b742408             mov esi, dword ptr [esp + 8]
// 00782a05  6a01                 push 1
// 00782a07  56                   push esi
// 00782a08  e85317feff           call 0x764160
// 00782a0d  6a01                 push 1
// 00782a0f  56                   push esi
// 00782a10  e81bfdfdff           call 0x762730
// 00782a15  83c410               add esp, 0x10
// 00782a18  85c0                 test eax, eax
// 00782a1a  751f                 jne 0x782a3b
// 00782a1c  50                   push eax
// 00782a1d  684882ab00           push 0xab8248
// 00782a22  6a02                 push 2
// 00782a24  56                   push esi
// 00782a25  e8c617feff           call 0x7641f0
// 00782a2a  50                   push eax
// 00782a2b  683456a600           push 0xa65634
// 00782a30  56                   push esi
// 00782a31  e8da0cfeff           call 0x763710
// 00782a36  83c41c               add esp, 0x1c
// 00782a39  5e                   pop esi
// 00782a3a  c3                   ret 
// 00782a3b  56                   push esi
// 00782a3c  e81ff9fdff           call 0x762360
// 00782a41  83c404               add esp, 4
// 00782a44  5e                   pop esi
// 00782a45  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_assert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
