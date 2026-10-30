// from server: 100% by auto
// roc 2007-08 005c8ca0  unit: lua_exception  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c8ca0
//
// 005c8ca0  56                   push esi
// 005c8ca1  8b742408             mov esi, dword ptr [esp + 8]
// 005c8ca5  6a05                 push 5
// 005c8ca7  6a01                 push 1
// 005c8ca9  56                   push esi
// 005c8caa  e82166ffff           call 0x5bf2d0
// 005c8caf  68109b7b00           push 0x7b9b10
// 005c8cb4  56                   push esi
// 005c8cb5  e8265cffff           call 0x5be8e0
// 005c8cba  6a01                 push 1
// 005c8cbc  56                   push esi
// 005c8cbd  e87e4affff           call 0x5bd740
// 005c8cc2  83c41c               add esp, 0x1c
// 005c8cc5  b801000000           mov eax, 1
// 005c8cca  5e                   pop esi
// 005c8ccb  c3                   ret 
// library lua-5.1.4/ltablib.c (function _setn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
