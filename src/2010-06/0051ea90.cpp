// roc 2010-06 0051ea90  unit: CSHA1  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051ea90
//
// 0051ea90  8b442404             mov eax, dword ptr [esp + 4]
// 0051ea94  83c801               or eax, 1
// 0051ea97  c7055456b90000000000 mov dword ptr [0xb95654], 0
// 0051eaa1  a3f87dc000           mov dword ptr [0xc07df8], eax
// 0051eaa6  b9fc7dc000           mov ecx, 0xc07dfc
// 0051eaab  ba6f020000           mov edx, 0x26f
// 0051eab0  69c0cd0d0100         imul eax, eax, 0x10dcd
// 0051eab6  8901                 mov dword ptr [ecx], eax
// 0051eab8  83c104               add ecx, 4
// 0051eabb  83ea01               sub edx, 1
// 0051eabe  75f0                 jne 0x51eab0
// 0051eac0  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?seedMT@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
