// roc 2012-06 005c9460  unit: RBX::AdornRbxGfx  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c9460
//
// 005c9460  a1bc73e200           mov eax, dword ptr [0xe273bc]
// 005c9465  85c0                 test eax, eax
// 005c9467  741c                 je 0x5c9485
// 005c9469  83f801               cmp eax, 1
// 005c946c  7e07                 jle 0x5c9475
// 005c946e  48                   dec eax
// 005c946f  a3bc73e200           mov dword ptr [0xe273bc], eax
// 005c9474  c3                   ret 
// 005c9475  ff15483eb200         call dword ptr [0xb23e48]
// 005c947b  c705bc73e20000000000 mov dword ptr [0xe273bc], 0
// 005c9485  c3                   ret 
// library rbx2016-raknet/WSAStartupSingleton.cpp (function ?Deref@WSAStartupSingleton@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet WSAStartupSingleton.cpp
