// roc 2007-08 005cbab0  unit: seg_005c0000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cbab0
//
// 005cbab0  56                   push esi
// 005cbab1  8b742408             mov esi, dword ptr [esp + 8]
// 005cbab5  e856ffffff           call 0x5cba10
// 005cbaba  6aff                 push -1
// 005cbabc  56                   push esi
// 005cbabd  e8ee1cffff           call 0x5bd7b0
// 005cbac2  83c408               add esp, 8
// 005cbac5  85c0                 test eax, eax
// 005cbac7  7415                 je 0x5cbade
// 005cbac9  68eed8ffff           push 0xffffd8ee
// 005cbace  56                   push esi
// 005cbacf  e86c1cffff           call 0x5bd740
// 005cbad4  83c408               add esp, 8
// 005cbad7  b801000000           mov eax, 1
// 005cbadc  5e                   pop esi
// 005cbadd  c3                   ret 
// 005cbade  6aff                 push -1
// 005cbae0  56                   push esi
// 005cbae1  e89a24ffff           call 0x5bdf80
// 005cbae6  83c408               add esp, 8
// 005cbae9  b801000000           mov eax, 1
// 005cbaee  5e                   pop esi
// 005cbaef  c3                   ret 
// library lua-5.1.1/lbaselib.c (function _luaB_getfenv)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lbaselib.c
