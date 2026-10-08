// roc 2007-03 005395b0  unit: seg_00530000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005395b0
//
// 005395b0  56                   push esi
// 005395b1  8bf1                 mov esi, ecx
// 005395b3  e8f83c0300           call 0x56d2b0
// 005395b8  6a08                 push 8
// 005395ba  8906                 mov dword ptr [esi], eax
// 005395bc  e8474b0e00           call 0x61e108
// 005395c1  83c404               add esp, 4
// 005395c4  85c0                 test eax, eax
// 005395c6  7411                 je 0x5395d9
// 005395c8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005395cc  c7002c987800         mov dword ptr [eax], 0x78982c
// 005395d2  d901                 fld dword ptr [ecx]
// 005395d4  d95804               fstp dword ptr [eax + 4]
// 005395d7  eb02                 jmp 0x5395db
// 005395d9  33c0                 xor eax, eax
// 005395db  8b4e04               mov ecx, dword ptr [esi + 4]
// 005395de  85c9                 test ecx, ecx
// 005395e0  894604               mov dword ptr [esi + 4], eax
// 005395e3  7408                 je 0x5395ed
// 005395e5  8b11                 mov edx, dword ptr [ecx]
// 005395e7  8b02                 mov eax, dword ptr [edx]
// 005395e9  6a01                 push 1
// 005395eb  ffd0                 call eax
// 005395ed  8bc6                 mov eax, esi
// 005395ef  5e                   pop esi
// 005395f0  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4M@Value@Reflection@RBX@@QAEAAV012@ABM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
