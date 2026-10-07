// roc 2009-06 00510890  unit: CSHA1  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00510890
//
// 00510890  a1cc12a400           mov eax, dword ptr [0xa412cc]
// 00510895  40                   inc eax
// 00510896  81ec90010000         sub esp, 0x190
// 0051089c  a3cc12a400           mov dword ptr [0xa412cc], eax
// 005108a1  83f801               cmp eax, 1
// 005108a4  750f                 jne 0x5108b5
// 005108a6  8d0424               lea eax, [esp]
// 005108a9  50                   push eax
// 005108aa  6802020000           push 0x202
// 005108af  ff15fcef8900         call dword ptr [0x89effc]
// 005108b5  81c490010000         add esp, 0x190
// 005108bb  c3                   ret 
// library rbx2016-raknet/WSAStartupSingleton.cpp (function ?AddRef@WSAStartupSingleton@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet WSAStartupSingleton.cpp
