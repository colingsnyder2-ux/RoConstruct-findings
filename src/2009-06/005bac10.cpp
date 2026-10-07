// roc 2009-06 005bac10  unit: seg_005b0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bac10
//
// 005bac10  55                   push ebp
// 005bac11  8bec                 mov ebp, esp
// 005bac13  8b4508               mov eax, dword ptr [ebp + 8]
// 005bac16  50                   push eax
// 005bac17  e844080000           call 0x5bb460
// 005bac1c  83c404               add esp, 4
// 005bac1f  5d                   pop ebp
// 005bac20  c3                   ret 
// library lua-5.1.4/lstate.c (function _callallgcTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Oy- /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
