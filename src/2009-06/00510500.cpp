// roc 2009-06 00510500  unit: CSHA1  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00510500
//
// 00510500  8b442404             mov eax, dword ptr [esp + 4]
// 00510504  83c801               or eax, 1
// 00510507  c705b0659f0000000000 mov dword ptr [0x9f65b0], 0
// 00510511  a30809a400           mov dword ptr [0xa40908], eax
// 00510516  b90c09a400           mov ecx, 0xa4090c
// 0051051b  ba6f020000           mov edx, 0x26f
// 00510520  69c0cd0d0100         imul eax, eax, 0x10dcd
// 00510526  8901                 mov dword ptr [ecx], eax
// 00510528  83c104               add ecx, 4
// 0051052b  83ea01               sub edx, 1
// 0051052e  75f0                 jne 0x510520
// 00510530  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?seedMT@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
