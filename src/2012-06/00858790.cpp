// from server: 100% by auto
// roc 2012-06 00858790  unit: seg_00850000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858790
//
// 00858790  53                   push ebx
// 00858791  56                   push esi
// 00858792  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00858796  57                   push edi
// 00858797  6a00                 push 0
// 00858799  6a00                 push 0
// 0085879b  6a01                 push 1
// 0085879d  56                   push esi
// 0085879e  e8ddb1fdff           call 0x833980
// 008587a3  56                   push esi
// 008587a4  8bf8                 mov edi, eax
// 008587a6  e84593fdff           call 0x831af0
// 008587ab  57                   push edi
// 008587ac  56                   push esi
// 008587ad  8bd8                 mov ebx, eax
// 008587af  e8fcacfdff           call 0x8334b0
// 008587b4  83c41c               add esp, 0x1c
// 008587b7  85c0                 test eax, eax
// 008587b9  7409                 je 0x8587c4
// 008587bb  56                   push esi
// 008587bc  e8afa2fdff           call 0x832a70
// 008587c1  83c404               add esp, 4
// 008587c4  6aff                 push -1
// 008587c6  6a00                 push 0
// 008587c8  56                   push esi
// 008587c9  e842a0fdff           call 0x832810
// 008587ce  56                   push esi
// 008587cf  e81c93fdff           call 0x831af0
// 008587d4  83c410               add esp, 0x10
// 008587d7  5f                   pop edi
// 008587d8  5e                   pop esi
// 008587d9  2bc3                 sub eax, ebx
// 008587db  5b                   pop ebx
// 008587dc  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_dofile)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
