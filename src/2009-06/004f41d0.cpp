// roc 2009-06 004f41d0  unit: RBX::Network::VMarker::?$EventDesc  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f41d0
//
// 004f41d0  56                   push esi
// 004f41d1  8bf1                 mov esi, ecx
// 004f41d3  e8b81efeff           call 0x4d6090
// 004f41d8  33c0                 xor eax, eax
// 004f41da  b101                 mov cl, 1
// 004f41dc  894604               mov dword ptr [esi + 4], eax
// 004f41df  88460a               mov byte ptr [esi + 0xa], al
// 004f41e2  88860a010000         mov byte ptr [esi + 0x10a], al
// 004f41e8  c706cc7e8c00         mov dword ptr [esi], 0x8c7ecc
// 004f41ee  884e08               mov byte ptr [esi + 8], cl
// 004f41f1  884e09               mov byte ptr [esi + 9], cl
// 004f41f4  8bc6                 mov eax, esi
// 004f41f6  5e                   pop esi
// 004f41f7  c3                   ret 
// library rbxgs-raknet/PacketLogger.cpp (function ??0PacketLogger@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
