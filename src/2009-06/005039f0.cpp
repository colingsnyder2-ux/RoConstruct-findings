// roc 2009-06 005039f0  unit: RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005039f0
//
// 005039f0  8a4104               mov al, byte ptr [ecx + 4]
// 005039f3  33c9                 xor ecx, ecx
// 005039f5  84c0                 test al, al
// 005039f7  0f94c1               sete cl
// 005039fa  8ac1                 mov al, cl
// 005039fc  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?IsActive@RakPeer@RakNet@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
