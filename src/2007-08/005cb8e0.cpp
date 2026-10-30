// from server: 100% by auto
// roc 2007-08 005cb8e0  unit: seg_005c0000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cb8e0
//
// 005cb8e0  56                   push esi
// 005cb8e1  8b742408             mov esi, dword ptr [esp + 8]
// 005cb8e5  57                   push edi
// 005cb8e6  6a01                 push 1
// 005cb8e8  6a02                 push 2
// 005cb8ea  56                   push esi
// 005cb8eb  e8103cffff           call 0x5bf500
// 005cb8f0  6a01                 push 1
// 005cb8f2  56                   push esi
// 005cb8f3  8bf8                 mov edi, eax
// 005cb8f5  e8961cffff           call 0x5bd590
// 005cb8fa  6a01                 push 1
// 005cb8fc  56                   push esi
// 005cb8fd  e81e1fffff           call 0x5bd820
// 005cb902  83c41c               add esp, 0x1c
// 005cb905  85c0                 test eax, eax
// 005cb907  741e                 je 0x5cb927
// 005cb909  85ff                 test edi, edi
// 005cb90b  7e1a                 jle 0x5cb927
// 005cb90d  57                   push edi
// 005cb90e  56                   push esi
// 005cb90f  e85c2fffff           call 0x5be870
// 005cb914  6a01                 push 1
// 005cb916  56                   push esi
// 005cb917  e8241effff           call 0x5bd740
// 005cb91c  6a02                 push 2
// 005cb91e  56                   push esi
// 005cb91f  e80c2cffff           call 0x5be530
// 005cb924  83c418               add esp, 0x18
// 005cb927  56                   push esi
// 005cb928  e8b32bffff           call 0x5be4e0
// 005cb92d  83c404               add esp, 4
// 005cb930  5f                   pop edi
// 005cb931  5e                   pop esi
// 005cb932  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
