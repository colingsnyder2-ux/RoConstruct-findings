// from server: 100% by auto
// roc 2007-08 005c8bd0  unit: lua_exception  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c8bd0
//
// 005c8bd0  55                   push ebp
// 005c8bd1  8bec                 mov ebp, esp
// 005c8bd3  83e4c0               and esp, 0xffffffc0
// 005c8bd6  83ec3c               sub esp, 0x3c
// 005c8bd9  d9ee                 fldz 
// 005c8bdb  56                   push esi
// 005c8bdc  8b7508               mov esi, dword ptr [ebp + 8]
// 005c8bdf  dd5c2438             fstp qword ptr [esp + 0x38]
// 005c8be3  6a05                 push 5
// 005c8be5  6a01                 push 1
// 005c8be7  56                   push esi
// 005c8be8  e8e366ffff           call 0x5bf2d0
// 005c8bed  56                   push esi
// 005c8bee  e85d4fffff           call 0x5bdb50
// 005c8bf3  6a01                 push 1
// 005c8bf5  56                   push esi
// 005c8bf6  e8f558ffff           call 0x5be4f0
// 005c8bfb  83c418               add esp, 0x18
// 005c8bfe  85c0                 test eax, eax
// 005c8c00  7447                 je 0x5c8c49
// 005c8c02  6afe                 push -2
// 005c8c04  56                   push esi
// 005c8c05  e88649ffff           call 0x5bd590
// 005c8c0a  6aff                 push -1
// 005c8c0c  56                   push esi
// 005c8c0d  e85e4bffff           call 0x5bd770
// 005c8c12  83c410               add esp, 0x10
// 005c8c15  83f803               cmp eax, 3
// 005c8c18  7520                 jne 0x5c8c3a
// 005c8c1a  6aff                 push -1
// 005c8c1c  56                   push esi
// 005c8c1d  e8ae4cffff           call 0x5bd8d0
// 005c8c22  dd442440             fld qword ptr [esp + 0x40]
// 005c8c26  d8d9                 fcomp st(1)
// 005c8c28  83c408               add esp, 8
// 005c8c2b  dfe0                 fnstsw ax
// 005c8c2d  f6c405               test ah, 5
// 005c8c30  7a06                 jp 0x5c8c38
// 005c8c32  dd5c2438             fstp qword ptr [esp + 0x38]
// 005c8c36  eb02                 jmp 0x5c8c3a
// 005c8c38  ddd8                 fstp st(0)
// 005c8c3a  6a01                 push 1
// 005c8c3c  56                   push esi
// 005c8c3d  e8ae58ffff           call 0x5be4f0
// 005c8c42  83c408               add esp, 8
// 005c8c45  85c0                 test eax, eax
// 005c8c47  75b9                 jne 0x5c8c02
// 005c8c49  dd442438             fld qword ptr [esp + 0x38]
// 005c8c4d  83ec08               sub esp, 8
// 005c8c50  dd1c24               fstp qword ptr [esp]
// 005c8c53  56                   push esi
// 005c8c54  e8174fffff           call 0x5bdb70
// 005c8c59  83c40c               add esp, 0xc
// 005c8c5c  b801000000           mov eax, 1
// 005c8c61  5e                   pop esi
// 005c8c62  8be5                 mov esp, ebp
// 005c8c64  5d                   pop ebp
// 005c8c65  c3                   ret 
// library lua-5.1.4/ltablib.c (function _maxn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
