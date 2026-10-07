// roc 2010-06 00501c20  unit: RBX::Network::ClientReplicator  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00501c20
//
// 00501c20  8b442404             mov eax, dword ptr [esp + 4]
// 00501c24  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00501c28  8b00                 mov eax, dword ptr [eax]
// 00501c2a  8b09                 mov ecx, dword ptr [ecx]
// 00501c2c  3bc1                 cmp eax, ecx
// 00501c2e  7304                 jae 0x501c34
// 00501c30  83c8ff               or eax, 0xffffffff
// 00501c33  c3                   ret 
// 00501c34  33d2                 xor edx, edx
// 00501c36  3bc1                 cmp eax, ecx
// 00501c38  0f95c2               setne dl
// 00501c3b  8bc2                 mov eax, edx
// 00501c3d  c3                   ret 
// library rbx2016-raknet/FileListTransfer.cpp (function ??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
