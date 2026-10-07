// roc 2009-06 004e0ec0  unit: RBX::Network::IdSerializer  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e0ec0
//
// 004e0ec0  6aff                 push -1
// 004e0ec2  687b9c8600           push 0x869c7b
// 004e0ec7  64a100000000         mov eax, dword ptr fs:[0]
// 004e0ecd  50                   push eax
// 004e0ece  64892500000000       mov dword ptr fs:[0], esp
// 004e0ed5  51                   push ecx
// 004e0ed6  6804080000           push 0x804
// 004e0edb  e8587b2300           call 0x718a38
// 004e0ee0  83c404               add esp, 4
// 004e0ee3  890424               mov dword ptr [esp], eax
// 004e0ee6  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004e0eee  85c0                 test eax, eax
// 004e0ef0  7416                 je 0x4e0f08
// 004e0ef2  8bc8                 mov ecx, eax
// 004e0ef4  e8879ffbff           call 0x49ae80
// 004e0ef9  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e0efd  64890d00000000       mov dword ptr fs:[0], ecx
// 004e0f04  83c410               add esp, 0x10
// 004e0f07  c3                   ret 
// 004e0f08  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e0f0c  33c0                 xor eax, eax
// 004e0f0e  64890d00000000       mov dword ptr fs:[0], ecx
// 004e0f15  83c410               add esp, 0x10
// 004e0f18  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ??$OP_NEW@VHuffmanEncodingTree@RakNet@@@RakNet@@YAPAVHuffmanEncodingTree@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp
