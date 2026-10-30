// from server: 100% by auto
// roc 2011-06 0077ce20  unit: seg_00770000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077ce20
//
// 0077ce20  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077ce24  8b542404             mov edx, dword ptr [esp + 4]
// 0077ce28  8d44240c             lea eax, [esp + 0xc]
// 0077ce2c  50                   push eax
// 0077ce2d  51                   push ecx
// 0077ce2e  52                   push edx
// 0077ce2f  e8fcfcffff           call 0x77cb30
// 0077ce34  83c40c               add esp, 0xc
// 0077ce37  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_pushfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
