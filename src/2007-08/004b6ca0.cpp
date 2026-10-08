// roc 2007-08 004b6ca0  unit: RBX::Network::Replicator  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b6ca0
//
// 004b6ca0  56                   push esi
// 004b6ca1  8bf1                 mov esi, ecx
// 004b6ca3  e83826feff           call 0x4992e0
// 004b6ca8  33c0                 xor eax, eax
// 004b6caa  b101                 mov cl, 1
// 004b6cac  894604               mov dword ptr [esi + 4], eax
// 004b6caf  88460a               mov byte ptr [esi + 0xa], al
// 004b6cb2  88860a010000         mov byte ptr [esi + 0x10a], al
// 004b6cb8  c70624e17900         mov dword ptr [esi], 0x79e124
// 004b6cbe  884e08               mov byte ptr [esi + 8], cl
// 004b6cc1  884e09               mov byte ptr [esi + 9], cl
// 004b6cc4  8bc6                 mov eax, esi
// 004b6cc6  5e                   pop esi
// 004b6cc7  c3                   ret 
// library rbxgs-raknet/PacketLogger.cpp (function ??0PacketLogger@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
