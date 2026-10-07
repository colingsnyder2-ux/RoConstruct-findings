// roc 2008-06 006260d0  unit: seg_00620000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006260d0
//
// 006260d0  55                   push ebp
// 006260d1  8bec                 mov ebp, esp
// 006260d3  83e4c0               and esp, 0xffffffc0
// 006260d6  83ec34               sub esp, 0x34
// 006260d9  53                   push ebx
// 006260da  8b5d08               mov ebx, dword ptr [ebp + 8]
// 006260dd  56                   push esi
// 006260de  57                   push edi
// 006260df  53                   push ebx
// 006260e0  e82bbbfeff           call 0x611c10
// 006260e5  6a01                 push 1
// 006260e7  53                   push ebx
// 006260e8  8bf8                 mov edi, eax
// 006260ea  e891b6feff           call 0x611780
// 006260ef  dd542444             fst qword ptr [esp + 0x44]
// 006260f3  be02000000           mov esi, 2
// 006260f8  83c40c               add esp, 0xc
// 006260fb  3bfe                 cmp edi, esi
// 006260fd  7c28                 jl 0x626127
// 006260ff  56                   push esi
// 00626100  ddd8                 fstp st(0)
// 00626102  53                   push ebx
// 00626103  e878b6feff           call 0x611780
// 00626108  dd442440             fld qword ptr [esp + 0x40]
// 0062610c  d8d1                 fcom st(1)
// 0062610e  83c408               add esp, 8
// 00626111  dfe0                 fnstsw ax
// 00626113  f6c405               test ah, 5
// 00626116  7a08                 jp 0x626120
// 00626118  ddd8                 fstp st(0)
// 0062611a  dd542438             fst qword ptr [esp + 0x38]
// 0062611e  eb02                 jmp 0x626122
// 00626120  ddd9                 fstp st(1)
// 00626122  46                   inc esi
// 00626123  3bf7                 cmp esi, edi
// 00626125  7ed8                 jle 0x6260ff
// 00626127  83ec08               sub esp, 8
// 0062612a  dd1c24               fstp qword ptr [esp]
// 0062612d  53                   push ebx
// 0062612e  e8cdc0feff           call 0x612200
// 00626133  83c40c               add esp, 0xc
// 00626136  5f                   pop edi
// 00626137  5e                   pop esi
// 00626138  b801000000           mov eax, 1
// 0062613d  5b                   pop ebx
// 0062613e  8be5                 mov esp, ebp
// 00626140  5d                   pop ebp
// 00626141  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_max)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
