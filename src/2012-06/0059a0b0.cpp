// roc 2012-06 0059a0b0  unit: RBX::Network::Marker  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059a0b0
//
// 0059a0b0  8b442404             mov eax, dword ptr [esp + 4]
// 0059a0b4  bae8030000           mov edx, 0x3e8
// 0059a0b9  f7e2                 mul edx
// 0059a0bb  894118               mov dword ptr [ecx + 0x18], eax
// 0059a0be  89511c               mov dword ptr [ecx + 0x1c], edx
// 0059a0c1  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?SetUnreliableTimeout@ReliabilityLayer@RakNet@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
