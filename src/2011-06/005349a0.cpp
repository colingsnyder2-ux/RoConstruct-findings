// roc 2011-06 005349a0  unit: seg_00530000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005349a0
//
// 005349a0  8b442404             mov eax, dword ptr [esp + 4]
// 005349a4  83c801               or eax, 1
// 005349a7  c781c809000000000000 mov dword ptr [ecx + 0x9c8], 0
// 005349b1  8901                 mov dword ptr [ecx], eax
// 005349b3  83c104               add ecx, 4
// 005349b6  ba6f020000           mov edx, 0x26f
// 005349bb  eb03                 jmp 0x5349c0
// 005349bd  8d4900               lea ecx, [ecx]
// 005349c0  69c0cd0d0100         imul eax, eax, 0x10dcd
// 005349c6  8901                 mov dword ptr [ecx], eax
// 005349c8  83c104               add ecx, 4
// 005349cb  83ea01               sub edx, 1
// 005349ce  75f0                 jne 0x5349c0
// 005349d0  c20400               ret 4
// library rbx2016-raknet/Rand.cpp (function ?SeedMT@RakNetRandom@RakNet@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
