// roc 2011-06 0077e020  unit: lua_exception  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e020
//
// 0077e020  56                   push esi
// 0077e021  8bf1                 mov esi, ecx
// 0077e023  807e1400             cmp byte ptr [esi + 0x14], 0
// 0077e027  c7062c78ab00         mov dword ptr [esi], 0xab782c
// 0077e02d  7518                 jne 0x77e047
// 0077e02f  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077e032  c7400800000000       mov dword ptr [eax + 8], 0
// 0077e039  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077e03c  6afe                 push -2
// 0077e03e  51                   push ecx
// 0077e03f  e82c43feff           call 0x762370
// 0077e044  83c408               add esp, 8
// 0077e047  8bce                 mov ecx, esi
// 0077e049  5e                   pop esi
// 0077e04a  ff25640aa400         jmp dword ptr [0xa40a64]
// copied from an identical function in another client (function ??1lua_exception@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: lua-5.1.2-dll roc_unit_6878e048cc528e62.cpp