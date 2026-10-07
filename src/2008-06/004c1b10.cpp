// roc 2008-06 004c1b10  unit: ProfiledRakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c1b10
//
// 004c1b10  8a4104               mov al, byte ptr [ecx + 4]
// 004c1b13  33c9                 xor ecx, ecx
// 004c1b15  84c0                 test al, al
// 004c1b17  0f94c1               sete cl
// 004c1b1a  8ac1                 mov al, cl
// 004c1b1c  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?IsActive@RakPeer@RakNet@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
