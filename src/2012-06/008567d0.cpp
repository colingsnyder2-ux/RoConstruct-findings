// roc 2012-06 008567d0  unit: lua_exception  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008567d0
//
// 008567d0  81ec0c020000         sub esp, 0x20c
// 008567d6  56                   push esi
// 008567d7  8bb42414020000       mov esi, dword ptr [esp + 0x214]
// 008567de  6a06                 push 6
// 008567e0  6a01                 push 1
// 008567e2  56                   push esi
// 008567e3  e8b8d0fdff           call 0x8338a0
// 008567e8  6a01                 push 1
// 008567ea  56                   push esi
// 008567eb  e810b3fdff           call 0x831b00
// 008567f0  8d442418             lea eax, [esp + 0x18]
// 008567f4  50                   push eax
// 008567f5  56                   push esi
// 008567f6  e8e5cafdff           call 0x8332e0
// 008567fb  8d4c2420             lea ecx, [esp + 0x20]
// 008567ff  51                   push ecx
// 00856800  68b0678500           push 0x8567b0
// 00856805  56                   push esi
// 00856806  e815c1fdff           call 0x832920
// 0085680b  83c428               add esp, 0x28
// 0085680e  85c0                 test eax, eax
// 00856810  740e                 je 0x856820
// 00856812  68a83dbd00           push 0xbd3da8
// 00856817  56                   push esi
// 00856818  e883c6fdff           call 0x832ea0
// 0085681d  83c408               add esp, 8
// 00856820  8d542404             lea edx, [esp + 4]
// 00856824  52                   push edx
// 00856825  e8f6c9fdff           call 0x833220
// 0085682a  83c404               add esp, 4
// 0085682d  b801000000           mov eax, 1
// 00856832  5e                   pop esi
// 00856833  81c40c020000         add esp, 0x20c
// 00856839  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_dump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
