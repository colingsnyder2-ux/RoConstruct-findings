// roc 2009-06 004f5330  unit: RBX::Network::ClientReplicator  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f5330
//
// 004f5330  8b442404             mov eax, dword ptr [esp + 4]
// 004f5334  bae8030000           mov edx, 0x3e8
// 004f5339  f7e2                 mul edx
// 004f533b  894130               mov dword ptr [ecx + 0x30], eax
// 004f533e  895134               mov dword ptr [ecx + 0x34], edx
// 004f5341  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?SetUnreliableTimeout@ReliabilityLayer@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
