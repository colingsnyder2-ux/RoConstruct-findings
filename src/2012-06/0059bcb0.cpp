// roc 2012-06 0059bcb0  unit: VAuthoringSettings::?$FactoryProduct  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059bcb0
//
// 0059bcb0  33c0                 xor eax, eax
// 0059bcb2  3b81540f0000         cmp eax, dword ptr [ecx + 0xf54]
// 0059bcb8  1bc0                 sbb eax, eax
// 0059bcba  f7d8                 neg eax
// 0059bcbc  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?AreAcksWaiting@ReliabilityLayer@RakNet@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
