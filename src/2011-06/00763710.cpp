// from server: 100% by auto
// roc 2011-06 00763710  unit: seg_00760000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00763710
//
// 00763710  56                   push esi
// 00763711  8b742408             mov esi, dword ptr [esp + 8]
// 00763715  6a01                 push 1
// 00763717  56                   push esi
// 00763718  e883ffffff           call 0x7636a0
// 0076371d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00763721  8d442418             lea eax, [esp + 0x18]
// 00763725  50                   push eax
// 00763726  51                   push ecx
// 00763727  56                   push esi
// 00763728  e8e3f2ffff           call 0x762a10
// 0076372d  6a02                 push 2
// 0076372f  56                   push esi
// 00763730  e8fbfbffff           call 0x763330
// 00763735  56                   push esi
// 00763736  e8a5fbffff           call 0x7632e0
// 0076373b  83c420               add esp, 0x20
// 0076373e  5e                   pop esi
// 0076373f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
