// roc 2011-06 0052d9a0  unit: RBX::Network::ProfiledRakPeer  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052d9a0
//
// 0052d9a0  0fb6442404           movzx eax, byte ptr [esp + 4]
// 0052d9a5  3b4104               cmp eax, dword ptr [ecx + 4]
// 0052d9a8  7308                 jae 0x52d9b2
// 0052d9aa  8b09                 mov ecx, dword ptr [ecx]
// 0052d9ac  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0052d9af  c20400               ret 4
// 0052d9b2  33c0                 xor eax, eax
// 0052d9b4  c20400               ret 4
// library rbxgs-raknet/RPCMap.cpp (function ?GetNodeFromIndex@RPCMap@@QAEPAURPCNode@@E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
