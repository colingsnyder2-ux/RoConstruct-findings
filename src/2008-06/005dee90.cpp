// roc 2008-06 005dee90  unit: RBX::Message  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dee90
//
// 005dee90  83ec0c               sub esp, 0xc
// 005dee93  d9442418             fld dword ptr [esp + 0x18]
// 005dee97  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005dee9b  56                   push esi
// 005dee9c  d9542404             fst dword ptr [esp + 4]
// 005deea0  8b742414             mov esi, dword ptr [esp + 0x14]
// 005deea4  d9542408             fst dword ptr [esp + 8]
// 005deea8  8d442404             lea eax, [esp + 4]
// 005deeac  d95c240c             fstp dword ptr [esp + 0xc]
// 005deeb0  50                   push eax
// 005deeb1  51                   push ecx
// 005deeb2  56                   push esi
// 005deeb3  e858ffffff           call 0x5dee10
// 005deeb8  83c40c               add esp, 0xc
// 005deebb  8bc6                 mov eax, esi
// 005deebd  5e                   pop esi
// 005deebe  83c40c               add esp, 0xc
// 005deec1  c3                   ret 
// library rbxgs/util\Math.cpp (function ?toGrid@Math@RBX@@SA?AVVector3@G3D@@ABV34@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
