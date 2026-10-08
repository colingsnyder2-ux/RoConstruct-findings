// from server: 100% by auto
// roc 2009-06 006c90a0  unit: seg_006c0000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c90a0
//
// 006c90a0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c90a4  8b542404             mov edx, dword ptr [esp + 4]
// 006c90a8  8d44240c             lea eax, [esp + 0xc]
// 006c90ac  50                   push eax
// 006c90ad  51                   push ecx
// 006c90ae  52                   push edx
// 006c90af  e8fcfcffff           call 0x6c8db0
// 006c90b4  83c40c               add esp, 0xc
// 006c90b7  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_pushfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
