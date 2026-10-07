// roc 2008-06 004d3fb0  unit: seg_004d0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d3fb0
//
// 004d3fb0  8b442404             mov eax, dword ptr [esp + 4]
// 004d3fb4  83c801               or eax, 1
// 004d3fb7  c70570d0930000000000 mov dword ptr [0x93d070], 0
// 004d3fc1  a3381d9700           mov dword ptr [0x971d38], eax
// 004d3fc6  b93c1d9700           mov ecx, 0x971d3c
// 004d3fcb  ba6f020000           mov edx, 0x26f
// 004d3fd0  69c0cd0d0100         imul eax, eax, 0x10dcd
// 004d3fd6  8901                 mov dword ptr [ecx], eax
// 004d3fd8  83c104               add ecx, 4
// 004d3fdb  83ea01               sub edx, 1
// 004d3fde  75f0                 jne 0x4d3fd0
// 004d3fe0  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?seedMT@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
