// roc 2012-06 00598e20  unit: RBX::Network::ServerReplicator  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00598e20
//
// 00598e20  8b442404             mov eax, dword ptr [esp + 4]
// 00598e24  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00598e28  8b00                 mov eax, dword ptr [eax]
// 00598e2a  8b09                 mov ecx, dword ptr [ecx]
// 00598e2c  3bc1                 cmp eax, ecx
// 00598e2e  7d04                 jge 0x598e34
// 00598e30  83c8ff               or eax, 0xffffffff
// 00598e33  c3                   ret 
// 00598e34  33d2                 xor edx, edx
// 00598e36  3bc1                 cmp eax, ecx
// 00598e38  0f95c2               setne dl
// 00598e3b  8bc2                 mov eax, edx
// 00598e3d  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ??$defaultMapKeyComparison@H@DataStructures@@YAHABH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp
