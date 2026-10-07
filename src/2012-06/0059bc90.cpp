// roc 2012-06 0059bc90  unit: VAuthoringSettings::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059bc90
//
// 0059bc90  83b97808000000       cmp dword ptr [ecx + 0x878], 0
// 0059bc97  7603                 jbe 0x59bc9c
// 0059bc99  b001                 mov al, 1
// 0059bc9b  c3                   ret 
// 0059bc9c  33c0                 xor eax, eax
// 0059bc9e  398190090000         cmp dword ptr [ecx + 0x990], eax
// 0059bca4  0f95c0               setne al
// 0059bca7  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?IsOutgoingDataWaiting@ReliabilityLayer@RakNet@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
