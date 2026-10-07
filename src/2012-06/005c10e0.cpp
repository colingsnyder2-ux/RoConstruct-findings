// roc 2012-06 005c10e0  unit: RakNet::RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c10e0
//
// 005c10e0  8a4104               mov al, byte ptr [ecx + 4]
// 005c10e3  33c9                 xor ecx, ecx
// 005c10e5  84c0                 test al, al
// 005c10e7  0f94c1               sete cl
// 005c10ea  8ac1                 mov al, cl
// 005c10ec  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?IsActive@RakPeer@RakNet@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
