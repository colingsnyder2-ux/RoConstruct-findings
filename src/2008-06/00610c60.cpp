// from server: 100% by auto
// roc 2008-06 00610c60  unit: RBX::BlockBlockContact  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00610c60
//
// 00610c60  56                   push esi
// 00610c61  8b742408             mov esi, dword ptr [esp + 8]
// 00610c65  6a01                 push 1
// 00610c67  56                   push esi
// 00610c68  e883ffffff           call 0x610bf0
// 00610c6d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00610c71  8d442418             lea eax, [esp + 0x18]
// 00610c75  50                   push eax
// 00610c76  51                   push ecx
// 00610c77  56                   push esi
// 00610c78  e873160000           call 0x6122f0
// 00610c7d  6a02                 push 2
// 00610c7f  56                   push esi
// 00610c80  e83b1f0000           call 0x612bc0
// 00610c85  56                   push esi
// 00610c86  e8e51e0000           call 0x612b70
// 00610c8b  83c420               add esp, 0x20
// 00610c8e  5e                   pop esi
// 00610c8f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
