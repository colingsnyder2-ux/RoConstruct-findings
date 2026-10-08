// roc 2007-08 005ac090  unit: RBX::World  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ac090
//
// 005ac090  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ac094  83ec30               sub esp, 0x30
// 005ac097  56                   push esi
// 005ac098  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 005ac09c  57                   push edi
// 005ac09d  50                   push eax
// 005ac09e  8d4e24               lea ecx, [esi + 0x24]
// 005ac0a1  51                   push ecx
// 005ac0a2  8d542410             lea edx, [esp + 0x10]
// 005ac0a6  52                   push edx
// 005ac0a7  e8b4feffff           call 0x5abf60
// 005ac0ac  8bf8                 mov edi, eax
// 005ac0ae  8d442420             lea eax, [esp + 0x20]
// 005ac0b2  56                   push esi
// 005ac0b3  50                   push eax
// 005ac0b4  e827efffff           call 0x5aafe0
// 005ac0b9  8b742450             mov esi, dword ptr [esp + 0x50]
// 005ac0bd  83c414               add esp, 0x14
// 005ac0c0  50                   push eax
// 005ac0c1  8bce                 mov ecx, esi
// 005ac0c3  e808d5f5ff           call 0x5095d0
// 005ac0c8  d907                 fld dword ptr [edi]
// 005ac0ca  d95e24               fstp dword ptr [esi + 0x24]
// 005ac0cd  8bc6                 mov eax, esi
// 005ac0cf  d94704               fld dword ptr [edi + 4]
// 005ac0d2  d95e28               fstp dword ptr [esi + 0x28]
// 005ac0d5  d94708               fld dword ptr [edi + 8]
// 005ac0d8  5f                   pop edi
// 005ac0d9  d95e2c               fstp dword ptr [esi + 0x2c]
// 005ac0dc  5e                   pop esi
// 005ac0dd  83c430               add esp, 0x30
// 005ac0e0  c3                   ret 
// library rbxgs/util\Math.cpp (function ?snapToGrid@Math@RBX@@SA?AVCoordinateFrame@G3D@@ABV34@ABVVector3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
