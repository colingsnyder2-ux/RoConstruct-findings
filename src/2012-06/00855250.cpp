// roc 2012-06 00855250  unit: lua_exception  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00855250
//
// 00855250  53                   push ebx
// 00855251  56                   push esi
// 00855252  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00855256  57                   push edi
// 00855257  6a05                 push 5
// 00855259  6a01                 push 1
// 0085525b  56                   push esi
// 0085525c  e83fe6fdff           call 0x8338a0
// 00855261  6a01                 push 1
// 00855263  56                   push esi
// 00855264  e8f7ccfdff           call 0x831f60
// 00855269  6a06                 push 6
// 0085526b  6a02                 push 2
// 0085526d  56                   push esi
// 0085526e  8bd8                 mov ebx, eax
// 00855270  e82be6fdff           call 0x8338a0
// 00855275  bf01000000           mov edi, 1
// 0085527a  83c420               add esp, 0x20
// 0085527d  3bdf                 cmp ebx, edi
// 0085527f  7c41                 jl 0x8552c2
// 00855281  6a02                 push 2
// 00855283  56                   push esi
// 00855284  e827cafdff           call 0x831cb0
// 00855289  57                   push edi
// 0085528a  56                   push esi
// 0085528b  e840cefdff           call 0x8320d0
// 00855290  57                   push edi
// 00855291  6a01                 push 1
// 00855293  56                   push esi
// 00855294  e847d1fdff           call 0x8323e0
// 00855299  6a01                 push 1
// 0085529b  6a02                 push 2
// 0085529d  56                   push esi
// 0085529e  e86dd5fdff           call 0x832810
// 008552a3  6aff                 push -1
// 008552a5  56                   push esi
// 008552a6  e835cafdff           call 0x831ce0
// 008552ab  83c430               add esp, 0x30
// 008552ae  85c0                 test eax, eax
// 008552b0  7516                 jne 0x8552c8
// 008552b2  6afe                 push -2
// 008552b4  56                   push esi
// 008552b5  e846c8fdff           call 0x831b00
// 008552ba  47                   inc edi
// 008552bb  83c408               add esp, 8
// 008552be  3bfb                 cmp edi, ebx
// 008552c0  7ebf                 jle 0x855281
// 008552c2  5f                   pop edi
// 008552c3  5e                   pop esi
// 008552c4  33c0                 xor eax, eax
// 008552c6  5b                   pop ebx
// 008552c7  c3                   ret 
// 008552c8  5f                   pop edi
// 008552c9  5e                   pop esi
// 008552ca  b801000000           mov eax, 1
// 008552cf  5b                   pop ebx
// 008552d0  c3                   ret 
// library lua-5.1.4/ltablib.c (function _foreachi)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
