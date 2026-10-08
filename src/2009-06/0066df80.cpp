// roc 2009-06 0066df80  unit: RBX::VHumanoid::?$EventDesc  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066df80
//
// 0066df80  83ec0c               sub esp, 0xc
// 0066df83  d9442418             fld dword ptr [esp + 0x18]
// 0066df87  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066df8b  56                   push esi
// 0066df8c  d9542404             fst dword ptr [esp + 4]
// 0066df90  8b742414             mov esi, dword ptr [esp + 0x14]
// 0066df94  d9542408             fst dword ptr [esp + 8]
// 0066df98  8d442404             lea eax, [esp + 4]
// 0066df9c  d95c240c             fstp dword ptr [esp + 0xc]
// 0066dfa0  50                   push eax
// 0066dfa1  51                   push ecx
// 0066dfa2  56                   push esi
// 0066dfa3  e858ffffff           call 0x66df00
// 0066dfa8  83c40c               add esp, 0xc
// 0066dfab  8bc6                 mov eax, esi
// 0066dfad  5e                   pop esi
// 0066dfae  83c40c               add esp, 0xc
// 0066dfb1  c3                   ret 
// library rbxgs/util\Math.cpp (function ?toGrid@Math@RBX@@SA?AVVector3@G3D@@ABV34@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
