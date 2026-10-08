// roc 2011-06 0052ec80  unit: RBX::Network::ProfiledRakPeer  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052ec80
//
// 0052ec80  0fb6442404           movzx eax, byte ptr [esp + 4]
// 0052ec85  3b4104               cmp eax, dword ptr [ecx + 4]
// 0052ec88  7205                 jb 0x52ec8f
// 0052ec8a  33c0                 xor eax, eax
// 0052ec8c  c20400               ret 4
// 0052ec8f  8b09                 mov ecx, dword ptr [ecx]
// 0052ec91  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0052ec94  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?GetOrderingListAtOrderingStream@ReliabilityLayer@@AAEPAV?$LinkedList@PAUInternalPacket@@@DataStructures@@E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
