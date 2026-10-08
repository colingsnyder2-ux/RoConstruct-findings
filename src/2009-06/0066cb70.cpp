// roc 2009-06 0066cb70  unit: RBX::VHumanoid::?$EventDesc  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066cb70
//
// 0066cb70  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066cb74  8b442408             mov eax, dword ptr [esp + 8]
// 0066cb78  83ec48               sub esp, 0x48
// 0066cb7b  56                   push esi
// 0066cb7c  8b742450             mov esi, dword ptr [esp + 0x50]
// 0066cb80  51                   push ecx
// 0066cb81  56                   push esi
// 0066cb82  50                   push eax
// 0066cb83  8d542410             lea edx, [esp + 0x10]
// 0066cb87  52                   push edx
// 0066cb88  8d442438             lea eax, [esp + 0x38]
// 0066cb8c  50                   push eax
// 0066cb8d  e8eeb2f0ff           call 0x577e80
// 0066cb92  8bc8                 mov ecx, eax
// 0066cb94  e827b1f0ff           call 0x577cc0
// 0066cb99  8bc8                 mov ecx, eax
// 0066cb9b  e820b1f0ff           call 0x577cc0
// 0066cba0  8bc6                 mov eax, esi
// 0066cba2  5e                   pop esi
// 0066cba3  83c448               add esp, 0x48
// 0066cba6  c3                   ret 
// library rbxgs/util\Math.cpp (function ?momentToObjectSpace@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
