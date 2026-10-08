// from server: 100% by auto
// roc 2008-06 00625140  unit: lua_exception  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625140
//
// 00625140  56                   push esi
// 00625141  8b742408             mov esi, dword ptr [esp + 8]
// 00625145  68dc4b8400           push 0x844bdc
// 0062514a  6a01                 push 1
// 0062514c  56                   push esi
// 0062514d  e85ec4feff           call 0x6115b0
// 00625152  83c40c               add esp, 0xc
// 00625155  833800               cmp dword ptr [eax], 0
// 00625158  750e                 jne 0x625168
// 0062515a  68e44b8400           push 0x844be4
// 0062515f  56                   push esi
// 00625160  e8fbbafeff           call 0x610c60
// 00625165  83c408               add esp, 8
// 00625168  6a01                 push 1
// 0062516a  56                   push esi
// 0062516b  e860ccfeff           call 0x611dd0
// 00625170  6a00                 push 0
// 00625172  56                   push esi
// 00625173  e878d2feff           call 0x6123f0
// 00625178  6a02                 push 2
// 0062517a  68c04a6200           push 0x624ac0
// 0062517f  56                   push esi
// 00625180  e8cbd1feff           call 0x612350
// 00625185  83c41c               add esp, 0x1c
// 00625188  b801000000           mov eax, 1
// 0062518d  5e                   pop esi
// 0062518e  c3                   ret 
// library lua-5.1.4/liolib.c (function _f_lines)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
