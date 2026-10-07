// roc 2011-06 0052d910  unit: RBX::Network::ProfiledRakPeer  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052d910
//
// 0052d910  a15096cb00           mov eax, dword ptr [0xcb9650]
// 0052d915  85c0                 test eax, eax
// 0052d917  741c                 je 0x52d935
// 0052d919  83f801               cmp eax, 1
// 0052d91c  7e07                 jle 0x52d925
// 0052d91e  48                   dec eax
// 0052d91f  a35096cb00           mov dword ptr [0xcb9650], eax
// 0052d924  c3                   ret 
// 0052d925  ff15781da400         call dword ptr [0xa41d78]
// 0052d92b  c7055096cb0000000000 mov dword ptr [0xcb9650], 0
// 0052d935  c3                   ret 
// library rbx2016-raknet/WSAStartupSingleton.cpp (function ?Deref@WSAStartupSingleton@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet WSAStartupSingleton.cpp
