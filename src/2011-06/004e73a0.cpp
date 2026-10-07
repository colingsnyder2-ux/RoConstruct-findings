// roc 2011-06 004e73a0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e73a0
//
// 004e73a0  e89bfeffff           call 0x4e7240
// 004e73a5  33c9                 xor ecx, ecx
// 004e73a7  84c0                 test al, al
// 004e73a9  0f94c1               sete cl
// 004e73ac  8ac1                 mov al, cl
// 004e73ae  c3                   ret 
// library rbx2016-raknet/CloudClient.cpp (function ?DoEndianSwap@BitStream@RakNet@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudClient.cpp
