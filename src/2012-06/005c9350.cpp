// roc 2012-06 005c9350  unit: RBX::AdornRbxGfx  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c9350
//
// 005c9350  56                   push esi
// 005c9351  6a00                 push 0
// 005c9353  6a00                 push 0
// 005c9355  6a00                 push 0
// 005c9357  6a00                 push 0
// 005c9359  8bf1                 mov esi, ecx
// 005c935b  ff153c22b200         call dword ptr [0xb2223c]
// 005c9361  8906                 mov dword ptr [esi], eax
// 005c9363  5e                   pop esi
// 005c9364  c3                   ret 
// library rbx2016-raknet/SignaledEvent.cpp (function ?InitEvent@SignaledEvent@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SignaledEvent.cpp
