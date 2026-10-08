// roc 2010-06 005009d0  unit: RBX::Network::VMarker::?$EventDesc  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005009d0
//
// 005009d0  56                   push esi
// 005009d1  8bf1                 mov esi, ecx
// 005009d3  e89895fdff           call 0x4d9f70
// 005009d8  33c0                 xor eax, eax
// 005009da  b101                 mov cl, 1
// 005009dc  894604               mov dword ptr [esi + 4], eax
// 005009df  88460a               mov byte ptr [esi + 0xa], al
// 005009e2  88860a010000         mov byte ptr [esi + 0x10a], al
// 005009e8  c706ccc8a100         mov dword ptr [esi], 0xa1c8cc
// 005009ee  884e08               mov byte ptr [esi + 8], cl
// 005009f1  884e09               mov byte ptr [esi + 9], cl
// 005009f4  8bc6                 mov eax, esi
// 005009f6  5e                   pop esi
// 005009f7  c3                   ret 
// library rbxgs-raknet/PacketLogger.cpp (function ??0PacketLogger@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
