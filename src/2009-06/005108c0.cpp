// roc 2009-06 005108c0  unit: CSHA1  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005108c0
//
// 005108c0  a1cc12a400           mov eax, dword ptr [0xa412cc]
// 005108c5  85c0                 test eax, eax
// 005108c7  741c                 je 0x5108e5
// 005108c9  83f801               cmp eax, 1
// 005108cc  7e07                 jle 0x5108d5
// 005108ce  48                   dec eax
// 005108cf  a3cc12a400           mov dword ptr [0xa412cc], eax
// 005108d4  c3                   ret 
// 005108d5  ff15f8ef8900         call dword ptr [0x89eff8]
// 005108db  c705cc12a40000000000 mov dword ptr [0xa412cc], 0
// 005108e5  c3                   ret 
// library rbx2016-raknet/WSAStartupSingleton.cpp (function ?Deref@WSAStartupSingleton@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet WSAStartupSingleton.cpp
