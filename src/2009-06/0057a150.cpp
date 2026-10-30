// from server: 100% by auto
// roc 2009-06 0057a150  unit: G3D::LineSegment  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a150
//
// 0057a150  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057a154  8b542404             mov edx, dword ptr [esp + 4]
// 0057a158  8d44240c             lea eax, [esp + 0xc]
// 0057a15c  50                   push eax
// 0057a15d  51                   push ecx
// 0057a15e  52                   push edx
// 0057a15f  e84cffffff           call 0x57a0b0
// 0057a164  83c40c               add esp, 0xc
// 0057a167  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_pushfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
