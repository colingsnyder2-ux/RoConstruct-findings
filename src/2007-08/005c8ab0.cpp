// roc 2007-08 005c8ab0  unit: lua_exception  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c8ab0
//
// 005c8ab0  53                   push ebx
// 005c8ab1  56                   push esi
// 005c8ab2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c8ab6  57                   push edi
// 005c8ab7  6a05                 push 5
// 005c8ab9  6a01                 push 1
// 005c8abb  56                   push esi
// 005c8abc  e80f68ffff           call 0x5bf2d0
// 005c8ac1  6a01                 push 1
// 005c8ac3  56                   push esi
// 005c8ac4  e8274fffff           call 0x5bd9f0
// 005c8ac9  6a06                 push 6
// 005c8acb  6a02                 push 2
// 005c8acd  56                   push esi
// 005c8ace  8bd8                 mov ebx, eax
// 005c8ad0  e8fb67ffff           call 0x5bf2d0
// 005c8ad5  bf01000000           mov edi, 1
// 005c8ada  83c420               add esp, 0x20
// 005c8add  3bdf                 cmp ebx, edi
// 005c8adf  7c43                 jl 0x5c8b24
// 005c8ae1  6a02                 push 2
// 005c8ae3  56                   push esi
// 005c8ae4  e8574cffff           call 0x5bd740
// 005c8ae9  57                   push edi
// 005c8aea  56                   push esi
// 005c8aeb  e8a050ffff           call 0x5bdb90
// 005c8af0  57                   push edi
// 005c8af1  6a01                 push 1
// 005c8af3  56                   push esi
// 005c8af4  e8a753ffff           call 0x5bdea0
// 005c8af9  6a01                 push 1
// 005c8afb  6a02                 push 2
// 005c8afd  56                   push esi
// 005c8afe  e88d57ffff           call 0x5be290
// 005c8b03  6aff                 push -1
// 005c8b05  56                   push esi
// 005c8b06  e8654cffff           call 0x5bd770
// 005c8b0b  83c430               add esp, 0x30
// 005c8b0e  85c0                 test eax, eax
// 005c8b10  7518                 jne 0x5c8b2a
// 005c8b12  6afe                 push -2
// 005c8b14  56                   push esi
// 005c8b15  e8764affff           call 0x5bd590
// 005c8b1a  83c701               add edi, 1
// 005c8b1d  83c408               add esp, 8
// 005c8b20  3bfb                 cmp edi, ebx
// 005c8b22  7ebd                 jle 0x5c8ae1
// 005c8b24  5f                   pop edi
// 005c8b25  5e                   pop esi
// 005c8b26  33c0                 xor eax, eax
// 005c8b28  5b                   pop ebx
// 005c8b29  c3                   ret 
// 005c8b2a  5f                   pop edi
// 005c8b2b  5e                   pop esi
// 005c8b2c  b801000000           mov eax, 1
// 005c8b31  5b                   pop ebx
// 005c8b32  c3                   ret 
// library lua-5.1.4/ltablib.c (function _foreachi)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
