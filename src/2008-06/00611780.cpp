// from server: 100% by auto
// roc 2008-06 00611780  unit: seg_00610000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00611780
//
// 00611780  83ec08               sub esp, 8
// 00611783  56                   push esi
// 00611784  8b742410             mov esi, dword ptr [esp + 0x10]
// 00611788  57                   push edi
// 00611789  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0061178d  57                   push edi
// 0061178e  56                   push esi
// 0061178f  e8cc070000           call 0x611f60
// 00611794  dd542410             fst qword ptr [esp + 0x10]
// 00611798  d9ee                 fldz 
// 0061179a  83c408               add esp, 8
// 0061179d  dde9                 fucomp st(1)
// 0061179f  dfe0                 fnstsw ax
// 006117a1  f6c444               test ah, 0x44
// 006117a4  7a46                 jp 0x6117ec
// 006117a6  57                   push edi
// 006117a7  ddd8                 fstp st(0)
// 006117a9  56                   push esi
// 006117aa  e8c1060000           call 0x611e70
// 006117af  83c408               add esp, 8
// 006117b2  85c0                 test eax, eax
// 006117b4  7532                 jne 0x6117e8
// 006117b6  53                   push ebx
// 006117b7  6a03                 push 3
// 006117b9  56                   push esi
// 006117ba  e861060000           call 0x611e20
// 006117bf  57                   push edi
// 006117c0  56                   push esi
// 006117c1  8bd8                 mov ebx, eax
// 006117c3  e838060000           call 0x611e00
// 006117c8  50                   push eax
// 006117c9  56                   push esi
// 006117ca  e851060000           call 0x611e20
// 006117cf  50                   push eax
// 006117d0  53                   push ebx
// 006117d1  6820388400           push 0x843820
// 006117d6  56                   push esi
// 006117d7  e8440b0000           call 0x612320
// 006117dc  50                   push eax
// 006117dd  57                   push edi
// 006117de  56                   push esi
// 006117df  e8ecfcffff           call 0x6114d0
// 006117e4  83c434               add esp, 0x34
// 006117e7  5b                   pop ebx
// 006117e8  dd442408             fld qword ptr [esp + 8]
// 006117ec  5f                   pop edi
// 006117ed  5e                   pop esi
// 006117ee  83c408               add esp, 8
// 006117f1  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checknumber)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
