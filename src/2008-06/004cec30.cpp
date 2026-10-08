// roc 2008-06 004cec30  unit: RBX::Network::PhysicsSender  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cec30
//
// 004cec30  8b442404             mov eax, dword ptr [esp + 4]
// 004cec34  bae8030000           mov edx, 0x3e8
// 004cec39  f7e2                 mul edx
// 004cec3b  894130               mov dword ptr [ecx + 0x30], eax
// 004cec3e  895134               mov dword ptr [ecx + 0x34], edx
// 004cec41  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?SetUnreliableTimeout@ReliabilityLayer@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
