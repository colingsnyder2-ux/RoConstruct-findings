// roc 2009-06 005104c0  unit: CSHA1  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005104c0
//
// 005104c0  8b442404             mov eax, dword ptr [esp + 4]
// 005104c4  83c801               or eax, 1
// 005104c7  c781c809000000000000 mov dword ptr [ecx + 0x9c8], 0
// 005104d1  8901                 mov dword ptr [ecx], eax
// 005104d3  83c104               add ecx, 4
// 005104d6  ba6f020000           mov edx, 0x26f
// 005104db  eb03                 jmp 0x5104e0
// 005104dd  8d4900               lea ecx, [ecx]
// 005104e0  69c0cd0d0100         imul eax, eax, 0x10dcd
// 005104e6  8901                 mov dword ptr [ecx], eax
// 005104e8  83c104               add ecx, 4
// 005104eb  83ea01               sub edx, 1
// 005104ee  75f0                 jne 0x5104e0
// 005104f0  c20400               ret 4
// library rbx2016-raknet/Rand.cpp (function ?SeedMT@RakNetRandom@RakNet@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
