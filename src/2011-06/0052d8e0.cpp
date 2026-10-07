// roc 2011-06 0052d8e0  unit: RBX::Network::ProfiledRakPeer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052d8e0
//
// 0052d8e0  a15096cb00           mov eax, dword ptr [0xcb9650]
// 0052d8e5  40                   inc eax
// 0052d8e6  81ec90010000         sub esp, 0x190
// 0052d8ec  a35096cb00           mov dword ptr [0xcb9650], eax
// 0052d8f1  83f801               cmp eax, 1
// 0052d8f4  750f                 jne 0x52d905
// 0052d8f6  8d0424               lea eax, [esp]
// 0052d8f9  50                   push eax
// 0052d8fa  6802020000           push 0x202
// 0052d8ff  ff157c1da400         call dword ptr [0xa41d7c]
// 0052d905  81c490010000         add esp, 0x190
// 0052d90b  c3                   ret 
// library rbx2016-raknet/WSAStartupSingleton.cpp (function ?AddRef@WSAStartupSingleton@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet WSAStartupSingleton.cpp
