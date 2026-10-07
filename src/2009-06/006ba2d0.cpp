// roc 2009-06 006ba2d0  unit: RBX::UniversalTool  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ba2d0
//
// 006ba2d0  8b442408             mov eax, dword ptr [esp + 8]
// 006ba2d4  56                   push esi
// 006ba2d5  8b742408             mov esi, dword ptr [esp + 8]
// 006ba2d9  50                   push eax
// 006ba2da  56                   push esi
// 006ba2db  e8a0e9ffff           call 0x6b8c80
// 006ba2e0  83c408               add esp, 8
// 006ba2e3  85c0                 test eax, eax
// 006ba2e5  7513                 jne 0x6ba2fa
// 006ba2e7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006ba2eb  51                   push ecx
// 006ba2ec  6800af8e00           push 0x8eaf00
// 006ba2f1  56                   push esi
// 006ba2f2  e849ffffff           call 0x6ba240
// 006ba2f7  83c40c               add esp, 0xc
// 006ba2fa  5e                   pop esi
// 006ba2fb  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
