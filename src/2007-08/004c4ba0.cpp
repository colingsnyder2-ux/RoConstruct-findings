// roc 2007-08 004c4ba0  unit: RakPeer  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4ba0
//
// 004c4ba0  8b442404             mov eax, dword ptr [esp + 4]
// 004c4ba4  bae8030000           mov edx, 0x3e8
// 004c4ba9  f7e2                 mul edx
// 004c4bab  894130               mov dword ptr [ecx + 0x30], eax
// 004c4bae  895134               mov dword ptr [ecx + 0x34], edx
// 004c4bb1  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?SetUnreliableTimeout@ReliabilityLayer@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
