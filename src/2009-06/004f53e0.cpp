// roc 2009-06 004f53e0  unit: RBX::Network::ClientReplicator  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f53e0
//
// 004f53e0  8b442404             mov eax, dword ptr [esp + 4]
// 004f53e4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f53e8  8b00                 mov eax, dword ptr [eax]
// 004f53ea  8b09                 mov ecx, dword ptr [ecx]
// 004f53ec  3bc1                 cmp eax, ecx
// 004f53ee  7304                 jae 0x4f53f4
// 004f53f0  83c8ff               or eax, 0xffffffff
// 004f53f3  c3                   ret 
// 004f53f4  33d2                 xor edx, edx
// 004f53f6  3bc1                 cmp eax, ecx
// 004f53f8  0f95c2               setne dl
// 004f53fb  8bc2                 mov eax, edx
// 004f53fd  c3                   ret 
// library rbx2016-raknet/FileListTransfer.cpp (function ??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
