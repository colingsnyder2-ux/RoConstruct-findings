// from server: 100% by auto
// roc 2012-06 00858fc0  unit: seg_00850000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858fc0
//
// 00858fc0  56                   push esi
// 00858fc1  8b742408             mov esi, dword ptr [esp + 8]
// 00858fc5  e8f6feffff           call 0x858ec0
// 00858fca  687041bd00           push 0xbd4170
// 00858fcf  687857b900           push 0xb95778
// 00858fd4  56                   push esi
// 00858fd5  e8f6acfdff           call 0x833cd0
// 00858fda  83c40c               add esp, 0xc
// 00858fdd  b802000000           mov eax, 2
// 00858fe2  5e                   pop esi
// 00858fe3  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaopen_base)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
