// roc 2008-06 00649130  unit: RBX::Block  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00649130
//
// 00649130  83ec0c               sub esp, 0xc
// 00649133  d94110               fld dword ptr [ecx + 0x10]
// 00649136  56                   push esi
// 00649137  8b742414             mov esi, dword ptr [esp + 0x14]
// 0064913b  dcc8                 fmul st(0), st(0)
// 0064913d  8d442404             lea eax, [esp + 4]
// 00649141  50                   push eax
// 00649142  d84c241c             fmul dword ptr [esp + 0x1c]
// 00649146  56                   push esi
// 00649147  d80d182a8300         fmul dword ptr [0x832a18]
// 0064914d  d954240c             fst dword ptr [esp + 0xc]
// 00649151  d9542410             fst dword ptr [esp + 0x10]
// 00649155  d95c2414             fstp dword ptr [esp + 0x14]
// 00649159  e8724af9ff           call 0x5ddbd0
// 0064915e  83c408               add esp, 8
// 00649161  8bc6                 mov eax, esi
// 00649163  5e                   pop esi
// 00649164  83c40c               add esp, 0xc
// 00649167  c20800               ret 8
// library rbxgs-dll/v8world\Ball.cpp (function ?getMomentSolid@Ball@RBX@@ABE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8world/Ball.cpp
