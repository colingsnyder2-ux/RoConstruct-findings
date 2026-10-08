// from server: 100% by auto
// roc 2008-06 00625390  unit: lua_exception  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625390
//
// 00625390  55                   push ebp
// 00625391  8bec                 mov ebp, esp
// 00625393  83e4c0               and esp, 0xffffffc0
// 00625396  83ec3c               sub esp, 0x3c
// 00625399  d9ee                 fldz 
// 0062539b  56                   push esi
// 0062539c  8b7508               mov esi, dword ptr [ebp + 8]
// 0062539f  dd5c2438             fstp qword ptr [esp + 0x38]
// 006253a3  6a05                 push 5
// 006253a5  6a01                 push 1
// 006253a7  56                   push esi
// 006253a8  e893c2feff           call 0x611640
// 006253ad  56                   push esi
// 006253ae  e82dcefeff           call 0x6121e0
// 006253b3  6a01                 push 1
// 006253b5  56                   push esi
// 006253b6  e8c5d7feff           call 0x612b80
// 006253bb  83c418               add esp, 0x18
// 006253be  85c0                 test eax, eax
// 006253c0  7447                 je 0x625409
// 006253c2  6afe                 push -2
// 006253c4  56                   push esi
// 006253c5  e856c8feff           call 0x611c20
// 006253ca  6aff                 push -1
// 006253cc  56                   push esi
// 006253cd  e82ecafeff           call 0x611e00
// 006253d2  83c410               add esp, 0x10
// 006253d5  83f803               cmp eax, 3
// 006253d8  7520                 jne 0x6253fa
// 006253da  6aff                 push -1
// 006253dc  56                   push esi
// 006253dd  e87ecbfeff           call 0x611f60
// 006253e2  dd442440             fld qword ptr [esp + 0x40]
// 006253e6  d8d9                 fcomp st(1)
// 006253e8  83c408               add esp, 8
// 006253eb  dfe0                 fnstsw ax
// 006253ed  f6c405               test ah, 5
// 006253f0  7a06                 jp 0x6253f8
// 006253f2  dd5c2438             fstp qword ptr [esp + 0x38]
// 006253f6  eb02                 jmp 0x6253fa
// 006253f8  ddd8                 fstp st(0)
// 006253fa  6a01                 push 1
// 006253fc  56                   push esi
// 006253fd  e87ed7feff           call 0x612b80
// 00625402  83c408               add esp, 8
// 00625405  85c0                 test eax, eax
// 00625407  75b9                 jne 0x6253c2
// 00625409  dd442438             fld qword ptr [esp + 0x38]
// 0062540d  83ec08               sub esp, 8
// 00625410  dd1c24               fstp qword ptr [esp]
// 00625413  56                   push esi
// 00625414  e8e7cdfeff           call 0x612200
// 00625419  83c40c               add esp, 0xc
// 0062541c  b801000000           mov eax, 1
// 00625421  5e                   pop esi
// 00625422  8be5                 mov esp, ebp
// 00625424  5d                   pop ebp
// 00625425  c3                   ret 
// library lua-5.1.4/ltablib.c (function _maxn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
