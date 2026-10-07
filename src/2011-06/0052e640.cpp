// roc 2011-06 0052e640  unit: RBX::Network::ProfiledRakPeer  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052e640
//
// 0052e640  8b442404             mov eax, dword ptr [esp + 4]
// 0052e644  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052e648  8b00                 mov eax, dword ptr [eax]
// 0052e64a  8b09                 mov ecx, dword ptr [ecx]
// 0052e64c  3bc1                 cmp eax, ecx
// 0052e64e  7304                 jae 0x52e654
// 0052e650  83c8ff               or eax, 0xffffffff
// 0052e653  c3                   ret 
// 0052e654  33d2                 xor edx, edx
// 0052e656  3bc1                 cmp eax, ecx
// 0052e658  0f95c2               setne dl
// 0052e65b  8bc2                 mov eax, edx
// 0052e65d  c3                   ret 
// library rbx2016-raknet/FileListTransfer.cpp (function ??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
