// roc 2007-03 005a6ae0  unit: seg_005a0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a6ae0
//
// 005a6ae0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a6ae4  8b442408             mov eax, dword ptr [esp + 8]
// 005a6ae8  83ec48               sub esp, 0x48
// 005a6aeb  56                   push esi
// 005a6aec  8b742450             mov esi, dword ptr [esp + 0x50]
// 005a6af0  51                   push ecx
// 005a6af1  56                   push esi
// 005a6af2  50                   push eax
// 005a6af3  8d542410             lea edx, [esp + 0x10]
// 005a6af7  52                   push edx
// 005a6af8  8d442438             lea eax, [esp + 0x38]
// 005a6afc  50                   push eax
// 005a6afd  e84e82f5ff           call 0x4fed50
// 005a6b02  8bc8                 mov ecx, eax
// 005a6b04  e8f77ff5ff           call 0x4feb00
// 005a6b09  8bc8                 mov ecx, eax
// 005a6b0b  e8f07ff5ff           call 0x4feb00
// 005a6b10  8bc6                 mov eax, esi
// 005a6b12  5e                   pop esi
// 005a6b13  83c448               add esp, 0x48
// 005a6b16  c3                   ret 
// library rbxgs/util\Math.cpp (function ?momentToObjectSpace@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
