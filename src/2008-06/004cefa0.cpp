// roc 2008-06 004cefa0  unit: RBX::Network::PhysicsSender  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cefa0
//
// 004cefa0  8b442404             mov eax, dword ptr [esp + 4]
// 004cefa4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cefa8  8b00                 mov eax, dword ptr [eax]
// 004cefaa  8b09                 mov ecx, dword ptr [ecx]
// 004cefac  3bc1                 cmp eax, ecx
// 004cefae  7304                 jae 0x4cefb4
// 004cefb0  83c8ff               or eax, 0xffffffff
// 004cefb3  c3                   ret 
// 004cefb4  33d2                 xor edx, edx
// 004cefb6  3bc1                 cmp eax, ecx
// 004cefb8  0f95c2               setne dl
// 004cefbb  8bc2                 mov eax, edx
// 004cefbd  c3                   ret 
// library rbx2016-raknet/FileListTransfer.cpp (function ??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
