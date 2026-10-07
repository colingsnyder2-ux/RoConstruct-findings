// roc 2010-06 0051ea50  unit: CSHA1  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051ea50
//
// 0051ea50  8b442404             mov eax, dword ptr [esp + 4]
// 0051ea54  83c801               or eax, 1
// 0051ea57  c781c809000000000000 mov dword ptr [ecx + 0x9c8], 0
// 0051ea61  8901                 mov dword ptr [ecx], eax
// 0051ea63  83c104               add ecx, 4
// 0051ea66  ba6f020000           mov edx, 0x26f
// 0051ea6b  eb03                 jmp 0x51ea70
// 0051ea6d  8d4900               lea ecx, [ecx]
// 0051ea70  69c0cd0d0100         imul eax, eax, 0x10dcd
// 0051ea76  8901                 mov dword ptr [ecx], eax
// 0051ea78  83c104               add ecx, 4
// 0051ea7b  83ea01               sub edx, 1
// 0051ea7e  75f0                 jne 0x51ea70
// 0051ea80  c20400               ret 4
// library rbx2016-raknet/Rand.cpp (function ?SeedMT@RakNetRandom@RakNet@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
