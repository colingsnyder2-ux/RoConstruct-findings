// roc 2011-06 00526bc0  unit: RBX::Network::ProfiledRakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00526bc0
//
// 00526bc0  8a4104               mov al, byte ptr [ecx + 4]
// 00526bc3  33c9                 xor ecx, ecx
// 00526bc5  84c0                 test al, al
// 00526bc7  0f94c1               sete cl
// 00526bca  8ac1                 mov al, cl
// 00526bcc  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?IsActive@RakPeer@RakNet@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
