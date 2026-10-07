// roc 2009-06 006bac90  unit: RBX::UniversalTool  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bac90
//
// 006bac90  56                   push esi
// 006bac91  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006bac95  57                   push edi
// 006bac96  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006bac9a  56                   push esi
// 006bac9b  57                   push edi
// 006bac9c  e8cfe2ffff           call 0x6b8f70
// 006baca1  83c408               add esp, 8
// 006baca4  83f8ff               cmp eax, -1
// 006baca7  750f                 jne 0x6bacb8
// 006baca9  68c0af8e00           push 0x8eafc0
// 006bacae  56                   push esi
// 006bacaf  57                   push edi
// 006bacb0  e81bfeffff           call 0x6baad0
// 006bacb5  83c40c               add esp, 0xc
// 006bacb8  5f                   pop edi
// 006bacb9  5e                   pop esi
// 006bacba  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkany)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
