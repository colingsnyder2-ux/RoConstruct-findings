// from server: 100% by auto
// roc 2009-06 006c3e00  unit: lua_exception  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c3e00
//
// 006c3e00  53                   push ebx
// 006c3e01  56                   push esi
// 006c3e02  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c3e06  57                   push edi
// 006c3e07  6a05                 push 5
// 006c3e09  6a01                 push 1
// 006c3e0b  56                   push esi
// 006c3e0c  e82f6effff           call 0x6bac40
// 006c3e11  6a01                 push 1
// 006c3e13  56                   push esi
// 006c3e14  e8d753ffff           call 0x6b91f0
// 006c3e19  6a06                 push 6
// 006c3e1b  6a02                 push 2
// 006c3e1d  56                   push esi
// 006c3e1e  8bd8                 mov ebx, eax
// 006c3e20  e81b6effff           call 0x6bac40
// 006c3e25  bf01000000           mov edi, 1
// 006c3e2a  83c420               add esp, 0x20
// 006c3e2d  3bdf                 cmp ebx, edi
// 006c3e2f  7c41                 jl 0x6c3e72
// 006c3e31  6a02                 push 2
// 006c3e33  56                   push esi
// 006c3e34  e80751ffff           call 0x6b8f40
// 006c3e39  57                   push edi
// 006c3e3a  56                   push esi
// 006c3e3b  e82055ffff           call 0x6b9360
// 006c3e40  57                   push edi
// 006c3e41  6a01                 push 1
// 006c3e43  56                   push esi
// 006c3e44  e82758ffff           call 0x6b9670
// 006c3e49  6a01                 push 1
// 006c3e4b  6a02                 push 2
// 006c3e4d  56                   push esi
// 006c3e4e  e84d5cffff           call 0x6b9aa0
// 006c3e53  6aff                 push -1
// 006c3e55  56                   push esi
// 006c3e56  e81551ffff           call 0x6b8f70
// 006c3e5b  83c430               add esp, 0x30
// 006c3e5e  85c0                 test eax, eax
// 006c3e60  7516                 jne 0x6c3e78
// 006c3e62  6afe                 push -2
// 006c3e64  56                   push esi
// 006c3e65  e8264fffff           call 0x6b8d90
// 006c3e6a  47                   inc edi
// 006c3e6b  83c408               add esp, 8
// 006c3e6e  3bfb                 cmp edi, ebx
// 006c3e70  7ebf                 jle 0x6c3e31
// 006c3e72  5f                   pop edi
// 006c3e73  5e                   pop esi
// 006c3e74  33c0                 xor eax, eax
// 006c3e76  5b                   pop ebx
// 006c3e77  c3                   ret 
// 006c3e78  5f                   pop edi
// 006c3e79  5e                   pop esi
// 006c3e7a  b801000000           mov eax, 1
// 006c3e7f  5b                   pop ebx
// 006c3e80  c3                   ret 
// library lua-5.1.4/ltablib.c (function _foreachi)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
