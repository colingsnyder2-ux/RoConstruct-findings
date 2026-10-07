// roc 2012-06 00833810  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00833810
//
// 00833810  53                   push ebx
// 00833811  55                   push ebp
// 00833812  56                   push esi
// 00833813  8b742410             mov esi, dword ptr [esp + 0x10]
// 00833817  57                   push edi
// 00833818  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0083381c  57                   push edi
// 0083381d  56                   push esi
// 0083381e  e8ade7ffff           call 0x831fd0
// 00833823  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00833827  8bd8                 mov ebx, eax
// 00833829  83c408               add esp, 8
// 0083382c  85db                 test ebx, ebx
// 0083382e  743d                 je 0x83386d
// 00833830  57                   push edi
// 00833831  56                   push esi
// 00833832  e849ecffff           call 0x832480
// 00833837  83c408               add esp, 8
// 0083383a  85c0                 test eax, eax
// 0083383c  742f                 je 0x83386d
// 0083383e  55                   push ebp
// 0083383f  68f0d8ffff           push 0xffffd8f0
// 00833844  56                   push esi
// 00833845  e8f6eaffff           call 0x832340
// 0083384a  6afe                 push -2
// 0083384c  6aff                 push -1
// 0083384e  56                   push esi
// 0083384f  e86ce5ffff           call 0x831dc0
// 00833854  83c418               add esp, 0x18
// 00833857  85c0                 test eax, eax
// 00833859  7412                 je 0x83386d
// 0083385b  6afd                 push -3
// 0083385d  56                   push esi
// 0083385e  e89de2ffff           call 0x831b00
// 00833863  83c408               add esp, 8
// 00833866  5f                   pop edi
// 00833867  5e                   pop esi
// 00833868  5d                   pop ebp
// 00833869  8bc3                 mov eax, ebx
// 0083386b  5b                   pop ebx
// 0083386c  c3                   ret 
// 0083386d  57                   push edi
// 0083386e  56                   push esi
// 0083386f  e86ce4ffff           call 0x831ce0
// 00833874  50                   push eax
// 00833875  56                   push esi
// 00833876  e885e4ffff           call 0x831d00
// 0083387b  50                   push eax
// 0083387c  55                   push ebp
// 0083387d  68d40abd00           push 0xbd0ad4
// 00833882  56                   push esi
// 00833883  e848e9ffff           call 0x8321d0
// 00833888  50                   push eax
// 00833889  57                   push edi
// 0083388a  56                   push esi
// 0083388b  e8a0feffff           call 0x833730
// 00833890  83c42c               add esp, 0x2c
// 00833893  5f                   pop edi
// 00833894  5e                   pop esi
// 00833895  5d                   pop ebp
// 00833896  33c0                 xor eax, eax
// 00833898  5b                   pop ebx
// 00833899  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkudata)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
