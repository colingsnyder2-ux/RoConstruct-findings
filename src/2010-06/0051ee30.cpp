// roc 2010-06 0051ee30  unit: CSHA1  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051ee30
//
// 0051ee30  a1c887c000           mov eax, dword ptr [0xc087c8]
// 0051ee35  40                   inc eax
// 0051ee36  81ec90010000         sub esp, 0x190
// 0051ee3c  a3c887c000           mov dword ptr [0xc087c8], eax
// 0051ee41  83f801               cmp eax, 1
// 0051ee44  750f                 jne 0x51ee55
// 0051ee46  8d0424               lea eax, [esp]
// 0051ee49  50                   push eax
// 0051ee4a  6802020000           push 0x202
// 0051ee4f  ff1570bd9e00         call dword ptr [0x9ebd70]
// 0051ee55  81c490010000         add esp, 0x190
// 0051ee5b  c3                   ret 
// library rbx2016-raknet/WSAStartupSingleton.cpp (function ?AddRef@WSAStartupSingleton@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet WSAStartupSingleton.cpp
