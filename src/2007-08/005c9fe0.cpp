// roc 2007-08 005c9fe0  unit: seg_005c0000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9fe0
//
// 005c9fe0  81ec0c020000         sub esp, 0x20c
// 005c9fe6  56                   push esi
// 005c9fe7  8bb42414020000       mov esi, dword ptr [esp + 0x214]
// 005c9fee  6a06                 push 6
// 005c9ff0  6a01                 push 1
// 005c9ff2  56                   push esi
// 005c9ff3  e8d852ffff           call 0x5bf2d0
// 005c9ff8  6a01                 push 1
// 005c9ffa  56                   push esi
// 005c9ffb  e89035ffff           call 0x5bd590
// 005ca000  8d442418             lea eax, [esp + 0x18]
// 005ca004  50                   push eax
// 005ca005  56                   push esi
// 005ca006  e8354dffff           call 0x5bed40
// 005ca00b  8d4c2420             lea ecx, [esp + 0x20]
// 005ca00f  51                   push ecx
// 005ca010  68c09f5c00           push 0x5c9fc0
// 005ca015  56                   push esi
// 005ca016  e88543ffff           call 0x5be3a0
// 005ca01b  83c428               add esp, 0x28
// 005ca01e  85c0                 test eax, eax
// 005ca020  740e                 je 0x5ca030
// 005ca022  68a09e7b00           push 0x7b9ea0
// 005ca027  56                   push esi
// 005ca028  e8b348ffff           call 0x5be8e0
// 005ca02d  83c408               add esp, 8
// 005ca030  8d542404             lea edx, [esp + 4]
// 005ca034  52                   push edx
// 005ca035  e8364cffff           call 0x5bec70
// 005ca03a  83c404               add esp, 4
// 005ca03d  b801000000           mov eax, 1
// 005ca042  5e                   pop esi
// 005ca043  81c40c020000         add esp, 0x20c
// 005ca049  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_dump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
