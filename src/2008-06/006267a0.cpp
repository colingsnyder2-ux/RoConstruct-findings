// from server: 100% by auto
// roc 2008-06 006267a0  unit: seg_00620000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006267a0
//
// 006267a0  81ec0c020000         sub esp, 0x20c
// 006267a6  56                   push esi
// 006267a7  8bb42414020000       mov esi, dword ptr [esp + 0x214]
// 006267ae  6a06                 push 6
// 006267b0  6a01                 push 1
// 006267b2  56                   push esi
// 006267b3  e888aefeff           call 0x611640
// 006267b8  6a01                 push 1
// 006267ba  56                   push esi
// 006267bb  e860b4feff           call 0x611c20
// 006267c0  8d442418             lea eax, [esp + 0x18]
// 006267c4  50                   push eax
// 006267c5  56                   push esi
// 006267c6  e8d5a8feff           call 0x6110a0
// 006267cb  8d4c2420             lea ecx, [esp + 0x20]
// 006267cf  51                   push ecx
// 006267d0  6880676200           push 0x626780
// 006267d5  56                   push esi
// 006267d6  e855c2feff           call 0x612a30
// 006267db  83c428               add esp, 0x28
// 006267de  85c0                 test eax, eax
// 006267e0  740e                 je 0x6267f0
// 006267e2  6820518400           push 0x845120
// 006267e7  56                   push esi
// 006267e8  e873a4feff           call 0x610c60
// 006267ed  83c408               add esp, 8
// 006267f0  8d542404             lea edx, [esp + 4]
// 006267f4  52                   push edx
// 006267f5  e8e6a7feff           call 0x610fe0
// 006267fa  83c404               add esp, 4
// 006267fd  b801000000           mov eax, 1
// 00626802  5e                   pop esi
// 00626803  81c40c020000         add esp, 0x20c
// 00626809  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_dump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
