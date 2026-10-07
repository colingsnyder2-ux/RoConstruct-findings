// roc 2012-06 00855410  unit: lua_exception  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00855410
//
// 00855410  56                   push esi
// 00855411  8b742408             mov esi, dword ptr [esp + 8]
// 00855415  6a05                 push 5
// 00855417  6a01                 push 1
// 00855419  56                   push esi
// 0085541a  e881e4fdff           call 0x8338a0
// 0085541f  6a01                 push 1
// 00855421  56                   push esi
// 00855422  e839cbfdff           call 0x831f60
// 00855427  50                   push eax
// 00855428  56                   push esi
// 00855429  e8a2ccfdff           call 0x8320d0
// 0085542e  83c41c               add esp, 0x1c
// 00855431  b801000000           mov eax, 1
// 00855436  5e                   pop esi
// 00855437  c3                   ret 
// library lua-5.1.4/ltablib.c (function _getn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
