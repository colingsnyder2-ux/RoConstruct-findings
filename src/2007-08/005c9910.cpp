// roc 2007-08 005c9910  unit: seg_005c0000  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9910
//
// 005c9910  55                   push ebp
// 005c9911  8bec                 mov ebp, esp
// 005c9913  83e4c0               and esp, 0xffffffc0
// 005c9916  83ec34               sub esp, 0x34
// 005c9919  53                   push ebx
// 005c991a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 005c991d  56                   push esi
// 005c991e  57                   push edi
// 005c991f  53                   push ebx
// 005c9920  e85b3cffff           call 0x5bd580
// 005c9925  6a01                 push 1
// 005c9927  53                   push ebx
// 005c9928  8bf8                 mov edi, eax
// 005c992a  e8e15affff           call 0x5bf410
// 005c992f  dd542444             fst qword ptr [esp + 0x44]
// 005c9933  be02000000           mov esi, 2
// 005c9938  83c40c               add esp, 0xc
// 005c993b  3bfe                 cmp edi, esi
// 005c993d  7c2a                 jl 0x5c9969
// 005c993f  56                   push esi
// 005c9940  ddd8                 fstp st(0)
// 005c9942  53                   push ebx
// 005c9943  e8c85affff           call 0x5bf410
// 005c9948  dd442440             fld qword ptr [esp + 0x40]
// 005c994c  d8d1                 fcom st(1)
// 005c994e  83c408               add esp, 8
// 005c9951  dfe0                 fnstsw ax
// 005c9953  f6c405               test ah, 5
// 005c9956  7a08                 jp 0x5c9960
// 005c9958  ddd8                 fstp st(0)
// 005c995a  dd542438             fst qword ptr [esp + 0x38]
// 005c995e  eb02                 jmp 0x5c9962
// 005c9960  ddd9                 fstp st(1)
// 005c9962  83c601               add esi, 1
// 005c9965  3bf7                 cmp esi, edi
// 005c9967  7ed6                 jle 0x5c993f
// 005c9969  83ec08               sub esp, 8
// 005c996c  dd1c24               fstp qword ptr [esp]
// 005c996f  53                   push ebx
// 005c9970  e8fb41ffff           call 0x5bdb70
// 005c9975  83c40c               add esp, 0xc
// 005c9978  5f                   pop edi
// 005c9979  5e                   pop esi
// 005c997a  b801000000           mov eax, 1
// 005c997f  5b                   pop ebx
// 005c9980  8be5                 mov esp, ebp
// 005c9982  5d                   pop ebp
// 005c9983  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_max)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
