// roc 2012-06 008588d0  unit: seg_00850000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008588d0
//
// 008588d0  53                   push ebx
// 008588d1  57                   push edi
// 008588d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008588d6  57                   push edi
// 008588d7  e81492fdff           call 0x831af0
// 008588dc  6a01                 push 1
// 008588de  57                   push edi
// 008588df  8bd8                 mov ebx, eax
// 008588e1  e8fa93fdff           call 0x831ce0
// 008588e6  83c40c               add esp, 0xc
// 008588e9  83f804               cmp eax, 4
// 008588ec  7525                 jne 0x858913
// 008588ee  6a00                 push 0
// 008588f0  6a01                 push 1
// 008588f2  57                   push edi
// 008588f3  e8f895fdff           call 0x831ef0
// 008588f8  83c40c               add esp, 0xc
// 008588fb  803823               cmp byte ptr [eax], 0x23
// 008588fe  7513                 jne 0x858913
// 00858900  4b                   dec ebx
// 00858901  53                   push ebx
// 00858902  57                   push edi
// 00858903  e8c897fdff           call 0x8320d0
// 00858908  83c408               add esp, 8
// 0085890b  5f                   pop edi
// 0085890c  b801000000           mov eax, 1
// 00858911  5b                   pop ebx
// 00858912  c3                   ret 
// 00858913  56                   push esi
// 00858914  6a01                 push 1
// 00858916  57                   push edi
// 00858917  e844b1fdff           call 0x833a60
// 0085891c  8bf0                 mov esi, eax
// 0085891e  83c408               add esp, 8
// 00858921  85f6                 test esi, esi
// 00858923  7d04                 jge 0x858929
// 00858925  03f3                 add esi, ebx
// 00858927  eb06                 jmp 0x85892f
// 00858929  3bf3                 cmp esi, ebx
// 0085892b  7e02                 jle 0x85892f
// 0085892d  8bf3                 mov esi, ebx
// 0085892f  83fe01               cmp esi, 1
// 00858932  7d10                 jge 0x858944
// 00858934  682843bd00           push 0xbd4328
// 00858939  6a01                 push 1
// 0085893b  57                   push edi
// 0085893c  e8efadfdff           call 0x833730
// 00858941  83c40c               add esp, 0xc
// 00858944  8bc3                 mov eax, ebx
// 00858946  2bc6                 sub eax, esi
// 00858948  5e                   pop esi
// 00858949  5f                   pop edi
// 0085894a  5b                   pop ebx
// 0085894b  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_select)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
