// roc 2012-06 0059a770  unit: RBX::Network::Marker  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059a770
//
// 0059a770  8b442404             mov eax, dword ptr [esp + 4]
// 0059a774  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059a778  8b00                 mov eax, dword ptr [eax]
// 0059a77a  8b09                 mov ecx, dword ptr [ecx]
// 0059a77c  3bc1                 cmp eax, ecx
// 0059a77e  7304                 jae 0x59a784
// 0059a780  83c8ff               or eax, 0xffffffff
// 0059a783  c3                   ret 
// 0059a784  33d2                 xor edx, edx
// 0059a786  3bc1                 cmp eax, ecx
// 0059a788  0f95c2               setne dl
// 0059a78b  8bc2                 mov eax, edx
// 0059a78d  c3                   ret 
// library rbx2016-raknet/FileListTransfer.cpp (function ??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
