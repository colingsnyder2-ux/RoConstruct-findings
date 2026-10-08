// roc 2009-06 0066dfc0  unit: RBX::VHumanoid::?$EventDesc  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066dfc0
//
// 0066dfc0  83ec3c               sub esp, 0x3c
// 0066dfc3  d9442448             fld dword ptr [esp + 0x48]
// 0066dfc7  56                   push esi
// 0066dfc8  8b742448             mov esi, dword ptr [esp + 0x48]
// 0066dfcc  d9542404             fst dword ptr [esp + 4]
// 0066dfd0  8d442404             lea eax, [esp + 4]
// 0066dfd4  d9542408             fst dword ptr [esp + 8]
// 0066dfd8  50                   push eax
// 0066dfd9  d95c2410             fstp dword ptr [esp + 0x10]
// 0066dfdd  8d4e24               lea ecx, [esi + 0x24]
// 0066dfe0  51                   push ecx
// 0066dfe1  8d542418             lea edx, [esp + 0x18]
// 0066dfe5  52                   push edx
// 0066dfe6  e815ffffff           call 0x66df00
// 0066dfeb  8d442428             lea eax, [esp + 0x28]
// 0066dfef  56                   push esi
// 0066dff0  50                   push eax
// 0066dff1  e8baeeffff           call 0x66ceb0
// 0066dff6  8b742458             mov esi, dword ptr [esp + 0x58]
// 0066dffa  83c414               add esp, 0x14
// 0066dffd  50                   push eax
// 0066dffe  8bce                 mov ecx, esi
// 0066e000  e87bbfe2ff           call 0x499f80
// 0066e005  d9442410             fld dword ptr [esp + 0x10]
// 0066e009  d95e24               fstp dword ptr [esi + 0x24]
// 0066e00c  8bc6                 mov eax, esi
// 0066e00e  d9442414             fld dword ptr [esp + 0x14]
// 0066e012  d95e28               fstp dword ptr [esi + 0x28]
// 0066e015  d9442418             fld dword ptr [esp + 0x18]
// 0066e019  d95e2c               fstp dword ptr [esi + 0x2c]
// 0066e01c  5e                   pop esi
// 0066e01d  83c43c               add esp, 0x3c
// 0066e020  c3                   ret 
// library rbxgs/util\Math.cpp (function ?snapToGrid@Math@RBX@@SA?AVCoordinateFrame@G3D@@ABV34@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
