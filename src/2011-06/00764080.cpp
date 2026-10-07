// roc 2011-06 00764080  unit: seg_00760000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00764080
//
// 00764080  53                   push ebx
// 00764081  55                   push ebp
// 00764082  56                   push esi
// 00764083  8b742410             mov esi, dword ptr [esp + 0x10]
// 00764087  57                   push edi
// 00764088  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0076408c  57                   push edi
// 0076408d  56                   push esi
// 0076408e  e8ade7ffff           call 0x762840
// 00764093  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00764097  8bd8                 mov ebx, eax
// 00764099  83c408               add esp, 8
// 0076409c  85db                 test ebx, ebx
// 0076409e  743d                 je 0x7640dd
// 007640a0  57                   push edi
// 007640a1  56                   push esi
// 007640a2  e849ecffff           call 0x762cf0
// 007640a7  83c408               add esp, 8
// 007640aa  85c0                 test eax, eax
// 007640ac  742f                 je 0x7640dd
// 007640ae  55                   push ebp
// 007640af  68f0d8ffff           push 0xffffd8f0
// 007640b4  56                   push esi
// 007640b5  e8f6eaffff           call 0x762bb0
// 007640ba  6afe                 push -2
// 007640bc  6aff                 push -1
// 007640be  56                   push esi
// 007640bf  e86ce5ffff           call 0x762630
// 007640c4  83c418               add esp, 0x18
// 007640c7  85c0                 test eax, eax
// 007640c9  7412                 je 0x7640dd
// 007640cb  6afd                 push -3
// 007640cd  56                   push esi
// 007640ce  e89de2ffff           call 0x762370
// 007640d3  83c408               add esp, 8
// 007640d6  5f                   pop edi
// 007640d7  5e                   pop esi
// 007640d8  5d                   pop ebp
// 007640d9  8bc3                 mov eax, ebx
// 007640db  5b                   pop ebx
// 007640dc  c3                   ret 
// 007640dd  57                   push edi
// 007640de  56                   push esi
// 007640df  e86ce4ffff           call 0x762550
// 007640e4  50                   push eax
// 007640e5  56                   push esi
// 007640e6  e885e4ffff           call 0x762570
// 007640eb  50                   push eax
// 007640ec  55                   push ebp
// 007640ed  68b065ab00           push 0xab65b0
// 007640f2  56                   push esi
// 007640f3  e848e9ffff           call 0x762a40
// 007640f8  50                   push eax
// 007640f9  57                   push edi
// 007640fa  56                   push esi
// 007640fb  e8a0feffff           call 0x763fa0
// 00764100  83c42c               add esp, 0x2c
// 00764103  5f                   pop edi
// 00764104  5e                   pop esi
// 00764105  5d                   pop ebp
// 00764106  33c0                 xor eax, eax
// 00764108  5b                   pop ebx
// 00764109  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkudata)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
