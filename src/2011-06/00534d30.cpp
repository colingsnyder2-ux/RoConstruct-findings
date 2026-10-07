// roc 2011-06 00534d30  unit: seg_00530000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00534d30
//
// 00534d30  56                   push esi
// 00534d31  6a00                 push 0
// 00534d33  6a00                 push 0
// 00534d35  6a00                 push 0
// 00534d37  6a00                 push 0
// 00534d39  8bf1                 mov esi, ecx
// 00534d3b  ff152803a400         call dword ptr [0xa40328]
// 00534d41  8906                 mov dword ptr [esi], eax
// 00534d43  5e                   pop esi
// 00534d44  c3                   ret 
// library rbx2016-raknet/SignaledEvent.cpp (function ?InitEvent@SignaledEvent@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SignaledEvent.cpp
