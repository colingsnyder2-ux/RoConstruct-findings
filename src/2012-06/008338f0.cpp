// from server: 100% by auto
// roc 2012-06 008338f0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008338f0
//
// 008338f0  56                   push esi
// 008338f1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008338f5  57                   push edi
// 008338f6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008338fa  56                   push esi
// 008338fb  57                   push edi
// 008338fc  e8dfe3ffff           call 0x831ce0
// 00833901  83c408               add esp, 8
// 00833904  83f8ff               cmp eax, -1
// 00833907  750f                 jne 0x833918
// 00833909  68e80abd00           push 0xbd0ae8
// 0083390e  56                   push esi
// 0083390f  57                   push edi
// 00833910  e81bfeffff           call 0x833730
// 00833915  83c40c               add esp, 0xc
// 00833918  5f                   pop edi
// 00833919  5e                   pop esi
// 0083391a  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkany)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
