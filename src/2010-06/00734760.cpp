// roc 2010-06 00734760  unit: seg_00730000  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00734760
//
// 00734760  55                   push ebp
// 00734761  56                   push esi
// 00734762  57                   push edi
// 00734763  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00734767  6a05                 push 5
// 00734769  6a01                 push 1
// 0073476b  57                   push edi
// 0073476c  e82fe7feff           call 0x722ea0
// 00734771  6a01                 push 1
// 00734773  57                   push edi
// 00734774  e847ccfeff           call 0x7213c0
// 00734779  8be8                 mov ebp, eax
// 0073477b  55                   push ebp
// 0073477c  6a02                 push 2
// 0073477e  57                   push edi
// 0073477f  e84ce9feff           call 0x7230d0
// 00734784  8bf0                 mov esi, eax
// 00734786  83c420               add esp, 0x20
// 00734789  83fe01               cmp esi, 1
// 0073478c  7c4f                 jl 0x7347dd
// 0073478e  3bf5                 cmp esi, ebp
// 00734790  7f4b                 jg 0x7347dd
// 00734792  56                   push esi
// 00734793  6a01                 push 1
// 00734795  57                   push edi
// 00734796  e8a5d0feff           call 0x721840
// 0073479b  83c40c               add esp, 0xc
// 0073479e  3bf5                 cmp esi, ebp
// 007347a0  7d20                 jge 0x7347c2
// 007347a2  53                   push ebx
// 007347a3  8d5e01               lea ebx, [esi + 1]
// 007347a6  53                   push ebx
// 007347a7  6a01                 push 1
// 007347a9  57                   push edi
// 007347aa  e891d0feff           call 0x721840
// 007347af  56                   push esi
// 007347b0  6a01                 push 1
// 007347b2  57                   push edi
// 007347b3  e808d3feff           call 0x721ac0
// 007347b8  8bf3                 mov esi, ebx
// 007347ba  83c418               add esp, 0x18
// 007347bd  3bf5                 cmp esi, ebp
// 007347bf  7ce2                 jl 0x7347a3
// 007347c1  5b                   pop ebx
// 007347c2  57                   push edi
// 007347c3  e828cdfeff           call 0x7214f0
// 007347c8  55                   push ebp
// 007347c9  6a01                 push 1
// 007347cb  57                   push edi
// 007347cc  e8efd2feff           call 0x721ac0
// 007347d1  83c410               add esp, 0x10
// 007347d4  5f                   pop edi
// 007347d5  5e                   pop esi
// 007347d6  b801000000           mov eax, 1
// 007347db  5d                   pop ebp
// 007347dc  c3                   ret 
// 007347dd  5f                   pop edi
// 007347de  5e                   pop esi
// 007347df  33c0                 xor eax, eax
// 007347e1  5d                   pop ebp
// 007347e2  c3                   ret 
// library lua-5.1.4/ltablib.c (function _tremove)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
