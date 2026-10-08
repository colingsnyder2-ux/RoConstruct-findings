// roc 2010-06 00501b70  unit: RBX::Network::ClientReplicator  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00501b70
//
// 00501b70  8b442404             mov eax, dword ptr [esp + 4]
// 00501b74  bae8030000           mov edx, 0x3e8
// 00501b79  f7e2                 mul edx
// 00501b7b  894130               mov dword ptr [ecx + 0x30], eax
// 00501b7e  895134               mov dword ptr [ecx + 0x34], edx
// 00501b81  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?SetUnreliableTimeout@ReliabilityLayer@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
