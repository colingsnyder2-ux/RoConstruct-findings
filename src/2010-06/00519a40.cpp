// roc 2010-06 00519a40  unit: RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00519a40
//
// 00519a40  8a4104               mov al, byte ptr [ecx + 4]
// 00519a43  33c9                 xor ecx, ecx
// 00519a45  84c0                 test al, al
// 00519a47  0f94c1               sete cl
// 00519a4a  8ac1                 mov al, cl
// 00519a4c  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?IsActive@RakPeer@RakNet@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
