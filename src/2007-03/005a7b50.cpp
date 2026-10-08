// roc 2007-03 005a7b50  unit: seg_005a0000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a7b50
//
// 005a7b50  83ec3c               sub esp, 0x3c
// 005a7b53  d9442448             fld dword ptr [esp + 0x48]
// 005a7b57  56                   push esi
// 005a7b58  8b742448             mov esi, dword ptr [esp + 0x48]
// 005a7b5c  d9542404             fst dword ptr [esp + 4]
// 005a7b60  8d442404             lea eax, [esp + 4]
// 005a7b64  d9542408             fst dword ptr [esp + 8]
// 005a7b68  50                   push eax
// 005a7b69  d95c2410             fstp dword ptr [esp + 0x10]
// 005a7b6d  8d4e24               lea ecx, [esi + 0x24]
// 005a7b70  51                   push ecx
// 005a7b71  8d542418             lea edx, [esp + 0x18]
// 005a7b75  52                   push edx
// 005a7b76  e815ffffff           call 0x5a7a90
// 005a7b7b  8d442428             lea eax, [esp + 0x28]
// 005a7b7f  56                   push esi
// 005a7b80  50                   push eax
// 005a7b81  e87af2ffff           call 0x5a6e00
// 005a7b86  8b742458             mov esi, dword ptr [esp + 0x58]
// 005a7b8a  83c414               add esp, 0x14
// 005a7b8d  50                   push eax
// 005a7b8e  8bce                 mov ecx, esi
// 005a7b90  e8eb6df5ff           call 0x4fe980
// 005a7b95  d9442410             fld dword ptr [esp + 0x10]
// 005a7b99  d95e24               fstp dword ptr [esi + 0x24]
// 005a7b9c  8bc6                 mov eax, esi
// 005a7b9e  d9442414             fld dword ptr [esp + 0x14]
// 005a7ba2  d95e28               fstp dword ptr [esi + 0x28]
// 005a7ba5  d9442418             fld dword ptr [esp + 0x18]
// 005a7ba9  d95e2c               fstp dword ptr [esi + 0x2c]
// 005a7bac  5e                   pop esi
// 005a7bad  83c43c               add esp, 0x3c
// 005a7bb0  c3                   ret 
// library rbxgs/util\Math.cpp (function ?snapToGrid@Math@RBX@@SA?AVCoordinateFrame@G3D@@ABV34@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
