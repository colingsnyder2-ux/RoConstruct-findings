// from server: 100% by auto
// roc 2007-08 005c8b40  unit: lua_exception  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c8b40
//
// 005c8b40  56                   push esi
// 005c8b41  8b742408             mov esi, dword ptr [esp + 8]
// 005c8b45  6a05                 push 5
// 005c8b47  6a01                 push 1
// 005c8b49  56                   push esi
// 005c8b4a  e88167ffff           call 0x5bf2d0
// 005c8b4f  6a06                 push 6
// 005c8b51  6a02                 push 2
// 005c8b53  56                   push esi
// 005c8b54  e87767ffff           call 0x5bf2d0
// 005c8b59  56                   push esi
// 005c8b5a  e8f14fffff           call 0x5bdb50
// 005c8b5f  6a01                 push 1
// 005c8b61  56                   push esi
// 005c8b62  e88959ffff           call 0x5be4f0
// 005c8b67  83c424               add esp, 0x24
// 005c8b6a  85c0                 test eax, eax
// 005c8b6c  744a                 je 0x5c8bb8
// 005c8b6e  8bff                 mov edi, edi
// 005c8b70  6a02                 push 2
// 005c8b72  56                   push esi
// 005c8b73  e8c84bffff           call 0x5bd740
// 005c8b78  6afd                 push -3
// 005c8b7a  56                   push esi
// 005c8b7b  e8c04bffff           call 0x5bd740
// 005c8b80  6afd                 push -3
// 005c8b82  56                   push esi
// 005c8b83  e8b84bffff           call 0x5bd740
// 005c8b88  6a01                 push 1
// 005c8b8a  6a02                 push 2
// 005c8b8c  56                   push esi
// 005c8b8d  e8fe56ffff           call 0x5be290
// 005c8b92  6aff                 push -1
// 005c8b94  56                   push esi
// 005c8b95  e8d64bffff           call 0x5bd770
// 005c8b9a  83c42c               add esp, 0x2c
// 005c8b9d  85c0                 test eax, eax
// 005c8b9f  751b                 jne 0x5c8bbc
// 005c8ba1  6afd                 push -3
// 005c8ba3  56                   push esi
// 005c8ba4  e8e749ffff           call 0x5bd590
// 005c8ba9  6a01                 push 1
// 005c8bab  56                   push esi
// 005c8bac  e83f59ffff           call 0x5be4f0
// 005c8bb1  83c410               add esp, 0x10
// 005c8bb4  85c0                 test eax, eax
// 005c8bb6  75b8                 jne 0x5c8b70
// 005c8bb8  33c0                 xor eax, eax
// 005c8bba  5e                   pop esi
// 005c8bbb  c3                   ret 
// 005c8bbc  b801000000           mov eax, 1
// 005c8bc1  5e                   pop esi
// 005c8bc2  c3                   ret 
// library lua-5.1.4/ltablib.c (function _foreach)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
