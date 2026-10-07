// roc 2012-06 00858730  unit: seg_00850000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858730
//
// 00858730  56                   push esi
// 00858731  8b742408             mov esi, dword ptr [esp + 8]
// 00858735  57                   push edi
// 00858736  6a00                 push 0
// 00858738  68f042bd00           push 0xbd42f0
// 0085873d  6a02                 push 2
// 0085873f  56                   push esi
// 00858740  e83bb2fdff           call 0x833980
// 00858745  6a06                 push 6
// 00858747  6a01                 push 1
// 00858749  56                   push esi
// 0085874a  8bf8                 mov edi, eax
// 0085874c  e84fb1fdff           call 0x8338a0
// 00858751  6a03                 push 3
// 00858753  56                   push esi
// 00858754  e8a793fdff           call 0x831b00
// 00858759  57                   push edi
// 0085875a  6a00                 push 0
// 0085875c  68b0868500           push 0x8586b0
// 00858761  56                   push esi
// 00858762  e879a1fdff           call 0x8328e0
// 00858767  83c434               add esp, 0x34
// 0085876a  85c0                 test eax, eax
// 0085876c  7508                 jne 0x858776
// 0085876e  5f                   pop edi
// 0085876f  b801000000           mov eax, 1
// 00858774  5e                   pop esi
// 00858775  c3                   ret 
// 00858776  56                   push esi
// 00858777  e81499fdff           call 0x832090
// 0085877c  6afe                 push -2
// 0085877e  56                   push esi
// 0085877f  e81c94fdff           call 0x831ba0
// 00858784  83c40c               add esp, 0xc
// 00858787  5f                   pop edi
// 00858788  b802000000           mov eax, 2
// 0085878d  5e                   pop esi
// 0085878e  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_load)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
