// roc 2012-06 005c7940  unit: RakNet::RakPeer  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c7940
//
// 005c7940  8b442404             mov eax, dword ptr [esp + 4]
// 005c7944  83c801               or eax, 1
// 005c7947  c781c809000000000000 mov dword ptr [ecx + 0x9c8], 0
// 005c7951  8901                 mov dword ptr [ecx], eax
// 005c7953  83c104               add ecx, 4
// 005c7956  ba6f020000           mov edx, 0x26f
// 005c795b  eb03                 jmp 0x5c7960
// 005c795d  8d4900               lea ecx, [ecx]
// 005c7960  69c0cd0d0100         imul eax, eax, 0x10dcd
// 005c7966  8901                 mov dword ptr [ecx], eax
// 005c7968  83c104               add ecx, 4
// 005c796b  83ea01               sub edx, 1
// 005c796e  75f0                 jne 0x5c7960
// 005c7970  c20400               ret 4
// library rbx2016-raknet/Rand.cpp (function ?SeedMT@RakNetRandom@RakNet@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
