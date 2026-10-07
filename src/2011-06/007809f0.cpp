// roc 2011-06 007809f0  unit: lua_exception  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007809f0
//
// 007809f0  81ec0c020000         sub esp, 0x20c
// 007809f6  56                   push esi
// 007809f7  8bb42414020000       mov esi, dword ptr [esp + 0x214]
// 007809fe  6a06                 push 6
// 00780a00  6a01                 push 1
// 00780a02  56                   push esi
// 00780a03  e80837feff           call 0x764110
// 00780a08  6a01                 push 1
// 00780a0a  56                   push esi
// 00780a0b  e86019feff           call 0x762370
// 00780a10  8d442418             lea eax, [esp + 0x18]
// 00780a14  50                   push eax
// 00780a15  56                   push esi
// 00780a16  e83531feff           call 0x763b50
// 00780a1b  8d4c2420             lea ecx, [esp + 0x20]
// 00780a1f  51                   push ecx
// 00780a20  68d0097800           push 0x7809d0
// 00780a25  56                   push esi
// 00780a26  e86527feff           call 0x763190
// 00780a2b  83c428               add esp, 0x28
// 00780a2e  85c0                 test eax, eax
// 00780a30  740e                 je 0x780a40
// 00780a32  68f87cab00           push 0xab7cf8
// 00780a37  56                   push esi
// 00780a38  e8d32cfeff           call 0x763710
// 00780a3d  83c408               add esp, 8
// 00780a40  8d542404             lea edx, [esp + 4]
// 00780a44  52                   push edx
// 00780a45  e84630feff           call 0x763a90
// 00780a4a  83c404               add esp, 4
// 00780a4d  b801000000           mov eax, 1
// 00780a52  5e                   pop esi
// 00780a53  81c40c020000         add esp, 0x20c
// 00780a59  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_dump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
