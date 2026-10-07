// roc 2011-06 0051f170  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0051f170
//
// 0051f170  56                   push esi
// 0051f171  68b8f9c200           push 0xc2f9b8
// 0051f176  8bf1                 mov esi, ecx
// 0051f178  e8b303fcff           call 0x4df530
// 0051f17d  84c0                 test al, al
// 0051f17f  7418                 je 0x51f199
// 0051f181  683c96cb00           push 0xcb963c
// 0051f186  8d4e10               lea ecx, [esi + 0x10]
// 0051f189  e8d2161b00           call 0x6d0860
// 0051f18e  84c0                 test al, al
// 0051f190  7407                 je 0x51f199
// 0051f192  b801000000           mov eax, 1
// 0051f197  5e                   pop esi
// 0051f198  c3                   ret 
// 0051f199  33c0                 xor eax, eax
// 0051f19b  5e                   pop esi
// 0051f19c  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?IsUndefined@AddressOrGUID@RakNet@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
