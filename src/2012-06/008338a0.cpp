// from server: 100% by auto
// roc 2012-06 008338a0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008338a0
//
// 008338a0  56                   push esi
// 008338a1  8b742408             mov esi, dword ptr [esp + 8]
// 008338a5  57                   push edi
// 008338a6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008338aa  57                   push edi
// 008338ab  56                   push esi
// 008338ac  e82fe4ffff           call 0x831ce0
// 008338b1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008338b5  83c408               add esp, 8
// 008338b8  3bc1                 cmp eax, ecx
// 008338ba  7431                 je 0x8338ed
// 008338bc  53                   push ebx
// 008338bd  51                   push ecx
// 008338be  56                   push esi
// 008338bf  e83ce4ffff           call 0x831d00
// 008338c4  57                   push edi
// 008338c5  56                   push esi
// 008338c6  8bd8                 mov ebx, eax
// 008338c8  e813e4ffff           call 0x831ce0
// 008338cd  50                   push eax
// 008338ce  56                   push esi
// 008338cf  e82ce4ffff           call 0x831d00
// 008338d4  50                   push eax
// 008338d5  53                   push ebx
// 008338d6  68d40abd00           push 0xbd0ad4
// 008338db  56                   push esi
// 008338dc  e8efe8ffff           call 0x8321d0
// 008338e1  50                   push eax
// 008338e2  57                   push edi
// 008338e3  56                   push esi
// 008338e4  e847feffff           call 0x833730
// 008338e9  83c434               add esp, 0x34
// 008338ec  5b                   pop ebx
// 008338ed  5f                   pop edi
// 008338ee  5e                   pop esi
// 008338ef  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checktype)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
