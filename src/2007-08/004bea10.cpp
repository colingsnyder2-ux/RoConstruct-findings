// roc 2007-08 004bea10  unit: RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bea10
//
// 004bea10  8a4104               mov al, byte ptr [ecx + 4]
// 004bea13  33c9                 xor ecx, ecx
// 004bea15  84c0                 test al, al
// 004bea17  0f94c1               sete cl
// 004bea1a  8ac1                 mov al, cl
// 004bea1c  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?IsActive@RakPeer@RakNet@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
