// from server: 100% by auto
// roc 2009-06 006c7330  unit: seg_006c0000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7330
//
// 006c7330  53                   push ebx
// 006c7331  56                   push esi
// 006c7332  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c7336  57                   push edi
// 006c7337  6a00                 push 0
// 006c7339  6a00                 push 0
// 006c733b  6a01                 push 1
// 006c733d  56                   push esi
// 006c733e  e8dd39ffff           call 0x6bad20
// 006c7343  56                   push esi
// 006c7344  8bf8                 mov edi, eax
// 006c7346  e8351affff           call 0x6b8d80
// 006c734b  57                   push edi
// 006c734c  56                   push esi
// 006c734d  8bd8                 mov ebx, eax
// 006c734f  e8fc34ffff           call 0x6ba850
// 006c7354  83c41c               add esp, 0x1c
// 006c7357  85c0                 test eax, eax
// 006c7359  7409                 je 0x6c7364
// 006c735b  56                   push esi
// 006c735c  e89f29ffff           call 0x6b9d00
// 006c7361  83c404               add esp, 4
// 006c7364  6aff                 push -1
// 006c7366  6a00                 push 0
// 006c7368  56                   push esi
// 006c7369  e83227ffff           call 0x6b9aa0
// 006c736e  56                   push esi
// 006c736f  e80c1affff           call 0x6b8d80
// 006c7374  83c410               add esp, 0x10
// 006c7377  5f                   pop edi
// 006c7378  5e                   pop esi
// 006c7379  2bc3                 sub eax, ebx
// 006c737b  5b                   pop ebx
// 006c737c  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_dofile)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
