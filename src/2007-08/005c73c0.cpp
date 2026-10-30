// from server: 100% by auto
// roc 2007-08 005c73c0  unit: lua_exception  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c73c0
//
// 005c73c0  56                   push esi
// 005c73c1  8b742408             mov esi, dword ptr [esp + 8]
// 005c73c5  57                   push edi
// 005c73c6  6a01                 push 1
// 005c73c8  56                   push esi
// 005c73c9  e8527fffff           call 0x5bf320
// 005c73ce  6a01                 push 1
// 005c73d0  56                   push esi
// 005c73d1  e8ba66ffff           call 0x5bda90
// 005c73d6  6844997b00           push 0x7b9944
// 005c73db  68f0d8ffff           push 0xffffd8f0
// 005c73e0  56                   push esi
// 005c73e1  8bf8                 mov edi, eax
// 005c73e3  e8186affff           call 0x5bde00
// 005c73e8  83c41c               add esp, 0x1c
// 005c73eb  85ff                 test edi, edi
// 005c73ed  7455                 je 0x5c7444
// 005c73ef  6a01                 push 1
// 005c73f1  56                   push esi
// 005c73f2  e8296bffff           call 0x5bdf20
// 005c73f7  83c408               add esp, 8
// 005c73fa  85c0                 test eax, eax
// 005c73fc  7446                 je 0x5c7444
// 005c73fe  6aff                 push -1
// 005c7400  6afe                 push -2
// 005c7402  56                   push esi
// 005c7403  e84864ffff           call 0x5bd850
// 005c7408  83c40c               add esp, 0xc
// 005c740b  85c0                 test eax, eax
// 005c740d  7435                 je 0x5c7444
// 005c740f  833f00               cmp dword ptr [edi], 0
// 005c7412  7518                 jne 0x5c742c
// 005c7414  6a0b                 push 0xb
// 005c7416  6838997b00           push 0x7b9938
// 005c741b  56                   push esi
// 005c741c  e88f67ffff           call 0x5bdbb0
// 005c7421  83c40c               add esp, 0xc
// 005c7424  5f                   pop edi
// 005c7425  b801000000           mov eax, 1
// 005c742a  5e                   pop esi
// 005c742b  c3                   ret 
// 005c742c  6a04                 push 4
// 005c742e  68746f7800           push 0x786f74
// 005c7433  56                   push esi
// 005c7434  e87767ffff           call 0x5bdbb0
// 005c7439  83c40c               add esp, 0xc
// 005c743c  5f                   pop edi
// 005c743d  b801000000           mov eax, 1
// 005c7442  5e                   pop esi
// 005c7443  c3                   ret 
// 005c7444  56                   push esi
// 005c7445  e80667ffff           call 0x5bdb50
// 005c744a  83c404               add esp, 4
// 005c744d  5f                   pop edi
// 005c744e  b801000000           mov eax, 1
// 005c7453  5e                   pop esi
// 005c7454  c3                   ret 
// library lua-5.1.4/liolib.c (function _io_type)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
