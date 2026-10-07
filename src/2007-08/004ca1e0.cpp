// roc 2007-08 004ca1e0  unit: seg_004c0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ca1e0
//
// 004ca1e0  8b442404             mov eax, dword ptr [esp + 4]
// 004ca1e4  83c801               or eax, 1
// 004ca1e7  c705c02f890000000000 mov dword ptr [0x892fc0], 0
// 004ca1f1  a3f0ef8b00           mov dword ptr [0x8beff0], eax
// 004ca1f6  b9f4ef8b00           mov ecx, 0x8beff4
// 004ca1fb  ba6f020000           mov edx, 0x26f
// 004ca200  69c0cd0d0100         imul eax, eax, 0x10dcd
// 004ca206  8901                 mov dword ptr [ecx], eax
// 004ca208  83c104               add ecx, 4
// 004ca20b  83ea01               sub edx, 1
// 004ca20e  75f0                 jne 0x4ca200
// 004ca210  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?seedMT@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
