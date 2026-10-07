// roc 2009-06 005baad0  unit: seg_005b0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005baad0
//
// 005baad0  55                   push ebp
// 005baad1  8bec                 mov ebp, esp
// 005baad3  8b4508               mov eax, dword ptr [ebp + 8]
// 005baad6  50                   push eax
// 005baad7  e834010000           call 0x5bac10
// 005baadc  83c404               add esp, 4
// 005baadf  5d                   pop ebp
// 005baae0  c3                   ret 
// library lua-5.1.4/lstate.c (function _callallgcTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Oy- /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
