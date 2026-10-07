// roc 2009-06 006c53b0  unit: lua_exception  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c53b0
//
// 006c53b0  81ec0c020000         sub esp, 0x20c
// 006c53b6  56                   push esi
// 006c53b7  8bb42414020000       mov esi, dword ptr [esp + 0x214]
// 006c53be  6a06                 push 6
// 006c53c0  6a01                 push 1
// 006c53c2  56                   push esi
// 006c53c3  e87858ffff           call 0x6bac40
// 006c53c8  6a01                 push 1
// 006c53ca  56                   push esi
// 006c53cb  e8c039ffff           call 0x6b8d90
// 006c53d0  8d442418             lea eax, [esp + 0x18]
// 006c53d4  50                   push eax
// 006c53d5  56                   push esi
// 006c53d6  e8a552ffff           call 0x6ba680
// 006c53db  8d4c2420             lea ecx, [esp + 0x20]
// 006c53df  51                   push ecx
// 006c53e0  6890536c00           push 0x6c5390
// 006c53e5  56                   push esi
// 006c53e6  e8c547ffff           call 0x6b9bb0
// 006c53eb  83c428               add esp, 0x28
// 006c53ee  85c0                 test eax, eax
// 006c53f0  740e                 je 0x6c5400
// 006c53f2  6868bb8e00           push 0x8ebb68
// 006c53f7  56                   push esi
// 006c53f8  e8434effff           call 0x6ba240
// 006c53fd  83c408               add esp, 8
// 006c5400  8d542404             lea edx, [esp + 4]
// 006c5404  52                   push edx
// 006c5405  e8b651ffff           call 0x6ba5c0
// 006c540a  83c404               add esp, 4
// 006c540d  b801000000           mov eax, 1
// 006c5412  5e                   pop esi
// 006c5413  81c40c020000         add esp, 0x20c
// 006c5419  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_dump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
