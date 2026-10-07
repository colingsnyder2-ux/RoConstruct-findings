// roc 2011-06 005349e0  unit: seg_00530000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005349e0
//
// 005349e0  8b442404             mov eax, dword ptr [esp + 4]
// 005349e4  83c801               or eax, 1
// 005349e7  c705d8fac20000000000 mov dword ptr [0xc2fad8], 0
// 005349f1  a39096cb00           mov dword ptr [0xcb9690], eax
// 005349f6  b99496cb00           mov ecx, 0xcb9694
// 005349fb  ba6f020000           mov edx, 0x26f
// 00534a00  69c0cd0d0100         imul eax, eax, 0x10dcd
// 00534a06  8901                 mov dword ptr [ecx], eax
// 00534a08  83c104               add ecx, 4
// 00534a0b  83ea01               sub edx, 1
// 00534a0e  75f0                 jne 0x534a00
// 00534a10  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?seedMT@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
