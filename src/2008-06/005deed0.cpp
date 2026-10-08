// roc 2008-06 005deed0  unit: RBX::Message  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005deed0
//
// 005deed0  83ec3c               sub esp, 0x3c
// 005deed3  d9442448             fld dword ptr [esp + 0x48]
// 005deed7  56                   push esi
// 005deed8  8b742448             mov esi, dword ptr [esp + 0x48]
// 005deedc  d9542404             fst dword ptr [esp + 4]
// 005deee0  8d442404             lea eax, [esp + 4]
// 005deee4  d9542408             fst dword ptr [esp + 8]
// 005deee8  50                   push eax
// 005deee9  d95c2410             fstp dword ptr [esp + 0x10]
// 005deeed  8d4e24               lea ecx, [esi + 0x24]
// 005deef0  51                   push ecx
// 005deef1  8d542418             lea edx, [esp + 0x18]
// 005deef5  52                   push edx
// 005deef6  e815ffffff           call 0x5dee10
// 005deefb  8d442428             lea eax, [esp + 0x28]
// 005deeff  56                   push esi
// 005def00  50                   push eax
// 005def01  e84aefffff           call 0x5dde50
// 005def06  8b742458             mov esi, dword ptr [esp + 0x58]
// 005def0a  83c414               add esp, 0x14
// 005def0d  50                   push eax
// 005def0e  8bce                 mov ecx, esi
// 005def10  e80b43f3ff           call 0x513220
// 005def15  d9442410             fld dword ptr [esp + 0x10]
// 005def19  d95e24               fstp dword ptr [esi + 0x24]
// 005def1c  8bc6                 mov eax, esi
// 005def1e  d9442414             fld dword ptr [esp + 0x14]
// 005def22  d95e28               fstp dword ptr [esi + 0x28]
// 005def25  d9442418             fld dword ptr [esp + 0x18]
// 005def29  d95e2c               fstp dword ptr [esi + 0x2c]
// 005def2c  5e                   pop esi
// 005def2d  83c43c               add esp, 0x3c
// 005def30  c3                   ret 
// library rbxgs/util\Math.cpp (function ?snapToGrid@Math@RBX@@SA?AVCoordinateFrame@G3D@@ABV34@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
