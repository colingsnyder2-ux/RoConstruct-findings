// roc 2009-06 006c4c40  unit: lua_exception  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c4c40
//
// 006c4c40  55                   push ebp
// 006c4c41  8bec                 mov ebp, esp
// 006c4c43  83e4c0               and esp, 0xffffffc0
// 006c4c46  83ec34               sub esp, 0x34
// 006c4c49  53                   push ebx
// 006c4c4a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 006c4c4d  56                   push esi
// 006c4c4e  57                   push edi
// 006c4c4f  53                   push ebx
// 006c4c50  e82b41ffff           call 0x6b8d80
// 006c4c55  6a01                 push 1
// 006c4c57  53                   push ebx
// 006c4c58  8bf8                 mov edi, eax
// 006c4c5a  e82161ffff           call 0x6bad80
// 006c4c5f  dd542444             fst qword ptr [esp + 0x44]
// 006c4c63  be02000000           mov esi, 2
// 006c4c68  83c40c               add esp, 0xc
// 006c4c6b  3bfe                 cmp edi, esi
// 006c4c6d  7c28                 jl 0x6c4c97
// 006c4c6f  56                   push esi
// 006c4c70  ddd8                 fstp st(0)
// 006c4c72  53                   push ebx
// 006c4c73  e80861ffff           call 0x6bad80
// 006c4c78  dd442440             fld qword ptr [esp + 0x40]
// 006c4c7c  d8d1                 fcom st(1)
// 006c4c7e  83c408               add esp, 8
// 006c4c81  dfe0                 fnstsw ax
// 006c4c83  f6c441               test ah, 0x41
// 006c4c86  7508                 jne 0x6c4c90
// 006c4c88  ddd8                 fstp st(0)
// 006c4c8a  dd542438             fst qword ptr [esp + 0x38]
// 006c4c8e  eb02                 jmp 0x6c4c92
// 006c4c90  ddd9                 fstp st(1)
// 006c4c92  46                   inc esi
// 006c4c93  3bf7                 cmp esi, edi
// 006c4c95  7ed8                 jle 0x6c4c6f
// 006c4c97  83ec08               sub esp, 8
// 006c4c9a  dd1c24               fstp qword ptr [esp]
// 006c4c9d  53                   push ebx
// 006c4c9e  e89d46ffff           call 0x6b9340
// 006c4ca3  83c40c               add esp, 0xc
// 006c4ca6  5f                   pop edi
// 006c4ca7  5e                   pop esi
// 006c4ca8  b801000000           mov eax, 1
// 006c4cad  5b                   pop ebx
// 006c4cae  8be5                 mov esp, ebp
// 006c4cb0  5d                   pop ebp
// 006c4cb1  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_min)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
