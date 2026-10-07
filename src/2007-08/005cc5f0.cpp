// roc 2007-08 005cc5f0  unit: seg_005c0000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cc5f0
//
// 005cc5f0  56                   push esi
// 005cc5f1  8b742408             mov esi, dword ptr [esp + 8]
// 005cc5f5  56                   push esi
// 005cc5f6  e895ffffff           call 0x5cc590
// 005cc5fb  6a01                 push 1
// 005cc5fd  6830c55c00           push 0x5cc530
// 005cc602  56                   push esi
// 005cc603  e8b816ffff           call 0x5bdcc0
// 005cc608  83c410               add esp, 0x10
// 005cc60b  b801000000           mov eax, 1
// 005cc610  5e                   pop esi
// 005cc611  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_cowrap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
