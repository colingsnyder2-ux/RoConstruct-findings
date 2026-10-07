// roc 2010-06 00558280  unit: seg_00550000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00558280
//
// 00558280  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00558284  8b542404             mov edx, dword ptr [esp + 4]
// 00558288  8d44240c             lea eax, [esp + 0xc]
// 0055828c  50                   push eax
// 0055828d  51                   push ecx
// 0055828e  52                   push edx
// 0055828f  e84cffffff           call 0x5581e0
// 00558294  83c40c               add esp, 0xc
// 00558297  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_pushfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
