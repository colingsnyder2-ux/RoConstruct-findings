// roc 2007-03 004b97c0  unit: seg_004b0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b97c0
//
// 004b97c0  8b442404             mov eax, dword ptr [esp + 4]
// 004b97c4  83c801               or eax, 1
// 004b97c7  c7052414890000000000 mov dword ptr [0x891424], 0
// 004b97d1  a3a8948b00           mov dword ptr [0x8b94a8], eax
// 004b97d6  b9ac948b00           mov ecx, 0x8b94ac
// 004b97db  ba6f020000           mov edx, 0x26f
// 004b97e0  69c0cd0d0100         imul eax, eax, 0x10dcd
// 004b97e6  8901                 mov dword ptr [ecx], eax
// 004b97e8  83c104               add ecx, 4
// 004b97eb  83ea01               sub edx, 1
// 004b97ee  75f0                 jne 0x4b97e0
// 004b97f0  c3                   ret 
// library rbxgs-raknet/Rand.cpp (function ?seedMT@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet Rand.cpp
