// roc 2010-06 0051ee60  unit: CSHA1  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051ee60
//
// 0051ee60  a1c887c000           mov eax, dword ptr [0xc087c8]
// 0051ee65  85c0                 test eax, eax
// 0051ee67  741c                 je 0x51ee85
// 0051ee69  83f801               cmp eax, 1
// 0051ee6c  7e07                 jle 0x51ee75
// 0051ee6e  48                   dec eax
// 0051ee6f  a3c887c000           mov dword ptr [0xc087c8], eax
// 0051ee74  c3                   ret 
// 0051ee75  ff158cbd9e00         call dword ptr [0x9ebd8c]
// 0051ee7b  c705c887c00000000000 mov dword ptr [0xc087c8], 0
// 0051ee85  c3                   ret 
// library rbx2016-raknet/WSAStartupSingleton.cpp (function ?Deref@WSAStartupSingleton@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet WSAStartupSingleton.cpp
