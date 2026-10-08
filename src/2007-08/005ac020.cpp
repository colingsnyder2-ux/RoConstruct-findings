// roc 2007-08 005ac020  unit: RBX::World  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ac020
//
// 005ac020  83ec3c               sub esp, 0x3c
// 005ac023  d9442448             fld dword ptr [esp + 0x48]
// 005ac027  56                   push esi
// 005ac028  8b742448             mov esi, dword ptr [esp + 0x48]
// 005ac02c  d9542404             fst dword ptr [esp + 4]
// 005ac030  8d442404             lea eax, [esp + 4]
// 005ac034  d9542408             fst dword ptr [esp + 8]
// 005ac038  50                   push eax
// 005ac039  d95c2410             fstp dword ptr [esp + 0x10]
// 005ac03d  8d4e24               lea ecx, [esi + 0x24]
// 005ac040  51                   push ecx
// 005ac041  8d542418             lea edx, [esp + 0x18]
// 005ac045  52                   push edx
// 005ac046  e815ffffff           call 0x5abf60
// 005ac04b  8d442428             lea eax, [esp + 0x28]
// 005ac04f  56                   push esi
// 005ac050  50                   push eax
// 005ac051  e88aefffff           call 0x5aafe0
// 005ac056  8b742458             mov esi, dword ptr [esp + 0x58]
// 005ac05a  83c414               add esp, 0x14
// 005ac05d  50                   push eax
// 005ac05e  8bce                 mov ecx, esi
// 005ac060  e86bd5f5ff           call 0x5095d0
// 005ac065  d9442410             fld dword ptr [esp + 0x10]
// 005ac069  d95e24               fstp dword ptr [esi + 0x24]
// 005ac06c  8bc6                 mov eax, esi
// 005ac06e  d9442414             fld dword ptr [esp + 0x14]
// 005ac072  d95e28               fstp dword ptr [esi + 0x28]
// 005ac075  d9442418             fld dword ptr [esp + 0x18]
// 005ac079  d95e2c               fstp dword ptr [esi + 0x2c]
// 005ac07c  5e                   pop esi
// 005ac07d  83c43c               add esp, 0x3c
// 005ac080  c3                   ret 
// library rbxgs/util\Math.cpp (function ?snapToGrid@Math@RBX@@SA?AVCoordinateFrame@G3D@@ABV34@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
