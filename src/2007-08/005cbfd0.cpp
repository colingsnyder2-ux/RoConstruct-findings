// roc 2007-08 005cbfd0  unit: seg_005c0000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cbfd0
//
// 005cbfd0  53                   push ebx
// 005cbfd1  56                   push esi
// 005cbfd2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005cbfd6  57                   push edi
// 005cbfd7  6a00                 push 0
// 005cbfd9  6a00                 push 0
// 005cbfdb  6a01                 push 1
// 005cbfdd  56                   push esi
// 005cbfde  e8cd33ffff           call 0x5bf3b0
// 005cbfe3  56                   push esi
// 005cbfe4  8bf8                 mov edi, eax
// 005cbfe6  e89515ffff           call 0x5bd580
// 005cbfeb  57                   push edi
// 005cbfec  56                   push esi
// 005cbfed  8bd8                 mov ebx, eax
// 005cbfef  e82c2fffff           call 0x5bef20
// 005cbff4  83c41c               add esp, 0x1c
// 005cbff7  85c0                 test eax, eax
// 005cbff9  7409                 je 0x5cc004
// 005cbffb  56                   push esi
// 005cbffc  e8df24ffff           call 0x5be4e0
// 005cc001  83c404               add esp, 4
// 005cc004  6aff                 push -1
// 005cc006  6a00                 push 0
// 005cc008  56                   push esi
// 005cc009  e88222ffff           call 0x5be290
// 005cc00e  56                   push esi
// 005cc00f  e86c15ffff           call 0x5bd580
// 005cc014  83c410               add esp, 0x10
// 005cc017  5f                   pop edi
// 005cc018  5e                   pop esi
// 005cc019  2bc3                 sub eax, ebx
// 005cc01b  5b                   pop ebx
// 005cc01c  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_dofile)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
