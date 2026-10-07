// roc 2011-06 0050c730  unit: RBX::Network::ServerReplicator  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050c730
//
// 0050c730  6aff                 push -1
// 0050c732  683b939f00           push 0x9f933b
// 0050c737  64a100000000         mov eax, dword ptr fs:[0]
// 0050c73d  50                   push eax
// 0050c73e  64892500000000       mov dword ptr fs:[0], esp
// 0050c745  51                   push ecx
// 0050c746  6804080000           push 0x804
// 0050c74b  e80ed92f00           call 0x80a05e
// 0050c750  83c404               add esp, 4
// 0050c753  890424               mov dword ptr [esp], eax
// 0050c756  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0050c75e  85c0                 test eax, eax
// 0050c760  7416                 je 0x50c778
// 0050c762  8bc8                 mov ecx, eax
// 0050c764  e8e7a31b00           call 0x6c6b50
// 0050c769  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050c76d  64890d00000000       mov dword ptr fs:[0], ecx
// 0050c774  83c410               add esp, 0x10
// 0050c777  c3                   ret 
// 0050c778  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050c77c  33c0                 xor eax, eax
// 0050c77e  64890d00000000       mov dword ptr fs:[0], ecx
// 0050c785  83c410               add esp, 0x10
// 0050c788  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ??$OP_NEW@VHuffmanEncodingTree@RakNet@@@RakNet@@YAPAVHuffmanEncodingTree@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp
