// roc 2012-06 005c7980  unit: RakNet::RakPeer  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c7980
//
// 005c7980  8b442404             mov eax, dword ptr [esp + 4]
// 005c7984  83c801               or eax, 1
// 005c7987  c7050c16d90000000000 mov dword ptr [0xd9160c], 0
// 005c7991  a36869e200           mov dword ptr [0xe26968], eax
// 005c7996  b96c69e200           mov ecx, 0xe2696c
// 005c799b  ba6f020000           mov edx, 0x26f
// 005c79a0  69c0cd0d0100         imul eax, eax, 0x10dcd
// 005c79a6  8901                 mov dword ptr [ecx], eax
// 005c79a8  83c104               add ecx, 4
// 005c79ab  83ea01               sub edx, 1
// 005c79ae  75f0                 jne 0x5c79a0
// 005c79b0  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?seedMT@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
