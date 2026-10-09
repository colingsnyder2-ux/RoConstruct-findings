// roc 2009-12 00553270  unit: RBX::Network::ClientReplicator  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00553270
//
// 00553270  8b442404             mov eax, dword ptr [esp + 4]
// 00553274  bae8030000           mov edx, 0x3e8
// 00553279  f7e2                 mul edx
// 0055327b  894130               mov dword ptr [ecx + 0x30], eax
// 0055327e  895134               mov dword ptr [ecx + 0x34], edx
// 00553281  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?SetUnreliableTimeout@ReliabilityLayer@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
