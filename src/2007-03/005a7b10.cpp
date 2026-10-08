// roc 2007-03 005a7b10  unit: seg_005a0000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a7b10
//
// 005a7b10  83ec0c               sub esp, 0xc
// 005a7b13  d9442418             fld dword ptr [esp + 0x18]
// 005a7b17  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a7b1b  56                   push esi
// 005a7b1c  d9542404             fst dword ptr [esp + 4]
// 005a7b20  8b742414             mov esi, dword ptr [esp + 0x14]
// 005a7b24  d9542408             fst dword ptr [esp + 8]
// 005a7b28  8d442404             lea eax, [esp + 4]
// 005a7b2c  d95c240c             fstp dword ptr [esp + 0xc]
// 005a7b30  50                   push eax
// 005a7b31  51                   push ecx
// 005a7b32  56                   push esi
// 005a7b33  e858ffffff           call 0x5a7a90
// 005a7b38  83c40c               add esp, 0xc
// 005a7b3b  8bc6                 mov eax, esi
// 005a7b3d  5e                   pop esi
// 005a7b3e  83c40c               add esp, 0xc
// 005a7b41  c3                   ret 
// library rbxgs/util\Math.cpp (function ?toGrid@Math@RBX@@SA?AVVector3@G3D@@ABV34@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
