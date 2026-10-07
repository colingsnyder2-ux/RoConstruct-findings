// roc 2012-06 00855510  unit: lua_exception  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00855510
//
// 00855510  55                   push ebp
// 00855511  56                   push esi
// 00855512  57                   push edi
// 00855513  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00855517  6a05                 push 5
// 00855519  6a01                 push 1
// 0085551b  57                   push edi
// 0085551c  e87fe3fdff           call 0x8338a0
// 00855521  6a01                 push 1
// 00855523  57                   push edi
// 00855524  e837cafdff           call 0x831f60
// 00855529  8be8                 mov ebp, eax
// 0085552b  55                   push ebp
// 0085552c  6a02                 push 2
// 0085552e  57                   push edi
// 0085552f  e89ce5fdff           call 0x833ad0
// 00855534  8bf0                 mov esi, eax
// 00855536  83c420               add esp, 0x20
// 00855539  83fe01               cmp esi, 1
// 0085553c  7c4f                 jl 0x85558d
// 0085553e  3bf5                 cmp esi, ebp
// 00855540  7f4b                 jg 0x85558d
// 00855542  56                   push esi
// 00855543  6a01                 push 1
// 00855545  57                   push edi
// 00855546  e895cefdff           call 0x8323e0
// 0085554b  83c40c               add esp, 0xc
// 0085554e  3bf5                 cmp esi, ebp
// 00855550  7d20                 jge 0x855572
// 00855552  53                   push ebx
// 00855553  8d5e01               lea ebx, [esi + 1]
// 00855556  53                   push ebx
// 00855557  6a01                 push 1
// 00855559  57                   push edi
// 0085555a  e881cefdff           call 0x8323e0
// 0085555f  56                   push esi
// 00855560  6a01                 push 1
// 00855562  57                   push edi
// 00855563  e8f8d0fdff           call 0x832660
// 00855568  8bf3                 mov esi, ebx
// 0085556a  83c418               add esp, 0x18
// 0085556d  3bf5                 cmp esi, ebp
// 0085556f  7ce2                 jl 0x855553
// 00855571  5b                   pop ebx
// 00855572  57                   push edi
// 00855573  e818cbfdff           call 0x832090
// 00855578  55                   push ebp
// 00855579  6a01                 push 1
// 0085557b  57                   push edi
// 0085557c  e8dfd0fdff           call 0x832660
// 00855581  83c410               add esp, 0x10
// 00855584  5f                   pop edi
// 00855585  5e                   pop esi
// 00855586  b801000000           mov eax, 1
// 0085558b  5d                   pop ebp
// 0085558c  c3                   ret 
// 0085558d  5f                   pop edi
// 0085558e  5e                   pop esi
// 0085558f  33c0                 xor eax, eax
// 00855591  5d                   pop ebp
// 00855592  c3                   ret 
// library lua-5.1.4/ltablib.c (function _tremove)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
