// roc 2012-06 00858de0  unit: seg_00850000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858de0
//
// 00858de0  56                   push esi
// 00858de1  8b742408             mov esi, dword ptr [esp + 8]
// 00858de5  57                   push edi
// 00858de6  56                   push esi
// 00858de7  e8f49ffdff           call 0x832de0
// 00858dec  6a01                 push 1
// 00858dee  56                   push esi
// 00858def  8bf8                 mov edi, eax
// 00858df1  e8ea8efdff           call 0x831ce0
// 00858df6  83c40c               add esp, 0xc
// 00858df9  83f806               cmp eax, 6
// 00858dfc  750f                 jne 0x858e0d
// 00858dfe  6a01                 push 1
// 00858e00  56                   push esi
// 00858e01  e81a8ffdff           call 0x831d20
// 00858e06  83c408               add esp, 8
// 00858e09  85c0                 test eax, eax
// 00858e0b  7410                 je 0x858e1d
// 00858e0d  68e443bd00           push 0xbd43e4
// 00858e12  6a01                 push 1
// 00858e14  56                   push esi
// 00858e15  e816a9fdff           call 0x833730
// 00858e1a  83c40c               add esp, 0xc
// 00858e1d  6a01                 push 1
// 00858e1f  56                   push esi
// 00858e20  e88b8efdff           call 0x831cb0
// 00858e25  6a01                 push 1
// 00858e27  57                   push edi
// 00858e28  56                   push esi
// 00858e29  e8328cfdff           call 0x831a60
// 00858e2e  83c414               add esp, 0x14
// 00858e31  5f                   pop edi
// 00858e32  b801000000           mov eax, 1
// 00858e37  5e                   pop esi
// 00858e38  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_cocreate)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
