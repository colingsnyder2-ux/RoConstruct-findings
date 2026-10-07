// roc 2010-06 004fdf70  unit: RBX::Network::IdSerializer  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fdf70
//
// 004fdf70  6aff                 push -1
// 004fdf72  684b1d9a00           push 0x9a1d4b
// 004fdf77  64a100000000         mov eax, dword ptr fs:[0]
// 004fdf7d  50                   push eax
// 004fdf7e  64892500000000       mov dword ptr fs:[0], esp
// 004fdf85  51                   push ecx
// 004fdf86  6804080000           push 0x804
// 004fdf8b  e8109a2a00           call 0x7a79a0
// 004fdf90  83c404               add esp, 4
// 004fdf93  890424               mov dword ptr [esp], eax
// 004fdf96  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004fdf9e  85c0                 test eax, eax
// 004fdfa0  7416                 je 0x4fdfb8
// 004fdfa2  8bc8                 mov ecx, eax
// 004fdfa4  e8e7781300           call 0x635890
// 004fdfa9  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004fdfad  64890d00000000       mov dword ptr fs:[0], ecx
// 004fdfb4  83c410               add esp, 0x10
// 004fdfb7  c3                   ret 
// 004fdfb8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004fdfbc  33c0                 xor eax, eax
// 004fdfbe  64890d00000000       mov dword ptr fs:[0], ecx
// 004fdfc5  83c410               add esp, 0x10
// 004fdfc8  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ??$OP_NEW@VHuffmanEncodingTree@RakNet@@@RakNet@@YAPAVHuffmanEncodingTree@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp
