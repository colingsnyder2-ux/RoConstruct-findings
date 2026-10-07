// roc 2007-08 005cc100  unit: seg_005c0000  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cc100
//
// 005cc100  53                   push ebx
// 005cc101  57                   push edi
// 005cc102  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005cc106  57                   push edi
// 005cc107  e87414ffff           call 0x5bd580
// 005cc10c  6a01                 push 1
// 005cc10e  57                   push edi
// 005cc10f  8bd8                 mov ebx, eax
// 005cc111  e85a16ffff           call 0x5bd770
// 005cc116  83c40c               add esp, 0xc
// 005cc119  83f804               cmp eax, 4
// 005cc11c  7527                 jne 0x5cc145
// 005cc11e  6a00                 push 0
// 005cc120  6a01                 push 1
// 005cc122  57                   push edi
// 005cc123  e85818ffff           call 0x5bd980
// 005cc128  83c40c               add esp, 0xc
// 005cc12b  803823               cmp byte ptr [eax], 0x23
// 005cc12e  7515                 jne 0x5cc145
// 005cc130  83c3ff               add ebx, -1
// 005cc133  53                   push ebx
// 005cc134  57                   push edi
// 005cc135  e8561affff           call 0x5bdb90
// 005cc13a  83c408               add esp, 8
// 005cc13d  5f                   pop edi
// 005cc13e  b801000000           mov eax, 1
// 005cc143  5b                   pop ebx
// 005cc144  c3                   ret 
// 005cc145  56                   push esi
// 005cc146  6a01                 push 1
// 005cc148  57                   push edi
// 005cc149  e84233ffff           call 0x5bf490
// 005cc14e  8bf0                 mov esi, eax
// 005cc150  83c408               add esp, 8
// 005cc153  85f6                 test esi, esi
// 005cc155  7d04                 jge 0x5cc15b
// 005cc157  03f3                 add esi, ebx
// 005cc159  eb06                 jmp 0x5cc161
// 005cc15b  3bf3                 cmp esi, ebx
// 005cc15d  7e02                 jle 0x5cc161
// 005cc15f  8bf3                 mov esi, ebx
// 005cc161  83fe01               cmp esi, 1
// 005cc164  7d10                 jge 0x5cc176
// 005cc166  6860a47b00           push 0x7ba460
// 005cc16b  6a01                 push 1
// 005cc16d  57                   push edi
// 005cc16e  e80d30ffff           call 0x5bf180
// 005cc173  83c40c               add esp, 0xc
// 005cc176  8bc3                 mov eax, ebx
// 005cc178  2bc6                 sub eax, esi
// 005cc17a  5e                   pop esi
// 005cc17b  5f                   pop edi
// 005cc17c  5b                   pop ebx
// 005cc17d  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_select)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
