// roc 2008-06 005cbec0  unit: RBX::ControllerService  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cbec0
//
// 005cbec0  d90518a38300         fld dword ptr [0x83a318]
// 005cbec6  83ec08               sub esp, 8
// 005cbec9  d944240c             fld dword ptr [esp + 0xc]
// 005cbecd  d8d1                 fcom st(1)
// 005cbecf  dfe0                 fnstsw ax
// 005cbed1  ddd9                 fstp st(1)
// 005cbed3  d90578e38100         fld dword ptr [0x81e378]
// 005cbed9  f6c401               test ah, 1
// 005cbedc  750f                 jne 0x5cbeed
// 005cbede  d8d1                 fcom st(1)
// 005cbee0  dfe0                 fnstsw ax
// 005cbee2  f6c441               test ah, 0x41
// 005cbee5  7506                 jne 0x5cbeed
// 005cbee7  ddd8                 fstp st(0)
// 005cbee9  83c408               add esp, 8
// 005cbeec  c3                   ret 
// 005cbeed  dec1                 faddp st(1)
// 005cbeef  83ec08               sub esp, 8
// 005cbef2  d80d14a38300         fmul dword ptr [0x83a314]
// 005cbef8  dd1c24               fstp qword ptr [esp]
// 005cbefb  e8b05c0d00           call 0x6a1bb0
// 005cbf00  d95c240c             fstp dword ptr [esp + 0xc]
// 005cbf04  83c408               add esp, 8
// 005cbf07  d9442404             fld dword ptr [esp + 4]
// 005cbf0b  db1c24               fistp dword ptr [esp]
// 005cbf0e  db0424               fild dword ptr [esp]
// 005cbf11  d80db4b38200         fmul dword ptr [0x82b3b4]
// 005cbf17  d86c240c             fsubr dword ptr [esp + 0xc]
// 005cbf1b  83c408               add esp, 8
// 005cbf1e  c3                   ret 
// library rbxgs-dll/util\Math.cpp (function ?radWrap@Math@RBX@@SAMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/Math.cpp
