// roc 2012-06 005c9430  unit: RBX::AdornRbxGfx  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c9430
//
// 005c9430  a1bc73e200           mov eax, dword ptr [0xe273bc]
// 005c9435  40                   inc eax
// 005c9436  81ec90010000         sub esp, 0x190
// 005c943c  a3bc73e200           mov dword ptr [0xe273bc], eax
// 005c9441  83f801               cmp eax, 1
// 005c9444  750f                 jne 0x5c9455
// 005c9446  8d0424               lea eax, [esp]
// 005c9449  50                   push eax
// 005c944a  6802020000           push 0x202
// 005c944f  ff154c3eb200         call dword ptr [0xb23e4c]
// 005c9455  81c490010000         add esp, 0x190
// 005c945b  c3                   ret 
// library rbx2016-raknet/WSAStartupSingleton.cpp (function ?AddRef@WSAStartupSingleton@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet WSAStartupSingleton.cpp
