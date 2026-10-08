// from server: 100% by auto
// roc 2009-06 006c4cc0  unit: lua_exception  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c4cc0
//
// 006c4cc0  55                   push ebp
// 006c4cc1  8bec                 mov ebp, esp
// 006c4cc3  83e4c0               and esp, 0xffffffc0
// 006c4cc6  83ec34               sub esp, 0x34
// 006c4cc9  53                   push ebx
// 006c4cca  8b5d08               mov ebx, dword ptr [ebp + 8]
// 006c4ccd  56                   push esi
// 006c4cce  57                   push edi
// 006c4ccf  53                   push ebx
// 006c4cd0  e8ab40ffff           call 0x6b8d80
// 006c4cd5  6a01                 push 1
// 006c4cd7  53                   push ebx
// 006c4cd8  8bf8                 mov edi, eax
// 006c4cda  e8a160ffff           call 0x6bad80
// 006c4cdf  dd542444             fst qword ptr [esp + 0x44]
// 006c4ce3  be02000000           mov esi, 2
// 006c4ce8  83c40c               add esp, 0xc
// 006c4ceb  3bfe                 cmp edi, esi
// 006c4ced  7c28                 jl 0x6c4d17
// 006c4cef  56                   push esi
// 006c4cf0  ddd8                 fstp st(0)
// 006c4cf2  53                   push ebx
// 006c4cf3  e88860ffff           call 0x6bad80
// 006c4cf8  dd442440             fld qword ptr [esp + 0x40]
// 006c4cfc  d8d1                 fcom st(1)
// 006c4cfe  83c408               add esp, 8
// 006c4d01  dfe0                 fnstsw ax
// 006c4d03  f6c405               test ah, 5
// 006c4d06  7a08                 jp 0x6c4d10
// 006c4d08  ddd8                 fstp st(0)
// 006c4d0a  dd542438             fst qword ptr [esp + 0x38]
// 006c4d0e  eb02                 jmp 0x6c4d12
// 006c4d10  ddd9                 fstp st(1)
// 006c4d12  46                   inc esi
// 006c4d13  3bf7                 cmp esi, edi
// 006c4d15  7ed8                 jle 0x6c4cef
// 006c4d17  83ec08               sub esp, 8
// 006c4d1a  dd1c24               fstp qword ptr [esp]
// 006c4d1d  53                   push ebx
// 006c4d1e  e81d46ffff           call 0x6b9340
// 006c4d23  83c40c               add esp, 0xc
// 006c4d26  5f                   pop edi
// 006c4d27  5e                   pop esi
// 006c4d28  b801000000           mov eax, 1
// 006c4d2d  5b                   pop ebx
// 006c4d2e  8be5                 mov esp, ebp
// 006c4d30  5d                   pop ebp
// 006c4d31  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_max)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
