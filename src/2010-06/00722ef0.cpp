// from server: 100% by auto
// roc 2010-06 00722ef0  unit: RBX::UniversalTool  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722ef0
//
// 00722ef0  56                   push esi
// 00722ef1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00722ef5  57                   push edi
// 00722ef6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00722efa  56                   push esi
// 00722efb  57                   push edi
// 00722efc  e83fe2ffff           call 0x721140
// 00722f01  83c408               add esp, 8
// 00722f04  83f8ff               cmp eax, -1
// 00722f07  750f                 jne 0x722f18
// 00722f09  68a8cfa400           push 0xa4cfa8
// 00722f0e  56                   push esi
// 00722f0f  57                   push edi
// 00722f10  e81bfeffff           call 0x722d30
// 00722f15  83c40c               add esp, 0xc
// 00722f18  5f                   pop edi
// 00722f19  5e                   pop esi
// 00722f1a  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkany)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
