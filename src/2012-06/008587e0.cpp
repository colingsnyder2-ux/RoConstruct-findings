// roc 2012-06 008587e0  unit: seg_00850000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008587e0
//
// 008587e0  56                   push esi
// 008587e1  8b742408             mov esi, dword ptr [esp + 8]
// 008587e5  6a01                 push 1
// 008587e7  56                   push esi
// 008587e8  e803b1fdff           call 0x8338f0
// 008587ed  6a01                 push 1
// 008587ef  56                   push esi
// 008587f0  e8cb96fdff           call 0x831ec0
// 008587f5  83c410               add esp, 0x10
// 008587f8  85c0                 test eax, eax
// 008587fa  751f                 jne 0x85881b
// 008587fc  50                   push eax
// 008587fd  68f842bd00           push 0xbd42f8
// 00858802  6a02                 push 2
// 00858804  56                   push esi
// 00858805  e876b1fdff           call 0x833980
// 0085880a  50                   push eax
// 0085880b  68c0f3b400           push 0xb4f3c0
// 00858810  56                   push esi
// 00858811  e88aa6fdff           call 0x832ea0
// 00858816  83c41c               add esp, 0x1c
// 00858819  5e                   pop esi
// 0085881a  c3                   ret 
// 0085881b  56                   push esi
// 0085881c  e8cf92fdff           call 0x831af0
// 00858821  83c404               add esp, 4
// 00858824  5e                   pop esi
// 00858825  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_assert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
