// from server: 100% by auto
// roc 2008-06 00625270  unit: lua_exception  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625270
//
// 00625270  53                   push ebx
// 00625271  56                   push esi
// 00625272  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00625276  57                   push edi
// 00625277  6a05                 push 5
// 00625279  6a01                 push 1
// 0062527b  56                   push esi
// 0062527c  e8bfc3feff           call 0x611640
// 00625281  6a01                 push 1
// 00625283  56                   push esi
// 00625284  e8f7cdfeff           call 0x612080
// 00625289  6a06                 push 6
// 0062528b  6a02                 push 2
// 0062528d  56                   push esi
// 0062528e  8bd8                 mov ebx, eax
// 00625290  e8abc3feff           call 0x611640
// 00625295  bf01000000           mov edi, 1
// 0062529a  83c420               add esp, 0x20
// 0062529d  3bdf                 cmp ebx, edi
// 0062529f  7c41                 jl 0x6252e2
// 006252a1  6a02                 push 2
// 006252a3  56                   push esi
// 006252a4  e827cbfeff           call 0x611dd0
// 006252a9  57                   push edi
// 006252aa  56                   push esi
// 006252ab  e870cffeff           call 0x612220
// 006252b0  57                   push edi
// 006252b1  6a01                 push 1
// 006252b3  56                   push esi
// 006252b4  e877d2feff           call 0x612530
// 006252b9  6a01                 push 1
// 006252bb  6a02                 push 2
// 006252bd  56                   push esi
// 006252be  e85dd6feff           call 0x612920
// 006252c3  6aff                 push -1
// 006252c5  56                   push esi
// 006252c6  e835cbfeff           call 0x611e00
// 006252cb  83c430               add esp, 0x30
// 006252ce  85c0                 test eax, eax
// 006252d0  7516                 jne 0x6252e8
// 006252d2  6afe                 push -2
// 006252d4  56                   push esi
// 006252d5  e846c9feff           call 0x611c20
// 006252da  47                   inc edi
// 006252db  83c408               add esp, 8
// 006252de  3bfb                 cmp edi, ebx
// 006252e0  7ebf                 jle 0x6252a1
// 006252e2  5f                   pop edi
// 006252e3  5e                   pop esi
// 006252e4  33c0                 xor eax, eax
// 006252e6  5b                   pop ebx
// 006252e7  c3                   ret 
// 006252e8  5f                   pop edi
// 006252e9  5e                   pop esi
// 006252ea  b801000000           mov eax, 1
// 006252ef  5b                   pop ebx
// 006252f0  c3                   ret 
// library lua-5.1.4/ltablib.c (function _foreachi)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
