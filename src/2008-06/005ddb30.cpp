// roc 2008-06 005ddb30  unit: RBX::Message  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ddb30
//
// 005ddb30  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ddb34  8b442408             mov eax, dword ptr [esp + 8]
// 005ddb38  83ec48               sub esp, 0x48
// 005ddb3b  56                   push esi
// 005ddb3c  8b742450             mov esi, dword ptr [esp + 0x50]
// 005ddb40  51                   push ecx
// 005ddb41  56                   push esi
// 005ddb42  50                   push eax
// 005ddb43  8d542410             lea edx, [esp + 0x10]
// 005ddb47  52                   push edx
// 005ddb48  8d442438             lea eax, [esp + 0x38]
// 005ddb4c  50                   push eax
// 005ddb4d  e8be59f3ff           call 0x513510
// 005ddb52  8bc8                 mov ecx, eax
// 005ddb54  e8f757f3ff           call 0x513350
// 005ddb59  8bc8                 mov ecx, eax
// 005ddb5b  e8f057f3ff           call 0x513350
// 005ddb60  8bc6                 mov eax, esi
// 005ddb62  5e                   pop esi
// 005ddb63  83c448               add esp, 0x48
// 005ddb66  c3                   ret 
// library rbxgs/util\Math.cpp (function ?momentToObjectSpace@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
