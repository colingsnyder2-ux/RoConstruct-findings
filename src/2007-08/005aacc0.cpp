// roc 2007-08 005aacc0  unit: RBX::World  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aacc0
//
// 005aacc0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005aacc4  8b442408             mov eax, dword ptr [esp + 8]
// 005aacc8  83ec48               sub esp, 0x48
// 005aaccb  56                   push esi
// 005aaccc  8b742450             mov esi, dword ptr [esp + 0x50]
// 005aacd0  51                   push ecx
// 005aacd1  56                   push esi
// 005aacd2  50                   push eax
// 005aacd3  8d542410             lea edx, [esp + 0x10]
// 005aacd7  52                   push edx
// 005aacd8  8d442438             lea eax, [esp + 0x38]
// 005aacdc  50                   push eax
// 005aacdd  e8beecf5ff           call 0x5099a0
// 005aace2  8bc8                 mov ecx, eax
// 005aace4  e867eaf5ff           call 0x509750
// 005aace9  8bc8                 mov ecx, eax
// 005aaceb  e860eaf5ff           call 0x509750
// 005aacf0  8bc6                 mov eax, esi
// 005aacf2  5e                   pop esi
// 005aacf3  83c448               add esp, 0x48
// 005aacf6  c3                   ret 
// library rbxgs/util\Math.cpp (function ?momentToObjectSpace@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
