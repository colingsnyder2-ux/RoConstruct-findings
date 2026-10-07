// roc 2009-06 006c3f20  unit: lua_exception  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c3f20
//
// 006c3f20  55                   push ebp
// 006c3f21  8bec                 mov ebp, esp
// 006c3f23  83e4c0               and esp, 0xffffffc0
// 006c3f26  83ec3c               sub esp, 0x3c
// 006c3f29  d9ee                 fldz 
// 006c3f2b  56                   push esi
// 006c3f2c  8b7508               mov esi, dword ptr [ebp + 8]
// 006c3f2f  dd5c2438             fstp qword ptr [esp + 0x38]
// 006c3f33  6a05                 push 5
// 006c3f35  6a01                 push 1
// 006c3f37  56                   push esi
// 006c3f38  e8036dffff           call 0x6bac40
// 006c3f3d  56                   push esi
// 006c3f3e  e8dd53ffff           call 0x6b9320
// 006c3f43  6a01                 push 1
// 006c3f45  56                   push esi
// 006c3f46  e8c55dffff           call 0x6b9d10
// 006c3f4b  83c418               add esp, 0x18
// 006c3f4e  85c0                 test eax, eax
// 006c3f50  7447                 je 0x6c3f99
// 006c3f52  6afe                 push -2
// 006c3f54  56                   push esi
// 006c3f55  e8364effff           call 0x6b8d90
// 006c3f5a  6aff                 push -1
// 006c3f5c  56                   push esi
// 006c3f5d  e80e50ffff           call 0x6b8f70
// 006c3f62  83c410               add esp, 0x10
// 006c3f65  83f803               cmp eax, 3
// 006c3f68  7520                 jne 0x6c3f8a
// 006c3f6a  6aff                 push -1
// 006c3f6c  56                   push esi
// 006c3f6d  e85e51ffff           call 0x6b90d0
// 006c3f72  dd442440             fld qword ptr [esp + 0x40]
// 006c3f76  d8d9                 fcomp st(1)
// 006c3f78  83c408               add esp, 8
// 006c3f7b  dfe0                 fnstsw ax
// 006c3f7d  f6c405               test ah, 5
// 006c3f80  7a06                 jp 0x6c3f88
// 006c3f82  dd5c2438             fstp qword ptr [esp + 0x38]
// 006c3f86  eb02                 jmp 0x6c3f8a
// 006c3f88  ddd8                 fstp st(0)
// 006c3f8a  6a01                 push 1
// 006c3f8c  56                   push esi
// 006c3f8d  e87e5dffff           call 0x6b9d10
// 006c3f92  83c408               add esp, 8
// 006c3f95  85c0                 test eax, eax
// 006c3f97  75b9                 jne 0x6c3f52
// 006c3f99  dd442438             fld qword ptr [esp + 0x38]
// 006c3f9d  83ec08               sub esp, 8
// 006c3fa0  dd1c24               fstp qword ptr [esp]
// 006c3fa3  56                   push esi
// 006c3fa4  e89753ffff           call 0x6b9340
// 006c3fa9  83c40c               add esp, 0xc
// 006c3fac  b801000000           mov eax, 1
// 006c3fb1  5e                   pop esi
// 006c3fb2  8be5                 mov esp, ebp
// 006c3fb4  5d                   pop ebp
// 006c3fb5  c3                   ret 
// library lua-5.1.4/ltablib.c (function _maxn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
