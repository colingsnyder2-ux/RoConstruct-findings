// from server: 100% by auto
// roc 2007-08 005c95f0  unit: lua_exception  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c95f0
//
// 005c95f0  83ec08               sub esp, 8
// 005c95f3  56                   push esi
// 005c95f4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c95f8  6a01                 push 1
// 005c95fa  56                   push esi
// 005c95fb  e8105effff           call 0x5bf410
// 005c9600  dd5c240c             fstp qword ptr [esp + 0xc]
// 005c9604  6a02                 push 2
// 005c9606  56                   push esi
// 005c9607  e8045effff           call 0x5bf410
// 005c960c  dd442414             fld qword ptr [esp + 0x14]
// 005c9610  83c410               add esp, 0x10
// 005c9613  d9c9                 fxch st(1)
// 005c9615  e84a7e0600           call 0x631464
// 005c961a  83ec08               sub esp, 8
// 005c961d  dd1c24               fstp qword ptr [esp]
// 005c9620  56                   push esi
// 005c9621  e84a45ffff           call 0x5bdb70
// 005c9626  83c40c               add esp, 0xc
// 005c9629  b801000000           mov eax, 1
// 005c962e  5e                   pop esi
// 005c962f  83c408               add esp, 8
// 005c9632  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_atan2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
