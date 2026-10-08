// from server: 100% by auto
// roc 2007-08 005c9890  unit: lua_exception  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9890
//
// 005c9890  55                   push ebp
// 005c9891  8bec                 mov ebp, esp
// 005c9893  83e4c0               and esp, 0xffffffc0
// 005c9896  83ec34               sub esp, 0x34
// 005c9899  53                   push ebx
// 005c989a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 005c989d  56                   push esi
// 005c989e  57                   push edi
// 005c989f  53                   push ebx
// 005c98a0  e8db3cffff           call 0x5bd580
// 005c98a5  6a01                 push 1
// 005c98a7  53                   push ebx
// 005c98a8  8bf8                 mov edi, eax
// 005c98aa  e8615bffff           call 0x5bf410
// 005c98af  dd542444             fst qword ptr [esp + 0x44]
// 005c98b3  be02000000           mov esi, 2
// 005c98b8  83c40c               add esp, 0xc
// 005c98bb  3bfe                 cmp edi, esi
// 005c98bd  7c2a                 jl 0x5c98e9
// 005c98bf  56                   push esi
// 005c98c0  ddd8                 fstp st(0)
// 005c98c2  53                   push ebx
// 005c98c3  e8485bffff           call 0x5bf410
// 005c98c8  dd442440             fld qword ptr [esp + 0x40]
// 005c98cc  d8d1                 fcom st(1)
// 005c98ce  83c408               add esp, 8
// 005c98d1  dfe0                 fnstsw ax
// 005c98d3  f6c441               test ah, 0x41
// 005c98d6  7508                 jne 0x5c98e0
// 005c98d8  ddd8                 fstp st(0)
// 005c98da  dd542438             fst qword ptr [esp + 0x38]
// 005c98de  eb02                 jmp 0x5c98e2
// 005c98e0  ddd9                 fstp st(1)
// 005c98e2  83c601               add esi, 1
// 005c98e5  3bf7                 cmp esi, edi
// 005c98e7  7ed6                 jle 0x5c98bf
// 005c98e9  83ec08               sub esp, 8
// 005c98ec  dd1c24               fstp qword ptr [esp]
// 005c98ef  53                   push ebx
// 005c98f0  e87b42ffff           call 0x5bdb70
// 005c98f5  83c40c               add esp, 0xc
// 005c98f8  5f                   pop edi
// 005c98f9  5e                   pop esi
// 005c98fa  b801000000           mov eax, 1
// 005c98ff  5b                   pop ebx
// 005c9900  8be5                 mov esp, ebp
// 005c9902  5d                   pop ebp
// 005c9903  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_min)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
