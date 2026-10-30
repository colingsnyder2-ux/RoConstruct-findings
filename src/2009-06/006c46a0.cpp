// from server: 100% by auto
// roc 2009-06 006c46a0  unit: lua_exception  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c46a0
//
// 006c46a0  56                   push esi
// 006c46a1  8b742408             mov esi, dword ptr [esp + 8]
// 006c46a5  57                   push edi
// 006c46a6  6a05                 push 5
// 006c46a8  6a01                 push 1
// 006c46aa  56                   push esi
// 006c46ab  e89065ffff           call 0x6bac40
// 006c46b0  6a01                 push 1
// 006c46b2  56                   push esi
// 006c46b3  e8384bffff           call 0x6b91f0
// 006c46b8  6816d28a00           push 0x8ad216
// 006c46bd  6a28                 push 0x28
// 006c46bf  56                   push esi
// 006c46c0  8bf8                 mov edi, eax
// 006c46c2  e8095cffff           call 0x6ba2d0
// 006c46c7  6a02                 push 2
// 006c46c9  56                   push esi
// 006c46ca  e8a148ffff           call 0x6b8f70
// 006c46cf  83c428               add esp, 0x28
// 006c46d2  85c0                 test eax, eax
// 006c46d4  7e0d                 jle 0x6c46e3
// 006c46d6  6a06                 push 6
// 006c46d8  6a02                 push 2
// 006c46da  56                   push esi
// 006c46db  e86065ffff           call 0x6bac40
// 006c46e0  83c40c               add esp, 0xc
// 006c46e3  6a02                 push 2
// 006c46e5  56                   push esi
// 006c46e6  e8a546ffff           call 0x6b8d90
// 006c46eb  57                   push edi
// 006c46ec  6a01                 push 1
// 006c46ee  56                   push esi
// 006c46ef  e8acfbffff           call 0x6c42a0
// 006c46f4  83c414               add esp, 0x14
// 006c46f7  5f                   pop edi
// 006c46f8  33c0                 xor eax, eax
// 006c46fa  5e                   pop esi
// 006c46fb  c3                   ret 
// library lua-5.1.4/ltablib.c (function _sort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
