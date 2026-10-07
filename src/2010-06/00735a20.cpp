// roc 2010-06 00735a20  unit: seg_00730000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00735a20
//
// 00735a20  81ec0c020000         sub esp, 0x20c
// 00735a26  56                   push esi
// 00735a27  8bb42414020000       mov esi, dword ptr [esp + 0x214]
// 00735a2e  6a06                 push 6
// 00735a30  6a01                 push 1
// 00735a32  56                   push esi
// 00735a33  e868d4feff           call 0x722ea0
// 00735a38  6a01                 push 1
// 00735a3a  56                   push esi
// 00735a3b  e820b5feff           call 0x720f60
// 00735a40  8d442418             lea eax, [esp + 0x18]
// 00735a44  50                   push eax
// 00735a45  56                   push esi
// 00735a46  e895cefeff           call 0x7228e0
// 00735a4b  8d4c2420             lea ecx, [esp + 0x20]
// 00735a4f  51                   push ecx
// 00735a50  68005a7300           push 0x735a00
// 00735a55  56                   push esi
// 00735a56  e825c3feff           call 0x721d80
// 00735a5b  83c428               add esp, 0x28
// 00735a5e  85c0                 test eax, eax
// 00735a60  740e                 je 0x735a70
// 00735a62  68e8e2a400           push 0xa4e2e8
// 00735a67  56                   push esi
// 00735a68  e833cafeff           call 0x7224a0
// 00735a6d  83c408               add esp, 8
// 00735a70  8d542404             lea edx, [esp + 4]
// 00735a74  52                   push edx
// 00735a75  e8a6cdfeff           call 0x722820
// 00735a7a  83c404               add esp, 4
// 00735a7d  b801000000           mov eax, 1
// 00735a82  5e                   pop esi
// 00735a83  81c40c020000         add esp, 0x20c
// 00735a89  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_dump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
