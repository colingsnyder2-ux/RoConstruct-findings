// roc 2007-08 005c8e00  unit: lua_exception  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c8e00
//
// 005c8e00  81ec10020000         sub esp, 0x210
// 005c8e06  53                   push ebx
// 005c8e07  55                   push ebp
// 005c8e08  56                   push esi
// 005c8e09  8bb42420020000       mov esi, dword ptr [esp + 0x220]
// 005c8e10  57                   push edi
// 005c8e11  8d442410             lea eax, [esp + 0x10]
// 005c8e15  50                   push eax
// 005c8e16  6854597800           push 0x785954
// 005c8e1b  6a02                 push 2
// 005c8e1d  56                   push esi
// 005c8e1e  e88d65ffff           call 0x5bf3b0
// 005c8e23  6a05                 push 5
// 005c8e25  6a01                 push 1
// 005c8e27  56                   push esi
// 005c8e28  8be8                 mov ebp, eax
// 005c8e2a  e8a164ffff           call 0x5bf2d0
// 005c8e2f  6a01                 push 1
// 005c8e31  6a03                 push 3
// 005c8e33  56                   push esi
// 005c8e34  e8c766ffff           call 0x5bf500
// 005c8e39  6a04                 push 4
// 005c8e3b  56                   push esi
// 005c8e3c  8bf8                 mov edi, eax
// 005c8e3e  e82d49ffff           call 0x5bd770
// 005c8e43  83c430               add esp, 0x30
// 005c8e46  85c0                 test eax, eax
// 005c8e48  7f0a                 jg 0x5c8e54
// 005c8e4a  6a01                 push 1
// 005c8e4c  56                   push esi
// 005c8e4d  e89e4bffff           call 0x5bd9f0
// 005c8e52  eb08                 jmp 0x5c8e5c
// 005c8e54  6a04                 push 4
// 005c8e56  56                   push esi
// 005c8e57  e83466ffff           call 0x5bf490
// 005c8e5c  83c408               add esp, 8
// 005c8e5f  8d4c2414             lea ecx, [esp + 0x14]
// 005c8e63  51                   push ecx
// 005c8e64  56                   push esi
// 005c8e65  8bd8                 mov ebx, eax
// 005c8e67  e8d45effff           call 0x5bed40
// 005c8e6c  83c408               add esp, 8
// 005c8e6f  3bfb                 cmp edi, ebx
// 005c8e71  7f53                 jg 0x5c8ec6
// 005c8e73  57                   push edi
// 005c8e74  6a01                 push 1
// 005c8e76  56                   push esi
// 005c8e77  e82450ffff           call 0x5bdea0
// 005c8e7c  6aff                 push -1
// 005c8e7e  56                   push esi
// 005c8e7f  e89c49ffff           call 0x5bd820
// 005c8e84  83c414               add esp, 0x14
// 005c8e87  85c0                 test eax, eax
// 005c8e89  7510                 jne 0x5c8e9b
// 005c8e8b  684c9b7b00           push 0x7b9b4c
// 005c8e90  6a01                 push 1
// 005c8e92  56                   push esi
// 005c8e93  e8e862ffff           call 0x5bf180
// 005c8e98  83c40c               add esp, 0xc
// 005c8e9b  8d542414             lea edx, [esp + 0x14]
// 005c8e9f  52                   push edx
// 005c8ea0  e80b5effff           call 0x5becb0
// 005c8ea5  83c404               add esp, 4
// 005c8ea8  3bfb                 cmp edi, ebx
// 005c8eaa  7413                 je 0x5c8ebf
// 005c8eac  8b442410             mov eax, dword ptr [esp + 0x10]
// 005c8eb0  50                   push eax
// 005c8eb1  8d4c2418             lea ecx, [esp + 0x18]
// 005c8eb5  55                   push ebp
// 005c8eb6  51                   push ecx
// 005c8eb7  e8545dffff           call 0x5bec10
// 005c8ebc  83c40c               add esp, 0xc
// 005c8ebf  83c701               add edi, 1
// 005c8ec2  3bfb                 cmp edi, ebx
// 005c8ec4  7ead                 jle 0x5c8e73
// 005c8ec6  8d542414             lea edx, [esp + 0x14]
// 005c8eca  52                   push edx
// 005c8ecb  e8a05dffff           call 0x5bec70
// 005c8ed0  83c404               add esp, 4
// 005c8ed3  5f                   pop edi
// 005c8ed4  5e                   pop esi
// 005c8ed5  5d                   pop ebp
// 005c8ed6  b801000000           mov eax, 1
// 005c8edb  5b                   pop ebx
// 005c8edc  81c410020000         add esp, 0x210
// 005c8ee2  c3                   ret 
// library lua-5.1.3/ltablib.c (function _tconcat)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.3 ltablib.c
