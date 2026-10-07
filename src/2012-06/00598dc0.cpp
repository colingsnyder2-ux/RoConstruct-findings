// roc 2012-06 00598dc0  unit: RBX::Network::ServerReplicator  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00598dc0
//
// 00598dc0  6aff                 push -1
// 00598dc2  68eb29ad00           push 0xad29eb
// 00598dc7  64a100000000         mov eax, dword ptr fs:[0]
// 00598dcd  50                   push eax
// 00598dce  64892500000000       mov dword ptr fs:[0], esp
// 00598dd5  51                   push ecx
// 00598dd6  6804080000           push 0x804
// 00598ddb  e83a933e00           call 0x98211a
// 00598de0  83c404               add esp, 4
// 00598de3  890424               mov dword ptr [esp], eax
// 00598de6  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00598dee  85c0                 test eax, eax
// 00598df0  7416                 je 0x598e08
// 00598df2  8bc8                 mov ecx, eax
// 00598df4  e8f70f2700           call 0x809df0
// 00598df9  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00598dfd  64890d00000000       mov dword ptr fs:[0], ecx
// 00598e04  83c410               add esp, 0x10
// 00598e07  c3                   ret 
// 00598e08  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00598e0c  33c0                 xor eax, eax
// 00598e0e  64890d00000000       mov dword ptr fs:[0], ecx
// 00598e15  83c410               add esp, 0x10
// 00598e18  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ??$OP_NEW@VHuffmanEncodingTree@RakNet@@@RakNet@@YAPAVHuffmanEncodingTree@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp
