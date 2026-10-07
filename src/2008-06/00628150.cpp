// roc 2008-06 00628150  unit: seg_00620000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628150
//
// 00628150  83ec64               sub esp, 0x64
// 00628153  6a01                 push 1
// 00628155  56                   push esi
// 00628156  e8a59cfeff           call 0x611e00
// 0062815b  83c408               add esp, 8
// 0062815e  83f806               cmp eax, 6
// 00628161  750f                 jne 0x628172
// 00628163  6a01                 push 1
// 00628165  56                   push esi
// 00628166  e8659cfeff           call 0x611dd0
// 0062816b  83c408               add esp, 8
// 0062816e  83c464               add esp, 0x64
// 00628171  c3                   ret 
// 00628172  57                   push edi
// 00628173  6a01                 push 1
// 00628175  6a01                 push 1
// 00628177  56                   push esi
// 00628178  e8f396feff           call 0x611870
// 0062817d  8bf8                 mov edi, eax
// 0062817f  83c40c               add esp, 0xc
// 00628182  85ff                 test edi, edi
// 00628184  7d10                 jge 0x628196
// 00628186  68ac558400           push 0x8455ac
// 0062818b  6a01                 push 1
// 0062818d  56                   push esi
// 0062818e  e83d93feff           call 0x6114d0
// 00628193  83c40c               add esp, 0xc
// 00628196  8d442404             lea eax, [esp + 4]
// 0062819a  50                   push eax
// 0062819b  57                   push edi
// 0062819c  56                   push esi
// 0062819d  e83eabffff           call 0x622ce0
// 006281a2  83c40c               add esp, 0xc
// 006281a5  85c0                 test eax, eax
// 006281a7  7510                 jne 0x6281b9
// 006281a9  689c558400           push 0x84559c
// 006281ae  6a01                 push 1
// 006281b0  56                   push esi
// 006281b1  e81a93feff           call 0x6114d0
// 006281b6  83c40c               add esp, 0xc
// 006281b9  8d4c2404             lea ecx, [esp + 4]
// 006281bd  51                   push ecx
// 006281be  6898558400           push 0x845598
// 006281c3  56                   push esi
// 006281c4  e887b7ffff           call 0x623950
// 006281c9  6aff                 push -1
// 006281cb  56                   push esi
// 006281cc  e82f9cfeff           call 0x611e00
// 006281d1  83c414               add esp, 0x14
// 006281d4  85c0                 test eax, eax
// 006281d6  750f                 jne 0x6281e7
// 006281d8  57                   push edi
// 006281d9  6864558400           push 0x845564
// 006281de  56                   push esi
// 006281df  e87c8afeff           call 0x610c60
// 006281e4  83c40c               add esp, 0xc
// 006281e7  5f                   pop edi
// 006281e8  83c464               add esp, 0x64
// 006281eb  c3                   ret 
// library lua-5.1.1/lbaselib.c (function _getfunc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lbaselib.c
